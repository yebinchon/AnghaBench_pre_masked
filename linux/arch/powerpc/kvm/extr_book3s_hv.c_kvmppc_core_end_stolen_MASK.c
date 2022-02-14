
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {scalar_t__ preempt_tb; int stoltb_lock; int stolen_tb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct kvmppc_vcore *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->stoltb_lock, VAR_2);
 if (VAR_1->preempt_tb != VAR_0) {
  VAR_1->stolen_tb += FUNC_0() - VAR_1->preempt_tb;
  VAR_1->preempt_tb = VAR_0;
 }
 FUNC_2(&VAR_1->stoltb_lock, VAR_2);
}
