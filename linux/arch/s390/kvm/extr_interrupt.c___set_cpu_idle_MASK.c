
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; int vcpu_id; } ;
struct TYPE_3__ {int idle_mask; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1->vcpu_id, VAR_1->kvm->arch.idle_mask);
}
