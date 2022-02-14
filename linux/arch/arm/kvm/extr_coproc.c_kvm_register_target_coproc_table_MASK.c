
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_coproc_target_table {size_t target; int num; int table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct kvm_coproc_target_table** VAR_0 ;

void FUNC_2(struct kvm_coproc_target_table *VAR_1)
{
 FUNC_0(FUNC_1(VAR_1->table, VAR_1->num));
 VAR_0[VAR_1->target] = VAR_1;
}
