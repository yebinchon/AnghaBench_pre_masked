
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vma_offset_manager {int vm_addr_space_mm; int vm_lock; } ;


 int FUNC_0 (int *,unsigned long,unsigned long) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_vma_offset_manager *VAR_0,
     unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_1(&VAR_0->vm_lock);
 FUNC_0(&VAR_0->vm_addr_space_mm, VAR_1, VAR_2);
}
