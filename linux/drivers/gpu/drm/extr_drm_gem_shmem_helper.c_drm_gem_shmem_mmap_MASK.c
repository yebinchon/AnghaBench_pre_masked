
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; int vm_flags; int vm_private_data; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int vma_node; } ;
struct drm_gem_shmem_object {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 int FUNC_1 (struct drm_gem_shmem_object*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct drm_gem_shmem_object* FUNC_4 (int ) ;

int FUNC_5(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct drm_gem_shmem_object *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_4(VAR_3->vm_private_data);

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_3);
  return VAR_5;
 }


 VAR_3->vm_flags &= ~VAR_1;
 VAR_3->vm_flags |= VAR_0;


 VAR_3->vm_pgoff -= FUNC_3(&VAR_4->base.vma_node);

 return 0;
}
