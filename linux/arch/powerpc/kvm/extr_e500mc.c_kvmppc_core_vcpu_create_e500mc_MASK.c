
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oldpir; void* shared; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvmppc_vcpu_e500 {struct kvm_vcpu vcpu; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct kvm_vcpu* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_3 (int ,int) ;
 int VAR_3 ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvmppc_vcpu_e500*) ;
 int FUNC_7 (struct kvmppc_vcpu_e500*) ;

__attribute__((used)) static struct kvm_vcpu *FUNC_8(struct kvm *VAR_4,
             unsigned int VAR_5)
{
 struct kvmppc_vcpu_e500 *VAR_6;
 struct kvm_vcpu *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3, VAR_1);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_7 = &VAR_6->vcpu;


 VAR_7->arch.oldpir = 0xffffffff;

 VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5);
 if (VAR_8)
  goto free_vcpu;

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  goto uninit_vcpu;

 VAR_7->arch.shared = (void *)FUNC_1(VAR_1 | VAR_2);
 if (!VAR_7->arch.shared) {
  VAR_8 = -VAR_0;
  goto uninit_tlb;
 }

 return VAR_7;

uninit_tlb:
 FUNC_7(VAR_6);
uninit_vcpu:
 FUNC_5(VAR_7);

free_vcpu:
 FUNC_2(VAR_3, VAR_6);
out:
 return FUNC_0(VAR_8);
}
