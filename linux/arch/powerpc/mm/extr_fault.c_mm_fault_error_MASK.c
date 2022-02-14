
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct pt_regs {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pt_regs*,unsigned long) ;
 int VAR_7 ;
 int FUNC_2 (struct pt_regs*,unsigned long,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_8, unsigned long VAR_9,
    vm_fault_t VAR_10)
{




 if (FUNC_3(VAR_7) && !FUNC_5(VAR_8))
  return VAR_0;


 if (VAR_10 & VAR_4) {




  if (!FUNC_5(VAR_8))
   return VAR_1;
  FUNC_4();
 } else {
  if (VAR_10 & (VAR_5|VAR_2|
        VAR_3))
   return FUNC_2(VAR_8, VAR_9, VAR_10);
  else if (VAR_10 & VAR_6)
   return FUNC_1(VAR_8, VAR_9);
  else
   FUNC_0();
 }
 return 0;
}
