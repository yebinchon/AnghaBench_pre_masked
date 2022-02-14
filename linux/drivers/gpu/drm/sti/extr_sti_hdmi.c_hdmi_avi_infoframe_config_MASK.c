
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct sti_hdmi {int colorspace; int drm_connector; struct drm_display_mode mode; } ;
struct hdmi_avi_infoframe {int colorimetry; int quantization_range; int colorspace; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct hdmi_avi_infoframe*,int ,struct drm_display_mode*) ;
 int FUNC_4 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_5 (struct sti_hdmi*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct sti_hdmi *VAR_3)
{
 struct drm_display_mode *VAR_4 = &VAR_3->mode;
 struct hdmi_avi_infoframe VAR_5;
 u8 VAR_6[FUNC_2(VAR_0)];
 int VAR_7;

 FUNC_0("\n");

 VAR_7 = FUNC_3(&VAR_5,
             VAR_3->drm_connector, VAR_4);
 if (VAR_7 < 0) {
  FUNC_1("failed to setup AVI infoframe: %d\n", VAR_7);
  return VAR_7;
 }


 VAR_5.colorspace = VAR_3->colorspace;
 VAR_5.quantization_range = VAR_2;
 VAR_5.colorimetry = VAR_1;

 VAR_7 = FUNC_4(&VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0) {
  FUNC_1("failed to pack AVI infoframe: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_5(VAR_3, VAR_6, VAR_7);

 return 0;
}
