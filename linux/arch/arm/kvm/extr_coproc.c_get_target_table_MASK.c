
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_coproc_target_table {size_t num; struct coproc_reg const* table; } ;
struct coproc_reg {int dummy; } ;


 struct kvm_coproc_target_table** VAR_0 ;

__attribute__((used)) static const struct coproc_reg *FUNC_0(unsigned VAR_1, size_t *VAR_2)
{
 struct kvm_coproc_target_table *VAR_3;

 VAR_3 = VAR_0[VAR_1];
 *VAR_2 = VAR_3->num;
 return VAR_3->table;
}
