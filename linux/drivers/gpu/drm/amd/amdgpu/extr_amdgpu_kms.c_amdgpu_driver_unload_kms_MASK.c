
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; int dev; } ;
struct amdgpu_device {int * rmmio; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct drm_device *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->dev_private;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_4(VAR_1);

 if (VAR_1->rmmio == ((void*)0))
  goto done_free;

 if (FUNC_3(VAR_1))
  FUNC_5(VAR_1, 0);

 if (FUNC_2(VAR_0)) {
  FUNC_8(VAR_0->dev);
  FUNC_7(VAR_0->dev);
 }

 FUNC_0(VAR_1);

 FUNC_1(VAR_1);

done_free:
 FUNC_6(VAR_1);
 VAR_0->dev_private = ((void*)0);
}
