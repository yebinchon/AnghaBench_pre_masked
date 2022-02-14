
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_device {int max_vblank_count; struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;

int FUNC_1(struct drm_device *VAR_0)
{
 struct radeon_device *VAR_1 = VAR_0->dev_private;

 if (FUNC_0(VAR_1))
  VAR_0->max_vblank_count = 0x00ffffff;
 else
  VAR_0->max_vblank_count = 0x001fffff;

 return 0;
}
