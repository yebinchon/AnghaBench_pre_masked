
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_pgoff; int vm_flags; struct ttm_buffer_object* vm_private_data; int * vm_ops; } ;
struct ttm_buffer_object {TYPE_1__* bdev; } ;
struct ttm_bo_driver {int (* verify_access ) (struct ttm_buffer_object*,struct file*) ;} ;
struct ttm_bo_device {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ttm_bo_driver* driver; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ttm_buffer_object*,struct file*) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 struct ttm_buffer_object* FUNC_2 (struct ttm_bo_device*,scalar_t__,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vm_area_struct*) ;

int FUNC_5(struct file *VAR_8, struct vm_area_struct *VAR_9,
  struct ttm_bo_device *VAR_10)
{
 struct ttm_bo_driver *VAR_11;
 struct ttm_buffer_object *VAR_12;
 int VAR_13;

 if (FUNC_3(VAR_9->vm_pgoff < VAR_0))
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_10, VAR_9->vm_pgoff, FUNC_4(VAR_9));
 if (FUNC_3(!VAR_12))
  return -VAR_1;

 VAR_11 = VAR_12->bdev->driver;
 if (FUNC_3(!VAR_11->verify_access)) {
  VAR_13 = -VAR_2;
  goto out_unref;
 }
 VAR_13 = VAR_11->verify_access(VAR_12, VAR_8);
 if (FUNC_3(VAR_13 != 0))
  goto out_unref;

 VAR_9->vm_ops = &VAR_7;






 VAR_9->vm_private_data = VAR_12;
 VAR_9->vm_flags |= VAR_6;
 VAR_9->vm_flags |= VAR_5 | VAR_4 | VAR_3;
 return 0;
out_unref:
 FUNC_1(VAR_12);
 return VAR_13;
}
