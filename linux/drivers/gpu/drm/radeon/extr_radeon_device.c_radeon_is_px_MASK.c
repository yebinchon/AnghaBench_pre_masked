
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int flags; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;

bool FUNC_0(struct drm_device *VAR_1)
{
 struct radeon_device *VAR_2 = VAR_1->dev_private;

 if (VAR_2->flags & VAR_0)
  return 1;
 return 0;
}
