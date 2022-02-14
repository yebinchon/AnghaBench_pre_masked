
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sys_reg_desc {int dummy; } ;
struct TYPE_4__ {size_t num; struct sys_reg_desc const* table; } ;
struct TYPE_3__ {size_t num; struct sys_reg_desc const* table; } ;
struct kvm_sys_reg_target_table {TYPE_2__ table32; TYPE_1__ table64; } ;


 struct kvm_sys_reg_target_table** VAR_0 ;

__attribute__((used)) static const struct sys_reg_desc *FUNC_0(unsigned VAR_1,
         bool VAR_2,
         size_t *VAR_3)
{
 struct kvm_sys_reg_target_table *VAR_4;

 VAR_4 = VAR_0[VAR_1];
 if (VAR_2) {
  *VAR_3 = VAR_4->table64.num;
  return VAR_4->table64.table;
 } else {
  *VAR_3 = VAR_4->table32.num;
  return VAR_4->table32.table;
 }
}
