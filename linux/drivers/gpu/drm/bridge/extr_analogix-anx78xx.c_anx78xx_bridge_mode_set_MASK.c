
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_avi_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct anx78xx {int lock; int connector; int powered; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct anx78xx*,struct hdmi_avi_infoframe*) ;
 struct anx78xx* FUNC_3 (struct drm_bridge*) ;
 int FUNC_4 (struct hdmi_avi_infoframe*,int *,struct drm_display_mode const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_0,
    const struct drm_display_mode *VAR_1,
    const struct drm_display_mode *VAR_2)
{
 struct anx78xx *VAR_3 = FUNC_3(VAR_0);
 struct hdmi_avi_infoframe VAR_4;
 int VAR_5;

 if (FUNC_1(!VAR_3->powered))
  return;

 FUNC_5(&VAR_3->lock);

 VAR_5 = FUNC_4(&VAR_4,
             &VAR_3->connector,
             VAR_2);
 if (VAR_5) {
  FUNC_0("Failed to setup AVI infoframe: %d\n", VAR_5);
  goto unlock;
 }

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5)
  FUNC_0("Failed to send AVI infoframe: %d\n", VAR_5);

unlock:
 FUNC_6(&VAR_3->lock);
}
