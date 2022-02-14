
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int addr; } ;
struct pt_regs {TYPE_2__ psw; } ;
struct arch_uprobe {int insn; } ;
struct TYPE_4__ {scalar_t__ eaba; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__,int ) ;
 int FUNC_1 (struct pt_regs*,int ,int ,int *) ;
 int FUNC_2 (struct arch_uprobe*,struct pt_regs*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ FUNC_5 (TYPE_2__) ;

bool FUNC_6(struct arch_uprobe *VAR_5, struct pt_regs *VAR_6)
{
 if ((FUNC_5(VAR_6->psw).eaba == VAR_1) ||
     ((FUNC_5(VAR_6->psw).eaba == VAR_2) &&
      !FUNC_3())) {
  VAR_6->psw.addr = FUNC_0(VAR_6->psw, VAR_4);
  FUNC_1(VAR_6, VAR_3, VAR_0, ((void*)0));
  return 1;
 }
 if (FUNC_4(VAR_5->insn)) {
  FUNC_2(VAR_5, VAR_6);
  return 1;
 }
 return 0;
}
