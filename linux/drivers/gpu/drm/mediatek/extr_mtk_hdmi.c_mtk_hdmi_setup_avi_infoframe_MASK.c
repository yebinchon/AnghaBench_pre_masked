
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_hdmi {int dev; int conn; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hdmi_avi_infoframe*,int *,struct drm_display_mode*) ;
 scalar_t__ FUNC_2 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_3 (struct mtk_hdmi*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct mtk_hdmi *VAR_0,
     struct drm_display_mode *VAR_1)
{
 struct hdmi_avi_infoframe VAR_2;
 u8 VAR_3[17];
 ssize_t VAR_4;

 VAR_4 = FUNC_1(&VAR_2,
             &VAR_0->conn, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev,
   "Failed to get AVI infoframe from mode: %zd\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(&VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "Failed to pack AVI infoframe: %zd\n", VAR_4);
  return VAR_4;
 }

 FUNC_3(VAR_0, VAR_3, sizeof(VAR_3));
 return 0;
}
