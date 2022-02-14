
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_color_lut {int blue; int green; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static u32 FUNC_1(const struct drm_color_lut *VAR_0)
{
 return FUNC_0(VAR_0->green, 10) << 16 |
  FUNC_0(VAR_0->blue, 10);
}
