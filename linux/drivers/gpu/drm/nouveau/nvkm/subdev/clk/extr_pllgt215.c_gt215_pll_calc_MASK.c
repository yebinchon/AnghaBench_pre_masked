
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int max_freq; int max_inputfreq; int min_inputfreq; int min_n; int max_n; scalar_t__ max_m; scalar_t__ min_m; } ;
struct nvbios_pll {int max_p; int min_p; int refclk; TYPE_1__ vco1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(struct nvkm_subdev *VAR_1, struct nvbios_pll *VAR_2,
        u32 VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
 u32 VAR_8 = ~0, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 *VAR_7 = VAR_2->vco1.max_freq / VAR_3;
 if (*VAR_7 > VAR_2->max_p)
  *VAR_7 = VAR_2->max_p;
 if (*VAR_7 < VAR_2->min_p)
  *VAR_7 = VAR_2->min_p;

 VAR_11 = (VAR_2->refclk + VAR_2->vco1.max_inputfreq) / VAR_2->vco1.max_inputfreq;
 VAR_11 = FUNC_1(VAR_11, (int)VAR_2->vco1.min_m);
 VAR_12 = (VAR_2->refclk + VAR_2->vco1.min_inputfreq) / VAR_2->vco1.min_inputfreq;
 VAR_12 = FUNC_2(VAR_12, (int)VAR_2->vco1.max_m);
 VAR_11 = FUNC_2(VAR_11, VAR_12);

 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
  u32 VAR_15 = VAR_3 * *VAR_7 * VAR_10;
  VAR_13 = VAR_15 / VAR_2->refclk;
  VAR_14 = VAR_15 % VAR_2->refclk;

  if (!VAR_5) {
   if (VAR_14 >= VAR_2->refclk / 2)
    VAR_13++;
  } else {
   if (VAR_14 < VAR_2->refclk / 2)
    VAR_13--;
   VAR_14 = VAR_15 - (VAR_13 * VAR_2->refclk);
  }

  if (VAR_13 < VAR_2->vco1.min_n)
   continue;
  if (VAR_13 > VAR_2->vco1.max_n)
   break;

  VAR_9 = FUNC_0(VAR_3 - (VAR_2->refclk * VAR_13 / VAR_10 / *VAR_7));
  if (VAR_9 < VAR_8) {
   VAR_8 = VAR_9;
   *VAR_4 = VAR_13;
   *VAR_6 = VAR_10;
  }

  if (VAR_5) {
   *VAR_5 = ((VAR_14 << 13) + VAR_2->refclk / 2) / VAR_2->refclk;
   *VAR_5 = (*VAR_5 - 4096) & 0xffff;
   return VAR_3;
  }
 }

 if (FUNC_4(VAR_8 == ~0)) {
  FUNC_3(VAR_1, "unable to find matching pll values\n");
  return -VAR_0;
 }

 return VAR_2->refclk * *VAR_4 / *VAR_6 / *VAR_7;
}
