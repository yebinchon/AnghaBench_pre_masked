
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long* gr; unsigned long* iaoq; unsigned long ksp; unsigned long kpc; } ;


 int FUNC_0 (unsigned long*,struct pt_regs*) ;
 struct pt_regs* FUNC_1 (struct task_struct*) ;

void FUNC_2(unsigned long *VAR_0,
    struct task_struct *VAR_1)
{
 struct pt_regs *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3, VAR_4;

 VAR_3 = VAR_2->gr[30];
 VAR_4 = VAR_2->iaoq[0];

 VAR_2->gr[30] = VAR_2->ksp;
 VAR_2->iaoq[0] = VAR_2->kpc;
 FUNC_0(VAR_0, VAR_2);

 VAR_2->gr[30] = VAR_3;
 VAR_2->iaoq[0] = VAR_4;

}
