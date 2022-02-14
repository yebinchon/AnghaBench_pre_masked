
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sti_hda {int clk_pix; int clk_hddac; int mode; } ;
struct drm_display_mode {int clock; } ;
struct drm_bridge {struct sti_hda* driver_private; } ;
struct TYPE_2__ {int vid_cat; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;


 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,size_t*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int *,struct drm_display_mode const*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_bridge *VAR_1,
        const struct drm_display_mode *VAR_2,
        const struct drm_display_mode *VAR_3)
{
 struct sti_hda *VAR_4 = VAR_1->driver_private;
 u32 VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_0("\n");

 FUNC_4(&VAR_4->mode, VAR_2, sizeof(struct drm_display_mode));

 if (!FUNC_3(VAR_4->mode, &VAR_5)) {
  FUNC_1("Undefined mode\n");
  return;
 }

 switch (VAR_0[VAR_5].vid_cat) {
 case 128:

  VAR_6 = VAR_2->clock * 1000 * 2;
  break;
 case 129:

  VAR_6 = VAR_2->clock * 1000 * 4;
  break;
 default:
  FUNC_1("Undefined mode\n");
  return;
 }


 VAR_7 = FUNC_2(VAR_4->clk_hddac, VAR_6);
 if (VAR_7 < 0)
  FUNC_1("Cannot set rate (%dHz) for hda_hddac clk\n",
     VAR_6);


 VAR_7 = FUNC_2(VAR_4->clk_pix, VAR_2->clock * 1000);
 if (VAR_7 < 0)
  FUNC_1("Cannot set rate (%dHz) for hda_pix clk\n",
     VAR_2->clock * 1000);
}
