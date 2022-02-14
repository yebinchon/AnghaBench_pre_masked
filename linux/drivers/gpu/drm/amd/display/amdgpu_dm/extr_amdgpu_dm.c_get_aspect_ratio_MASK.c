
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int picture_aspect_ratio; } ;
typedef enum dc_aspect_ratio { ____Placeholder_dc_aspect_ratio } dc_aspect_ratio ;



__attribute__((used)) static enum dc_aspect_ratio
FUNC_0(const struct drm_display_mode *VAR_0)
{

 return (enum dc_aspect_ratio) VAR_0->picture_aspect_ratio;
}
