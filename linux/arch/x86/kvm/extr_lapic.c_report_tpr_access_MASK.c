
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_lapic {TYPE_2__* vcpu; } ;
struct TYPE_3__ {scalar_t__ tpr_access_reporting; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_lapic*,int) ;

__attribute__((used)) static inline void FUNC_1(struct kvm_lapic *VAR_0, bool VAR_1)
{
 if (VAR_0->vcpu->arch.tpr_access_reporting)
  FUNC_0(VAR_0, VAR_1);
}
