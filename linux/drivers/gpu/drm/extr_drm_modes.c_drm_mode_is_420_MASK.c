
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_display_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_display_info const*,struct drm_display_mode const*) ;
 scalar_t__ FUNC_1 (struct drm_display_info const*,struct drm_display_mode const*) ;

bool FUNC_2(const struct drm_display_info *VAR_0,
       const struct drm_display_mode *VAR_1)
{
 return FUNC_1(VAR_0, VAR_1) ||
  FUNC_0(VAR_0, VAR_1);
}
