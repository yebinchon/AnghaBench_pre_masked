
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int halted; } ;
struct TYPE_5__ {scalar_t__ mp_state; TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int (* check_nested_events ) (struct kvm_vcpu*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*,int) ;

__attribute__((used)) static inline bool FUNC_2(struct kvm_vcpu *VAR_2)
{
 if (FUNC_0(VAR_2) && VAR_1->check_nested_events)
  VAR_1->check_nested_events(VAR_2, 0);

 return (VAR_2->arch.mp_state == VAR_0 &&
  !VAR_2->arch.apf.halted);
}
