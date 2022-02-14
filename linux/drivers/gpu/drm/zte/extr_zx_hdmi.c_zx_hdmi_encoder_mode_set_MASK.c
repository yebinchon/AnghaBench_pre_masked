
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_hdmi {scalar_t__ sink_is_hdmi; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 struct zx_hdmi* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct zx_hdmi*,struct drm_display_mode*) ;
 int FUNC_2 (struct zx_hdmi*,struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0,
         struct drm_display_mode *VAR_1,
         struct drm_display_mode *VAR_2)
{
 struct zx_hdmi *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->sink_is_hdmi) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_2(VAR_3, VAR_1);
 }
}
