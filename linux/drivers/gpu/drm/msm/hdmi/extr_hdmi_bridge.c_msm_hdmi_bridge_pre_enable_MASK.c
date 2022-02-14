
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_phy {int dummy; } ;
struct hdmi_bridge {struct hdmi* hdmi; } ;
struct hdmi {int power_on; scalar_t__ hdcp_ctrl; int pixclock; scalar_t__ hdmi_mode; struct hdmi_phy* phy; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hdmi*) ;
 int FUNC_2 (struct hdmi*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct hdmi_phy*,int ) ;
 int FUNC_5 (struct hdmi_phy*) ;
 int FUNC_6 (struct drm_bridge*) ;
 int FUNC_7 (struct hdmi*,int) ;
 struct hdmi_bridge* FUNC_8 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_9(struct drm_bridge *VAR_0)
{
 struct hdmi_bridge *VAR_1 = FUNC_8(VAR_0);
 struct hdmi *VAR_2 = VAR_1->hdmi;
 struct hdmi_phy *VAR_3 = VAR_2->phy;

 FUNC_0("power up");

 if (!VAR_2->power_on) {
  FUNC_5(VAR_3);
  FUNC_6(VAR_0);
  VAR_2->power_on = 1;
  if (VAR_2->hdmi_mode) {
   FUNC_2(VAR_2);
   FUNC_1(VAR_2);
  }
 }

 FUNC_4(VAR_3, VAR_2->pixclock);

 FUNC_7(VAR_2, 1);

 if (VAR_2->hdcp_ctrl)
  FUNC_3(VAR_2->hdcp_ctrl);
}
