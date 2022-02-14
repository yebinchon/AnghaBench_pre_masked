
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_subdev {TYPE_3__* device; } ;
struct TYPE_10__ {int min_freq; int max_freq; int min_inputfreq; int max_inputfreq; int min_m; int max_m; int min_n; int max_n; } ;
struct TYPE_9__ {int min_freq; int max_freq; int min_inputfreq; int max_inputfreq; int min_m; int max_m; int min_n; int max_n; } ;
struct nvbios_pll {int max_p_usable; int refclk; TYPE_5__ vco2; TYPE_4__ vco1; } ;
struct TYPE_8__ {TYPE_2__* bios; } ;
struct TYPE_6__ {int chip; } ;
struct TYPE_7__ {TYPE_1__ version; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_subdev *VAR_1, struct nvbios_pll *VAR_2, int VAR_3,
       int *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8)
{
 int VAR_9 = VAR_1->device->bios->version.chip;
 int VAR_10 = VAR_2->vco1.min_freq, VAR_11 = VAR_2->vco1.max_freq;
 int VAR_12 = VAR_2->vco2.min_freq, VAR_13 = VAR_2->vco2.max_freq;
 int VAR_14 = VAR_2->vco1.min_inputfreq, VAR_15 = VAR_2->vco2.min_inputfreq;
 int VAR_16 = VAR_2->vco1.max_inputfreq, VAR_17 = VAR_2->vco2.max_inputfreq;
 int VAR_18 = VAR_2->vco1.min_m, VAR_19 = VAR_2->vco1.max_m;
 int VAR_20 = VAR_2->vco1.min_n, VAR_21 = VAR_2->vco1.max_n;
 int VAR_22 = VAR_2->vco2.min_m, VAR_23 = VAR_2->vco2.max_m;
 int VAR_24 = VAR_2->vco2.min_n, VAR_25 = VAR_2->vco2.max_n;
 int VAR_26 = VAR_2->max_p_usable;
 int VAR_27 = VAR_2->refclk;
 bool VAR_28 = (VAR_22 == VAR_23 && VAR_24 == VAR_25);
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37;
 int VAR_38, VAR_39 = VAR_0;
 int VAR_40 = 0;

 int VAR_41 = (VAR_13 - VAR_13/200) / 2;
 for (VAR_33 = 0; VAR_3 && VAR_33 < VAR_26 && VAR_3 <= (VAR_41 >> VAR_33); VAR_33++)
  ;
 VAR_34 = VAR_3 << VAR_33;

 if (VAR_13 < VAR_3 + VAR_3/200)
  VAR_13 = VAR_3 + VAR_3/200;

 for (VAR_29 = VAR_18; VAR_29 <= VAR_19; VAR_29++) {
  if (VAR_27/VAR_29 < VAR_14)
   return VAR_40;
  if (VAR_27/VAR_29 > VAR_16)
   continue;

  for (VAR_30 = VAR_20; VAR_30 <= VAR_21; VAR_30++) {
   VAR_35 = VAR_27 * VAR_30 / VAR_29;
   if (VAR_35 < VAR_10)
    continue;
   if (VAR_35 > VAR_11)
    break;

   for (VAR_31 = VAR_22; VAR_31 <= VAR_23; VAR_31++) {
    if (VAR_35/VAR_31 < VAR_15)
     break;
    if (VAR_35/VAR_31 > VAR_17)
     continue;


    VAR_32 = (VAR_34 * VAR_31 + VAR_35/2) / VAR_35;
    if (VAR_32 < VAR_24)
     continue;
    if (VAR_32 > VAR_25)
     break;

    if (!VAR_28) {
     if (VAR_9 < 0x60)
      if (VAR_32/VAR_31 < 4 || VAR_32/VAR_31 > 10)
       continue;

     VAR_36 = VAR_35 * VAR_32 / VAR_31;
     if (VAR_36 < VAR_12)
      break;
     if (VAR_36 > VAR_13)
      continue;
    } else
     VAR_36 = VAR_35;

    VAR_37 = VAR_36 >> VAR_33;
    VAR_38 = FUNC_0(VAR_37 - VAR_3);



    if (VAR_38 < VAR_39) {
     VAR_39 = VAR_38;
     VAR_40 = VAR_37;
     *VAR_4 = VAR_30;
     *VAR_5 = VAR_29;
     *VAR_6 = VAR_32;
     *VAR_7 = VAR_31;
     *VAR_8 = VAR_33;
     if (VAR_38 == 0)
      return VAR_40;
    }
   }
  }
 }

 return VAR_40;
}
