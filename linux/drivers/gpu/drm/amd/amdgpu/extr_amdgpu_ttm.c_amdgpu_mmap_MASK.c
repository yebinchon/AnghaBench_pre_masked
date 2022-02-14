
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_2__* minor; } ;
struct TYPE_6__ {int bdev; } ;
struct amdgpu_device {TYPE_3__ mman; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct vm_area_struct*,int *) ;

int FUNC_1(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct drm_file *VAR_3 = VAR_1->private_data;
 struct amdgpu_device *VAR_4 = VAR_3->minor->dev->dev_private;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, &VAR_4->mman.bdev);
}
