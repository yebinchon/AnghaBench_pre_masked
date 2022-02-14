
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__* mmu; TYPE_2__ apf; } ;
struct kvm_vcpu {int vcpu_id; TYPE_3__ arch; } ;
struct kvm_arch_async_pf {int token; int cr3; int direct_map; int gfn; } ;
typedef int gva_t ;
typedef int gfn_t ;
struct TYPE_4__ {int (* get_cr3 ) (struct kvm_vcpu*) ;int direct_map; } ;


 int FUNC_0 (struct kvm_vcpu*,int ,int ,struct kvm_arch_async_pf*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0, gva_t VAR_1, gfn_t VAR_2)
{
 struct kvm_arch_async_pf VAR_3;

 VAR_3.token = (VAR_0->arch.apf.id++ << 12) | VAR_0->vcpu_id;
 VAR_3.gfn = VAR_2;
 VAR_3.direct_map = VAR_0->arch.mmu->direct_map;
 VAR_3.cr3 = VAR_0->arch.mmu->get_cr3(VAR_0);

 return FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_0, VAR_2), &VAR_3);
}
