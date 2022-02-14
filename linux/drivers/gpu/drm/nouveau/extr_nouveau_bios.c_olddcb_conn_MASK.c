
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {int dummy; } ;


 int* FUNC_0 (struct drm_device*) ;

u8 *
FUNC_1(struct drm_device *VAR_0, u8 VAR_1)
{
 u8 *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 && VAR_1 < VAR_2[2])
  return VAR_2 + VAR_2[1] + (VAR_1 * VAR_2[3]);
 return ((void*)0);
}
