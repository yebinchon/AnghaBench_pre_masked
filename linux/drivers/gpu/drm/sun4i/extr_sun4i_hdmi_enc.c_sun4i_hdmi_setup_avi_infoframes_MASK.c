
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sun4i_hdmi {scalar_t__ base; int connector; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
typedef int buffer ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct hdmi_avi_infoframe*,int *,struct drm_display_mode*) ;
 int FUNC_3 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sun4i_hdmi *VAR_0,
        struct drm_display_mode *VAR_1)
{
 struct hdmi_avi_infoframe VAR_2;
 u8 VAR_3[17];
 int VAR_4, VAR_5;

 VAR_5 = FUNC_2(&VAR_2,
             &VAR_0->connector, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0("Failed to get infoframes from mode\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(&VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_5 < 0) {
  FUNC_0("Failed to pack infoframes\n");
  return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < sizeof(VAR_3); VAR_4++)
  FUNC_4(VAR_3[VAR_4], VAR_0->base + FUNC_1(VAR_4));

 return 0;
}
