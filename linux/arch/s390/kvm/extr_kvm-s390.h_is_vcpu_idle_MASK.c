
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; int vcpu_id; } ;
struct TYPE_3__ {int idle_mask; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_vcpu *VAR_0)
{
 return FUNC_0(VAR_0->vcpu_id, VAR_0->kvm->arch.idle_mask);
}
