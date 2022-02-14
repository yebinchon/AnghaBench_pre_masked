
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int bdev; } ;
struct vm_area_struct {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct file*,struct vm_area_struct*,int *) ;
 struct vmw_private* FUNC_1 (int ) ;

int FUNC_2(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct drm_file *VAR_2 = VAR_0->private_data;
 struct vmw_private *VAR_3 = FUNC_1(VAR_2->minor->dev);

 return FUNC_0(VAR_0, VAR_1, &VAR_3->bdev);
}
