
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int connector; } ;
struct tegra_hdmi {int dev; TYPE_1__ output; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hdmi_avi_infoframe*,int *,struct drm_display_mode*) ;
 scalar_t__ FUNC_2 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_3 (struct tegra_hdmi*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tegra_hdmi *VAR_0,
        struct drm_display_mode *VAR_1)
{
 struct hdmi_avi_infoframe VAR_2;
 u8 VAR_3[17];
 ssize_t VAR_4;

 VAR_4 = FUNC_1(&VAR_2,
             &VAR_0->output.connector, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "failed to setup AVI infoframe: %zd\n", VAR_4);
  return;
 }

 VAR_4 = FUNC_2(&VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "failed to pack AVI infoframe: %zd\n", VAR_4);
  return;
 }

 FUNC_3(VAR_0, VAR_3, VAR_4);
}
