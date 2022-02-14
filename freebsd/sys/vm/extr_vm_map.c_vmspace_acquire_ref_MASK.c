
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int vm_refcnt; } ;
struct proc {struct vmspace* p_vmspace; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (struct vmspace*) ;

struct vmspace *
FUNC_4(struct proc *VAR_0)
{
 struct vmspace *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->p_vmspace;
 if (VAR_1 == ((void*)0)) {
  FUNC_1(VAR_0);
  return (((void*)0));
 }
 VAR_2 = VAR_1->vm_refcnt;
 do {
  if (VAR_2 <= 0) {
   FUNC_1(VAR_0);
   return (((void*)0));
  }
 } while (!FUNC_2(&VAR_1->vm_refcnt, &VAR_2, VAR_2 + 1));
 if (VAR_1 != VAR_0->p_vmspace) {
  FUNC_1(VAR_0);
  FUNC_3(VAR_1);
  return (((void*)0));
 }
 FUNC_1(VAR_0);
 return (VAR_1);
}
