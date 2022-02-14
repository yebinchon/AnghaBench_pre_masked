
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sti_hdmi_connector {struct drm_property* colorspace_property; struct sti_hdmi* hdmi; } ;
struct sti_hdmi {int colorspace; } ;
struct drm_property {int dummy; } ;
struct drm_connector_state {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct sti_hdmi_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_2(struct drm_connector *VAR_1,
    struct drm_connector_state *VAR_2,
    struct drm_property *VAR_3,
    uint64_t VAR_4)
{
 struct sti_hdmi_connector *VAR_5
  = FUNC_1(VAR_1);
 struct sti_hdmi *VAR_6 = VAR_5->hdmi;

 if (VAR_3 == VAR_5->colorspace_property) {
  VAR_6->colorspace = VAR_4;
  return 0;
 }

 FUNC_0("failed to set hdmi connector property\n");
 return -VAR_0;
}
