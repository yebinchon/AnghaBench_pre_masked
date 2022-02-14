
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {void* addr; scalar_t__ size; struct vm_struct* next; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (void*,scalar_t__) ;
 struct vm_struct* VAR_1 ;
 int FUNC_1 (struct vm_struct*) ;

__attribute__((used)) static inline void FUNC_2(void *VAR_2)
{
 struct vm_struct **VAR_3, *VAR_4;

 if (!VAR_2)
  return;
 VAR_2 = (void *)((unsigned long)VAR_2 & -VAR_0);
 for (VAR_3 = &VAR_1 ; (VAR_4 = *VAR_3) ; VAR_3 = &VAR_4->next) {
  if (VAR_4->addr == VAR_2) {
   *VAR_3 = VAR_4->next;

   FUNC_0(VAR_4->addr, VAR_4->size - VAR_0);
   FUNC_1(VAR_4);
   return;
  }
 }
}
