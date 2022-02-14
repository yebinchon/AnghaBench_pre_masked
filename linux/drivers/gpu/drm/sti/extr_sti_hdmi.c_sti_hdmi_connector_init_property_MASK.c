
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi_connector {struct drm_property* colorspace_property; struct sti_hdmi* hdmi; } ;
struct sti_hdmi {int colorspace; } ;
struct drm_property {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct drm_property*,int ) ;
 struct drm_property* FUNC_3 (struct drm_device*,int ,char*,int ,int ) ;
 struct sti_hdmi_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_2,
          struct drm_connector *VAR_3)
{
 struct sti_hdmi_connector *VAR_4
  = FUNC_4(VAR_3);
 struct sti_hdmi *VAR_5 = VAR_4->hdmi;
 struct drm_property *VAR_6;


 VAR_5->colorspace = VAR_0;
 VAR_6 = FUNC_3(VAR_2, 0, "colorspace",
     VAR_1,
     FUNC_0(VAR_1));
 if (!VAR_6) {
  FUNC_1("fails to create colorspace property\n");
  return;
 }
 VAR_4->colorspace_property = VAR_6;
 FUNC_2(&VAR_3->base, VAR_6, VAR_5->colorspace);
}
