
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct sti_hdmi {int drm_connector; struct drm_display_mode mode; } ;
struct hdmi_vendor_infoframe {int dummy; } ;
typedef int buffer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct hdmi_vendor_infoframe*,int ,struct drm_display_mode*) ;
 int FUNC_3 (struct sti_hdmi*,int *,int) ;
 int FUNC_4 (struct hdmi_vendor_infoframe*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct sti_hdmi *VAR_2)
{
 struct drm_display_mode *VAR_3 = &VAR_2->mode;
 struct hdmi_vendor_infoframe VAR_4;
 u8 VAR_5[VAR_0 + VAR_1];
 int VAR_6;

 FUNC_0("\n");

 VAR_6 = FUNC_2(&VAR_4,
         VAR_2->drm_connector,
         VAR_3);
 if (VAR_6 < 0) {






  return 0;
 }

 VAR_6 = FUNC_4(&VAR_4, VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0) {
  FUNC_1("failed to pack VS infoframe: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_3(VAR_2, VAR_5, VAR_6);

 return 0;
}
