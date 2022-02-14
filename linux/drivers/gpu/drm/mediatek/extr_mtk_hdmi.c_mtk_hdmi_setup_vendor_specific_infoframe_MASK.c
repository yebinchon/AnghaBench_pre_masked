
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_hdmi {int dev; int conn; } ;
struct hdmi_vendor_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
typedef int ssize_t ;
typedef int buffer ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hdmi_vendor_infoframe*,int *,struct drm_display_mode*) ;
 int FUNC_2 (struct hdmi_vendor_infoframe*,int *,int) ;
 int FUNC_3 (struct mtk_hdmi*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct mtk_hdmi *VAR_0,
      struct drm_display_mode *VAR_1)
{
 struct hdmi_vendor_infoframe VAR_2;
 u8 VAR_3[10];
 ssize_t VAR_4;

 VAR_4 = FUNC_1(&VAR_2,
         &VAR_0->conn, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_0->dev,
   "Failed to get vendor infoframe from mode: %zd\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(&VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "Failed to pack vendor infoframe: %zd\n",
   VAR_4);
  return VAR_4;
 }

 FUNC_3(VAR_0, VAR_3, sizeof(VAR_3));
 return 0;
}
