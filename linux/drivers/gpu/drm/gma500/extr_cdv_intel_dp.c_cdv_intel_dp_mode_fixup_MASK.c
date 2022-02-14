
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct TYPE_5__ {int bpp; } ;
struct drm_psb_private {TYPE_2__ edp; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct drm_display_mode {int clock; } ;
struct cdv_intel_dp {int link_bw; int lane_count; TYPE_3__* panel_fixed_mode; } ;
struct TYPE_6__ {int clock; } ;
struct TYPE_4__ {struct drm_psb_private* dev_private; } ;




 int FUNC_0 (char*,int,int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (struct gma_encoder*) ;
 scalar_t__ FUNC_5 (struct gma_encoder*) ;
 int FUNC_6 (TYPE_3__*,struct drm_display_mode*) ;
 scalar_t__ FUNC_7 (struct gma_encoder*) ;
 struct gma_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static bool
FUNC_9(struct drm_encoder *VAR_0, const struct drm_display_mode *VAR_1,
      struct drm_display_mode *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_0->dev->dev_private;
 struct gma_encoder *VAR_4 = FUNC_8(VAR_0);
 struct cdv_intel_dp *VAR_5 = VAR_4->dev_priv;
 int VAR_6, VAR_7;
 int VAR_8 = FUNC_4(VAR_4);
 int VAR_9 = FUNC_5(VAR_4) == 128 ? 1 : 0;
 static int VAR_10[2] = { 129, 128 };
 int VAR_11 = VAR_1->clock;
 int VAR_12 = 24;

 if (FUNC_7(VAR_4) && VAR_5->panel_fixed_mode) {
  FUNC_6(VAR_5->panel_fixed_mode, VAR_2);
  VAR_11 = VAR_5->panel_fixed_mode->clock;
  VAR_12 = VAR_3->edp.bpp;
 }

 for (VAR_6 = 1; VAR_6 <= VAR_8; VAR_6 <<= 1) {
  for (VAR_7 = VAR_9; VAR_7 >= 0; VAR_7--) {
   int VAR_13 = FUNC_3(FUNC_1(VAR_10[VAR_7]), VAR_6);

   if (FUNC_2(VAR_11, VAR_12) <= VAR_13) {
    VAR_5->link_bw = VAR_10[VAR_7];
    VAR_5->lane_count = VAR_6;
    VAR_2->clock = FUNC_1(VAR_5->link_bw);
    FUNC_0("Display port link bw %02x lane "
      "count %d clock %d\n",
           VAR_5->link_bw, VAR_5->lane_count,
           VAR_2->clock);
    return 1;
   }
  }
 }
 if (FUNC_7(VAR_4)) {

  VAR_5->lane_count = VAR_8;
  VAR_5->link_bw = VAR_10[VAR_9];
  VAR_2->clock = FUNC_1(VAR_5->link_bw);
  FUNC_0("Force picking display port link bw %02x lane "
         "count %d clock %d\n",
         VAR_5->link_bw, VAR_5->lane_count,
         VAR_2->clock);

  return 1;
 }
 return 0;
}
