
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_vm_change {scalar_t__ force; } ;
typedef int pud_t ;
typedef int pgd_t ;


 int FUNC_0 (unsigned long,unsigned long,struct host_vm_change*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long,unsigned long,struct host_vm_change*) ;

__attribute__((used)) static inline int FUNC_7(pgd_t *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2,
       struct host_vm_change *VAR_3)
{
 pud_t *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_4(VAR_0, VAR_1);
 do {
  VAR_5 = FUNC_1(VAR_1, VAR_2);
  if (!FUNC_5(*VAR_4)) {
   if (VAR_3->force || FUNC_3(*VAR_4)) {
    VAR_6 = FUNC_0(VAR_1, VAR_5 - VAR_1, VAR_3);
    FUNC_2(*VAR_4);
   }
  }
  else VAR_6 = FUNC_6(VAR_4, VAR_1, VAR_5, VAR_3);
 } while (VAR_4++, VAR_1 = VAR_5, ((VAR_1 < VAR_2) && !VAR_6));
 return VAR_6;
}
