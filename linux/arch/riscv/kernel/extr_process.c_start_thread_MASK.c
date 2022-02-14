
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long sepc; unsigned long sp; int sstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct pt_regs*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct pt_regs *VAR_5, unsigned long VAR_6,
 unsigned long VAR_7)
{
 VAR_5->sstatus = VAR_1;
 if (VAR_4) {
  VAR_5->sstatus |= VAR_0;




  FUNC_0(VAR_3, VAR_5);
 }
 VAR_5->sepc = VAR_6;
 VAR_5->sp = VAR_7;
 FUNC_1(VAR_2);
}
