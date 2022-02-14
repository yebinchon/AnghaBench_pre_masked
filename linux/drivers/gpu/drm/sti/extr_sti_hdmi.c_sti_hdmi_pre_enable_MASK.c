
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ enabled; } ;
struct sti_hdmi {int enabled; TYPE_2__ audio; TYPE_1__* phy_ops; int clk_phy; int clk_tmds; int clk_pix; } ;
struct drm_bridge {struct sti_hdmi* driver_private; } ;
struct TYPE_3__ {int (* start ) (struct sti_hdmi*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sti_hdmi*) ;
 scalar_t__ FUNC_4 (struct sti_hdmi*) ;
 int FUNC_5 (struct sti_hdmi*) ;
 scalar_t__ FUNC_6 (struct sti_hdmi*) ;
 int FUNC_7 (struct sti_hdmi*) ;
 int FUNC_8 (struct sti_hdmi*) ;
 scalar_t__ FUNC_9 (struct sti_hdmi*) ;
 int FUNC_10 (struct sti_hdmi*,int ,int ) ;
 int FUNC_11 (struct sti_hdmi*) ;

__attribute__((used)) static void FUNC_12(struct drm_bridge *VAR_2)
{
 struct sti_hdmi *VAR_3 = VAR_2->driver_private;

 FUNC_0("\n");

 if (VAR_3->enabled)
  return;


 if (FUNC_2(VAR_3->clk_pix))
  FUNC_1("Failed to prepare/enable hdmi_pix clk\n");
 if (FUNC_2(VAR_3->clk_tmds))
  FUNC_1("Failed to prepare/enable hdmi_tmds clk\n");
 if (FUNC_2(VAR_3->clk_phy))
  FUNC_1("Failed to prepare/enable hdmi_rejec_pll clk\n");

 VAR_3->enabled = 1;


 if (!VAR_3->phy_ops->start(VAR_3)) {
  FUNC_1("Unable to start hdmi phy\n");
  return;
 }


 FUNC_3(VAR_3);


 FUNC_10(VAR_3, VAR_1, VAR_0);


 FUNC_7(VAR_3);


 if (FUNC_6(VAR_3))
  FUNC_1("Unable to configure AVI infoframe\n");

 if (VAR_3->audio.enabled) {
  if (FUNC_4(VAR_3))
   FUNC_1("Unable to configure audio\n");
 } else {
  FUNC_5(VAR_3);
 }


 if (FUNC_9(VAR_3))
  FUNC_1("Unable to configure VS infoframe\n");


 FUNC_8(VAR_3);
}
