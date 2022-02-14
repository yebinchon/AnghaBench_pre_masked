
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; } ;
struct file {struct file* private_data; int minor; } ;
struct drm_gem_object {int vma_node; TYPE_3__* dev; } ;
struct drm_file {struct drm_file* private_data; int minor; } ;
struct TYPE_6__ {TYPE_2__* driver; int primary; } ;
struct TYPE_5__ {TYPE_1__* fops; } ;
struct TYPE_4__ {int (* mmap ) (struct file*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct file*) ;
 int FUNC_1 (int *,struct file*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;
 struct file* FUNC_4 (int,int ) ;
 int FUNC_5 (struct file*,struct vm_area_struct*) ;

int FUNC_6(struct drm_gem_object *VAR_2, struct vm_area_struct *VAR_3)
{
 struct drm_file *VAR_4;
 struct file *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_4 || !VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }


 VAR_4->minor = VAR_2->dev->primary;
 VAR_5->private_data = VAR_4;

 VAR_6 = FUNC_0(&VAR_2->vma_node, VAR_4);
 if (VAR_6)
  goto out;

 VAR_3->vm_pgoff += FUNC_2(&VAR_2->vma_node);

 VAR_6 = VAR_2->dev->driver->fops->mmap(VAR_5, VAR_3);

 FUNC_1(&VAR_2->vma_node, VAR_4);
out:
 FUNC_3(VAR_4);
 FUNC_3(VAR_5);

 return VAR_6;
}
