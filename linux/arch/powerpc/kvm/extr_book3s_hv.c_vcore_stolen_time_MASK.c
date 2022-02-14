
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvmppc_vcore {scalar_t__ stolen_tb; scalar_t__ vcore_state; scalar_t__ preempt_tb; int stoltb_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_2(struct kvmppc_vcore *VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_2->stoltb_lock, VAR_5);
 VAR_4 = VAR_2->stolen_tb;
 if (VAR_2->vcore_state != VAR_1 &&
     VAR_2->preempt_tb != VAR_0)
  VAR_4 += VAR_3 - VAR_2->preempt_tb;
 FUNC_1(&VAR_2->stoltb_lock, VAR_5);
 return VAR_4;
}
