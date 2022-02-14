
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_3__ {int ** obj; } ;
struct amdgpu_framebuffer {TYPE_1__ base; } ;
struct amdgpu_fbdev {int helper; struct amdgpu_framebuffer rfb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_0, struct amdgpu_fbdev *VAR_1)
{
 struct amdgpu_framebuffer *VAR_2 = &VAR_1->rfb;

 FUNC_2(&VAR_1->helper);

 if (VAR_2->base.obj[0]) {
  FUNC_0(VAR_2->base.obj[0]);
  VAR_2->base.obj[0] = ((void*)0);
  FUNC_4(&VAR_2->base);
  FUNC_3(&VAR_2->base);
 }
 FUNC_1(&VAR_1->helper);

 return 0;
}
