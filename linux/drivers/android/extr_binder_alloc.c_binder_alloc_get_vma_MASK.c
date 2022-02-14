
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct binder_alloc {struct vm_area_struct* vma; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline struct vm_area_struct *FUNC_1(
  struct binder_alloc *VAR_0)
{
 struct vm_area_struct *VAR_1 = ((void*)0);

 if (VAR_0->vma) {

  FUNC_0();
  VAR_1 = VAR_0->vma;
 }
 return VAR_1;
}
