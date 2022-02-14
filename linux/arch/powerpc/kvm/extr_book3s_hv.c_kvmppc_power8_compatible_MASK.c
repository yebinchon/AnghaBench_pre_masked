
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vcore; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {scalar_t__ arch_compat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_2)
{
 if (VAR_2->arch.vcore->arch_compat >= VAR_1)
  return 1;
 if ((!VAR_2->arch.vcore->arch_compat) &&
     FUNC_0(VAR_0))
  return 1;
 return 0;
}
