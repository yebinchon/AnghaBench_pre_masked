
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_4__ {int bdev; } ;
struct nouveau_drm {TYPE_2__ ttm; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct TYPE_3__ {int dev; } ;


 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct vm_area_struct*,int *) ;

int
FUNC_2(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct drm_file *VAR_2 = VAR_0->private_data;
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_2->minor->dev);

 return FUNC_1(VAR_0, VAR_1, &VAR_3->ttm.bdev);
}
