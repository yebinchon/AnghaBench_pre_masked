
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_mixer {scalar_t__ id; } ;
struct sti_dvo {int * config; int clk; int clk_pix; struct clk* clk_aux_parent; struct clk* clk_main_parent; int mode; TYPE_1__* encoder; } ;
struct drm_display_mode {int clock; } ;
struct drm_bridge {struct sti_dvo* driver_private; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int crtc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,struct clk*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,struct drm_display_mode const*,int) ;
 int VAR_1 ;
 struct sti_mixer* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_bridge *VAR_2,
        const struct drm_display_mode *VAR_3,
        const struct drm_display_mode *VAR_4)
{
 struct sti_dvo *VAR_5 = VAR_2->driver_private;
 struct sti_mixer *VAR_6 = FUNC_5(VAR_5->encoder->crtc);
 int VAR_7 = VAR_3->clock * 1000;
 struct clk *VAR_8;
 int VAR_9;

 FUNC_0("\n");

 FUNC_4(&VAR_5->mode, VAR_3, sizeof(struct drm_display_mode));



 if (VAR_6->id == VAR_0)
  VAR_8 = VAR_5->clk_main_parent;
 else
  VAR_8 = VAR_5->clk_aux_parent;

 if (VAR_8) {
  FUNC_2(VAR_5->clk_pix, VAR_8);
  FUNC_2(VAR_5->clk, VAR_8);
 }


 VAR_9 = FUNC_3(VAR_5->clk_pix, VAR_7);
 if (VAR_9 < 0) {
  FUNC_1("Cannot set rate (%dHz) for dvo_pix clk\n", VAR_7);
  return;
 }

 VAR_9 = FUNC_3(VAR_5->clk, VAR_7);
 if (VAR_9 < 0) {
  FUNC_1("Cannot set rate (%dHz) for dvo clk\n", VAR_7);
  return;
 }


 VAR_5->config = &VAR_1;
}
