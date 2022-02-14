
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_start; int vm_mm; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct mm_struct *VAR_1)
{
 struct vm_area_struct *VAR_2;

 if (!VAR_0) {
  FUNC_0();
  return;
 }







 for (VAR_2 = VAR_1->mmap; VAR_2 != ((void*)0); VAR_2 = VAR_2->vm_next)
  FUNC_1(VAR_2->vm_mm, VAR_2->vm_start, VAR_2->vm_end);
}
