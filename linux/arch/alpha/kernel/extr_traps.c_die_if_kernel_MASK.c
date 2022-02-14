
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int ps; scalar_t__ pc; } ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (struct pt_regs*,unsigned long*) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ) ;

void
FUNC_10(char * VAR_5, struct pt_regs *VAR_6, long VAR_7, unsigned long *VAR_8)
{
 if (VAR_6->ps & 8)
  return;



 FUNC_7("%s(%d): %s %ld\n", VAR_4->comm, FUNC_8(VAR_4), VAR_5, VAR_7);
 FUNC_2(VAR_6, VAR_8);
 FUNC_0(VAR_2, VAR_0);
 FUNC_3((unsigned long *)(VAR_6+1));
 FUNC_1((unsigned int *)VAR_6->pc);

 if (FUNC_9 (VAR_3)) {
  FUNC_7("die_if_kernel recursion detected.\n");
  FUNC_6();
  while (1);
 }
 FUNC_4(VAR_1);
}
