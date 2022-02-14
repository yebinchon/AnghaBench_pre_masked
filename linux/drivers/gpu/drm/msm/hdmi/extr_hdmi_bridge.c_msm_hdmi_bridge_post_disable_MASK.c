
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_phy {int dummy; } ;
struct hdmi_bridge {struct hdmi* hdmi; } ;
struct hdmi {int power_on; scalar_t__ hdmi_mode; scalar_t__ hdcp_ctrl; struct hdmi_phy* phy; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hdmi*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct hdmi_phy*) ;
 int FUNC_4 (struct hdmi_phy*) ;
 int FUNC_5 (struct hdmi*,int) ;
 int FUNC_6 (struct drm_bridge*) ;
 struct hdmi_bridge* FUNC_7 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_8(struct drm_bridge *VAR_0)
{
 struct hdmi_bridge *VAR_1 = FUNC_7(VAR_0);
 struct hdmi *VAR_2 = VAR_1->hdmi;
 struct hdmi_phy *VAR_3 = VAR_2->phy;

 if (VAR_2->hdcp_ctrl)
  FUNC_2(VAR_2->hdcp_ctrl);

 FUNC_0("power down");
 FUNC_5(VAR_2, 0);

 FUNC_3(VAR_3);

 if (VAR_2->power_on) {
  FUNC_6(VAR_0);
  VAR_2->power_on = 0;
  if (VAR_2->hdmi_mode)
   FUNC_1(VAR_2);
  FUNC_4(VAR_3);
 }
}
