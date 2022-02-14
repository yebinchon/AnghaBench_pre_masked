
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_subdev {TYPE_1__* device; } ;
struct TYPE_6__ {int major; int chip; } ;
struct nvkm_bios {TYPE_3__ version; } ;
struct TYPE_5__ {int min_freq; int max_freq; int min_m; int max_m; int min_n; int max_n; int min_inputfreq; int max_inputfreq; } ;
struct nvbios_pll {int min_p; int max_p_usable; int refclk; TYPE_2__ vco1; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_subdev *VAR_1, struct nvbios_pll *VAR_2, int VAR_3,
       int *VAR_4, int *VAR_5, int *VAR_6)
{
 struct nvkm_bios *VAR_7 = VAR_1->device->bios;
 int VAR_8 = VAR_2->vco1.min_freq, VAR_9 = VAR_2->vco1.max_freq;
 int VAR_10 = VAR_2->vco1.min_m, VAR_11 = VAR_2->vco1.max_m;
 int VAR_12 = VAR_2->vco1.min_n, VAR_13 = VAR_2->vco1.max_n;
 int VAR_14 = VAR_2->vco1.min_inputfreq;
 int VAR_15 = VAR_2->vco1.max_inputfreq;
 int VAR_16 = VAR_2->min_p;
 int VAR_17 = VAR_2->max_p_usable;
 int VAR_18 = VAR_2->refclk;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;
 int VAR_25, VAR_26 = VAR_0;
 int VAR_27 = 0;



 if (VAR_7->version.major < 0x60) {
  int VAR_28 = VAR_7->version.chip;
  if (VAR_28 < 0x17 || VAR_28 == 0x1a || VAR_28 == 0x20) {
   if (VAR_3 > 250000)
    VAR_11 = 6;
   if (VAR_3 > 340000)
    VAR_11 = 2;
  } else if (VAR_28 < 0x40) {
   if (VAR_3 > 150000)
    VAR_11 = 6;
   if (VAR_3 > 200000)
    VAR_11 = 4;
   if (VAR_3 > 340000)
    VAR_11 = 2;
  }
 }

 VAR_22 = 1 << VAR_17;
 if ((VAR_3 * VAR_22) < VAR_8) {
  VAR_8 = VAR_3 * VAR_17;
  VAR_9 = VAR_8 * 2;
 }

 if (VAR_3 + VAR_3/200 > VAR_9)
  VAR_9 = VAR_3 + VAR_3/200;


 for (VAR_21 = VAR_16; VAR_21 <= VAR_17; VAR_21++) {
  VAR_22 = 1 << VAR_21;
  VAR_23 = VAR_3 * VAR_22;

  if (VAR_23 < VAR_8)
   continue;
  if (VAR_23 > VAR_9)
   return VAR_27;

  for (VAR_19 = VAR_10; VAR_19 <= VAR_11; VAR_19++) {
   if (VAR_18/VAR_19 < VAR_14)
    return VAR_27;
   if (VAR_18/VAR_19 > VAR_15)
    continue;


   VAR_20 = (VAR_23 * VAR_19 + VAR_18/2) / VAR_18;

   if (VAR_20 < VAR_12)
    continue;
   if (VAR_20 > VAR_13)
    break;


   VAR_24 = ((VAR_20 * VAR_18 + VAR_22/2) / VAR_22 + VAR_19/2) / VAR_19;
   VAR_25 = FUNC_0(VAR_24 - VAR_3);



   if (VAR_25 < VAR_26) {
    VAR_26 = VAR_25;
    VAR_27 = VAR_24;
    *VAR_4 = VAR_20;
    *VAR_5 = VAR_19;
    *VAR_6 = VAR_21;
    if (VAR_25 == 0)
     return VAR_27;
   }
  }
 }

 return VAR_27;
}
