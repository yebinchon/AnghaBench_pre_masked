
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo {struct drm_display_mode const* sdvo_lvds_fixed_mode; scalar_t__ is_lvds; scalar_t__ is_tv; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct drm_display_mode*,int) ;
 int FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct psb_intel_sdvo*,struct drm_display_mode const*,struct drm_display_mode*) ;
 int FUNC_3 (struct psb_intel_sdvo*,struct drm_display_mode const*) ;
 struct psb_intel_sdvo* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_5(struct drm_encoder *VAR_0,
      const struct drm_display_mode *VAR_1,
      struct drm_display_mode *VAR_2)
{
 struct psb_intel_sdvo *VAR_3 = FUNC_4(VAR_0);
 int VAR_4;






 if (VAR_3->is_tv) {
  if (!FUNC_3(VAR_3, VAR_1))
   return 0;

  (void) FUNC_2(VAR_3,
            VAR_1,
            VAR_2);
 } else if (VAR_3->is_lvds) {
  if (!FUNC_3(VAR_3,
            VAR_3->sdvo_lvds_fixed_mode))
   return 0;

  (void) FUNC_2(VAR_3,
            VAR_1,
            VAR_2);
 }




 VAR_4 = FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_4);

 return 1;
}
