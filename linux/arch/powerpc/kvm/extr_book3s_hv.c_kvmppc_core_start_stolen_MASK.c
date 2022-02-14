
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int stoltb_lock; int preempt_tb; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct kvmppc_vcore *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->stoltb_lock, VAR_1);
 VAR_0->preempt_tb = FUNC_0();
 FUNC_2(&VAR_0->stoltb_lock, VAR_1);
}
