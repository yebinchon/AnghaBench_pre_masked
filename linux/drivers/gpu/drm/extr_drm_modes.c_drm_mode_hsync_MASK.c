
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hsync; int htotal; int clock; } ;



int FUNC_0(const struct drm_display_mode *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0->hsync)
  return VAR_0->hsync;

 if (VAR_0->htotal <= 0)
  return 0;

 VAR_1 = (VAR_0->clock * 1000) / VAR_0->htotal;
 VAR_1 += 500;
 VAR_1 /= 1000;

 return VAR_1;
}
