
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_shadow_walk_iterator {int dummy; } ;
struct TYPE_3__ {int root_hpa; } ;


 int FUNC_0 (struct kvm_shadow_walk_iterator*,struct kvm_vcpu*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_shadow_walk_iterator *VAR_0,
        struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_1->arch.mmu->root_hpa,
        VAR_2);
}
