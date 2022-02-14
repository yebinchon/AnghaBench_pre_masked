
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biosregs {int gs; int fs; void* es; void* ds; int eflags; } ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct biosregs*,int ,int) ;

void FUNC_4(struct biosregs *VAR_1)
{
 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->eflags |= VAR_0;
 VAR_1->ds = FUNC_0();
 VAR_1->es = FUNC_0();
 VAR_1->fs = FUNC_1();
 VAR_1->gs = FUNC_2();
}
