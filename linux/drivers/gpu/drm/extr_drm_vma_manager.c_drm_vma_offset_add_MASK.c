
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vma_offset_node {int vm_node; } ;
struct drm_vma_offset_manager {int vm_lock; int vm_addr_space_mm; } ;


 int FUNC_0 (int *,int *,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_vma_offset_manager *VAR_0,
         struct drm_vma_offset_node *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(&VAR_0->vm_lock);

 if (!FUNC_1(&VAR_1->vm_node))
  VAR_3 = FUNC_0(&VAR_0->vm_addr_space_mm,
      &VAR_1->vm_node, VAR_2);

 FUNC_3(&VAR_0->vm_lock);

 return VAR_3;
}
