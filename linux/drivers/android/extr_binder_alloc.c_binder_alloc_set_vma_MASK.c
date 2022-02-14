
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct binder_alloc {struct vm_area_struct* vma; int vma_vm_mm; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct binder_alloc *VAR_0,
  struct vm_area_struct *VAR_1)
{
 if (VAR_1)
  VAR_0->vma_vm_mm = VAR_1->vm_mm;






 FUNC_0();
 VAR_0->vma = VAR_1;
}
