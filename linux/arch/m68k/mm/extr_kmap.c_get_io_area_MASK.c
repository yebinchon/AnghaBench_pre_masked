
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {unsigned long size; struct vm_struct* next; void* addr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct vm_struct* VAR_4 ;
 int FUNC_0 (struct vm_struct*) ;
 struct vm_struct* FUNC_1 (int,int ) ;

__attribute__((used)) static struct vm_struct *FUNC_2(unsigned long VAR_5)
{
 unsigned long VAR_6;
 struct vm_struct **VAR_7, *VAR_8, *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);
 VAR_6 = VAR_3;
 for (VAR_7 = &VAR_4; (VAR_8 = *VAR_7) ; VAR_7 = &VAR_8->next) {
  if (VAR_5 + VAR_6 < (unsigned long)VAR_8->addr)
   break;
  if (VAR_6 > VAR_2-VAR_5) {
   FUNC_0(VAR_9);
   return ((void*)0);
  }
  VAR_6 = VAR_8->size + (unsigned long)VAR_8->addr;
 }
 VAR_9->addr = (void *)VAR_6;
 VAR_9->size = VAR_5 + VAR_1;
 VAR_9->next = *VAR_7;
 *VAR_7 = VAR_9;
 return VAR_9;
}
