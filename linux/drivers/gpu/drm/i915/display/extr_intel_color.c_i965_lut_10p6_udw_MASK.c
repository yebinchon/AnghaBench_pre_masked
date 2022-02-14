
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_color_lut {int red; int green; int blue; } ;



__attribute__((used)) static u32 FUNC_0(const struct drm_color_lut *VAR_0)
{
 return (VAR_0->red >> 8) << 16 |
  (VAR_0->green >> 8) << 8 |
  (VAR_0->blue >> 8);
}
