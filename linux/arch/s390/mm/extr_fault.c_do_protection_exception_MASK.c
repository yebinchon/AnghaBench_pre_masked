
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct TYPE_2__ {unsigned long addr; } ;
struct pt_regs {unsigned long int_parm_long; int int_code; TYPE_1__ psw; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (TYPE_1__,int) ;
 int FUNC_1 (struct pt_regs*,int) ;
 int FUNC_2 (struct pt_regs*,int,int) ;
 int FUNC_3 (struct pt_regs*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct pt_regs *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 vm_fault_t VAR_8;

 VAR_6 = VAR_5->int_parm_long;





 if (!(VAR_5->int_code & 0x200))
  VAR_5->psw.addr = FUNC_0(VAR_5->psw, VAR_5->int_code >> 16);





 if (FUNC_4(!(VAR_6 & 4))) {
  FUNC_3(VAR_5);
  return;
 }
 if (FUNC_4(VAR_0 && (VAR_6 & 0x80))) {
  VAR_5->int_parm_long = (VAR_6 & ~VAR_1) |
     (VAR_5->psw.addr & VAR_1);
  VAR_7 = VAR_2;
  VAR_8 = VAR_3;
 } else {
  VAR_7 = VAR_4;
  VAR_8 = FUNC_1(VAR_5, VAR_7);
 }
 if (FUNC_4(VAR_8))
  FUNC_2(VAR_5, VAR_7, VAR_8);
}
