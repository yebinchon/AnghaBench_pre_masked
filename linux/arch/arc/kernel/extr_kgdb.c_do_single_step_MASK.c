
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {scalar_t__ ret; } ;
struct callee_regs {int dummy; } ;
struct TYPE_4__ {scalar_t__ callee_reg; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;
struct TYPE_5__ {int armed; int * opcode; int * address; scalar_t__ is_branch; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,struct pt_regs*,struct callee_regs*,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_2)
{
 VAR_1.is_branch = FUNC_0((unsigned long)
  VAR_2->ret, VAR_2, (struct callee_regs *)
  VAR_0->thread.callee_reg,
  &VAR_1.address[0],
  &VAR_1.address[1]);

 FUNC_1(VAR_1.address[0], &VAR_1.opcode[0]);

 if (VAR_1.is_branch) {
  FUNC_1(VAR_1.address[1],
   &VAR_1.opcode[1]);
 }

 VAR_1.armed++;
}
