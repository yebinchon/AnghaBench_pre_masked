
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {TYPE_4__* vm_ops; } ;
struct TYPE_6__ {int bdev; } ;
struct radeon_device {TYPE_1__ mman; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_3__* minor; } ;
struct TYPE_9__ {int * fault; } ;
struct TYPE_8__ {TYPE_2__* dev; } ;
struct TYPE_7__ {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (struct file*,struct vm_area_struct*,int *) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 int VAR_6;
 struct drm_file *VAR_7 = VAR_4->private_data;
 struct radeon_device *VAR_8 = VAR_7->minor->dev->dev_private;

 if (VAR_8 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_5, &VAR_8->mman.bdev);
 if (FUNC_1(VAR_6 != 0)) {
  return VAR_6;
 }
 if (FUNC_1(VAR_3 == ((void*)0))) {
  VAR_3 = VAR_5->vm_ops;
  VAR_2 = *VAR_3;
  VAR_2.fault = &VAR_1;
 }
 VAR_5->vm_ops = &VAR_2;
 return 0;
}
