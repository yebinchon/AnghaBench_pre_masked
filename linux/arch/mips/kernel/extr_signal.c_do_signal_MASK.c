
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int* regs; int cp0_epc; } ;
struct ksignal {int dummy; } ;
struct TYPE_5__ {TYPE_1__* abi; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;
struct TYPE_4__ {int restart; } ;






 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (struct ksignal*) ;
 int FUNC_1 (struct ksignal*,struct pt_regs*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_1)
{
 struct ksignal VAR_2;

 if (FUNC_0(&VAR_2)) {

  FUNC_1(&VAR_2, VAR_1);
  return;
 }

 if (VAR_1->regs[0]) {
  switch (VAR_1->regs[2]) {
  case 131:
  case 129:
  case 130:
   VAR_1->regs[2] = VAR_1->regs[0];
   VAR_1->regs[7] = VAR_1->regs[26];
   VAR_1->cp0_epc -= 4;
   break;

  case 128:
   VAR_1->regs[2] = VAR_0->thread.abi->restart;
   VAR_1->regs[7] = VAR_1->regs[26];
   VAR_1->cp0_epc -= 4;
   break;
  }
  VAR_1->regs[0] = 0;
 }





 FUNC_2();
}
