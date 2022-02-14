
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ level; } ;
struct kvm_mmu_page {int write_flooding_count; TYPE_1__ role; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct kvm_mmu_page *VAR_1)
{




 if (VAR_1->role.level == VAR_0)
  return 0;

 FUNC_0(&VAR_1->write_flooding_count);
 return FUNC_1(&VAR_1->write_flooding_count) >= 3;
}
