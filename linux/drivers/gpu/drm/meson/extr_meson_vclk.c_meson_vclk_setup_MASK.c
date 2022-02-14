
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_drm {int dummy; } ;
struct TYPE_2__ {int pixel_freq; unsigned int pll_base_freq; int vclk_div; int vid_pll_div; int pll_od3; int pll_od2; int pll_od1; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct meson_drm*,unsigned int,int ,int ,int ,int ,int,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (struct meson_drm*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (char*,unsigned int) ;

void FUNC_4(struct meson_drm *VAR_8, unsigned int VAR_9,
        unsigned int VAR_10, unsigned int VAR_11,
        unsigned int VAR_12, bool VAR_13)
{
 bool VAR_14 = 0;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;

 if (VAR_9 == VAR_4) {
  FUNC_2(VAR_8);
  return;
 } else if (VAR_9 == VAR_5) {
  FUNC_1(VAR_8, VAR_10 * 10, 0, 0, 0,
          VAR_6, 2, 1, 1, 0, 0);
  return;
 }

 VAR_16 = VAR_10 / VAR_12;

 if (VAR_16 == 0) {
  FUNC_3("Fatal Error, invalid HDMI-TX freq %d\n",
         VAR_12);
  return;
 }

 VAR_17 = VAR_10 / VAR_11;

 if (VAR_17 == 0) {
  FUNC_3("Fatal Error, invalid HDMI venc freq %d\n",
         VAR_11);
  return;
 }

 for (VAR_15 = 0 ; VAR_7[VAR_15].pixel_freq ; ++VAR_15) {
  if (VAR_10 == VAR_7[VAR_15].pixel_freq ||
      VAR_10 == FUNC_0(VAR_7[VAR_15].pixel_freq)) {
   if (VAR_10 != VAR_7[VAR_15].pixel_freq)
    VAR_14 = 1;
   else
    VAR_14 = 0;

   if (VAR_15 == VAR_3 &&
       !VAR_13)
    continue;

   if (VAR_15 == VAR_2 &&
       VAR_13)
    continue;

   if (VAR_15 == VAR_1 &&
       VAR_12 == VAR_10)
    continue;

   if (VAR_15 == VAR_0 &&
       VAR_12 != VAR_10)
    continue;
   break;
  }
 }

 if (!VAR_7[VAR_15].pixel_freq) {
  FUNC_3("Fatal Error, invalid HDMI vclk freq %d\n", VAR_10);
  return;
 }

 FUNC_1(VAR_8, VAR_7[VAR_15].pll_base_freq,
         VAR_7[VAR_15].pll_od1, VAR_7[VAR_15].pll_od2,
         VAR_7[VAR_15].pll_od3, VAR_7[VAR_15].vid_pll_div,
         VAR_7[VAR_15].vclk_div, VAR_16, VAR_17,
         VAR_13, VAR_14);
}
