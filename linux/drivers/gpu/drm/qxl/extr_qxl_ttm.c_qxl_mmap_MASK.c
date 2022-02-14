
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {TYPE_4__* vm_ops; int vm_pgoff; } ;
struct TYPE_8__ {int bdev; } ;
struct qxl_device {TYPE_3__ mman; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_2__* minor; } ;
struct TYPE_9__ {int * fault; } ;
struct TYPE_7__ {TYPE_1__* dev; } ;
struct TYPE_6__ {struct qxl_device* dev_private; } ;


 int FUNC_0 (char*,struct drm_file*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (struct file*,struct vm_area_struct*,int *) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 int VAR_6;
 struct drm_file *VAR_7 = VAR_4->private_data;
 struct qxl_device *VAR_8 = VAR_7->minor->dev->dev_private;

 if (VAR_8 == ((void*)0)) {
  FUNC_1(
   "filp->private_data->minor->dev->dev_private == NULL\n");
  return -VAR_0;
 }
 FUNC_0("filp->private_data = 0x%p, vma->vm_pgoff = %lx\n",
    VAR_4->private_data, VAR_5->vm_pgoff);

 VAR_6 = FUNC_2(VAR_4, VAR_5, &VAR_8->mman.bdev);
 if (FUNC_3(VAR_6 != 0))
  return VAR_6;
 if (FUNC_3(VAR_3 == ((void*)0))) {
  VAR_3 = VAR_5->vm_ops;
  VAR_2 = *VAR_3;
  VAR_2.fault = &VAR_1;
 }
 VAR_5->vm_ops = &VAR_2;
 return 0;
}
