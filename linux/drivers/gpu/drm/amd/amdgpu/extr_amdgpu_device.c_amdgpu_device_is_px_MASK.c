
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;

bool FUNC_0(struct drm_device *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->dev_private;

 if (VAR_2->flags & VAR_0)
  return 1;
 return 0;
}
