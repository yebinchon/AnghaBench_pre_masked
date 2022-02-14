
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_regs*,int) ;
 int FUNC_1 (struct pt_regs*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct pt_regs *VAR_3)
{
 int VAR_4;
 vm_fault_t VAR_5;

 VAR_4 = VAR_1 | VAR_0 | VAR_2;
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (FUNC_2(VAR_5))
  FUNC_1(VAR_3, VAR_4, VAR_5);
}
