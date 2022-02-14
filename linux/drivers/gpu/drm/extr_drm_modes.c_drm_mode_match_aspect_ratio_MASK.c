
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {scalar_t__ picture_aspect_ratio; } ;



__attribute__((used)) static bool FUNC_0(const struct drm_display_mode *VAR_0,
     const struct drm_display_mode *VAR_1)
{
 return VAR_0->picture_aspect_ratio == VAR_1->picture_aspect_ratio;
}
