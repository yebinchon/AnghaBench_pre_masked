
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int * gpr; } ;
struct TYPE_3__ {int comm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct pt_regs *VAR_1)
{
 FUNC_2("Kernel stack overflow in process %s[%d], r1=%lx\n",
  VAR_0->comm, FUNC_4(VAR_0), VAR_1->gpr[1]);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1("kernel stack overflow");
}
