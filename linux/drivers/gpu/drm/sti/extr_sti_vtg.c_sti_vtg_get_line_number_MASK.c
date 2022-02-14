
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int vtotal; int vsync_start; int flags; } ;


 int VAR_0 ;

u32 FUNC_0(struct drm_display_mode VAR_1, int VAR_2)
{
 u32 VAR_3 = VAR_1.vtotal - VAR_1.vsync_start + 1;

 if (VAR_1.flags & VAR_0)
  VAR_3 *= 2;

 return VAR_3 + VAR_2;
}
