
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_display_mode const*,struct drm_display_mode*) ;

__attribute__((used)) static bool FUNC_1(struct drm_crtc *VAR_0,
       const struct drm_display_mode *VAR_1,
       struct drm_display_mode *VAR_2)
{
 if (!FUNC_0(VAR_0, VAR_1, VAR_2))
  return 0;
 return 1;
}
