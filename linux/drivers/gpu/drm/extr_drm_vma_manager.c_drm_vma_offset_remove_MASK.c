
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vma_offset_node {int vm_node; } ;
struct drm_vma_offset_manager {int vm_lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_vma_offset_manager *VAR_0,
      struct drm_vma_offset_node *VAR_1)
{
 FUNC_3(&VAR_0->vm_lock);

 if (FUNC_0(&VAR_1->vm_node)) {
  FUNC_1(&VAR_1->vm_node);
  FUNC_2(&VAR_1->vm_node, 0, sizeof(VAR_1->vm_node));
 }

 FUNC_4(&VAR_0->vm_lock);
}
