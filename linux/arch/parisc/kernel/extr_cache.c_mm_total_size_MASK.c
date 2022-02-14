
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct mm_struct *VAR_0)
{
 struct vm_area_struct *VAR_1;
 unsigned long VAR_2 = 0;

 for (VAR_1 = VAR_0->mmap; VAR_1; VAR_1 = VAR_1->vm_next)
  VAR_2 += VAR_1->vm_end - VAR_1->vm_start;
 return VAR_2;
}
