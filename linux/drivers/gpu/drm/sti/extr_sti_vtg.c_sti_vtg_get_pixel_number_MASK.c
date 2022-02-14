
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_display_mode {scalar_t__ hsync_start; scalar_t__ htotal; } ;



u32 FUNC_0(struct drm_display_mode VAR_0, int VAR_1)
{
 return VAR_0.htotal - VAR_0.hsync_start + VAR_1;
}
