
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_book3s {int dummy; } ;
struct TYPE_2__ {int shared_big_endian; int pvr; int slb_nr; int shadow_msr; int shadow_vcpu; int intr_msr; void* shared; struct kvmppc_vcpu_book3s* book3s; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct kvm_vcpu* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_4 (int ,int) ;
 int VAR_8 ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct kvmppc_vcpu_book3s*) ;
 struct kvmppc_vcpu_book3s* FUNC_13 (int) ;

__attribute__((used)) static struct kvm_vcpu *FUNC_14(struct kvm *VAR_9,
         unsigned int VAR_10)
{
 struct kvmppc_vcpu_book3s *VAR_11;
 struct kvm_vcpu *VAR_12;
 int VAR_13 = -VAR_0;
 unsigned long VAR_14;

 VAR_12 = FUNC_4(VAR_8, VAR_1);
 if (!VAR_12)
  goto out;

 VAR_11 = FUNC_13(sizeof(struct kvmppc_vcpu_book3s));
 if (!VAR_11)
  goto free_vcpu;
 VAR_12->arch.book3s = VAR_11;
 VAR_13 = FUNC_5(VAR_12, VAR_9, VAR_10);
 if (VAR_13)
  goto free_shadow_vcpu;

 VAR_13 = -VAR_0;
 VAR_14 = FUNC_1(VAR_1|VAR_7);
 if (!VAR_14)
  goto uninit_vcpu;
 VAR_12->arch.shared = (void *)VAR_14;
 VAR_12->arch.pvr = 0x84202;

 FUNC_8(VAR_12, VAR_12->arch.pvr);
 VAR_12->arch.slb_nr = 64;

 VAR_12->arch.shadow_msr = VAR_5 & ~VAR_3;

 VAR_13 = FUNC_7(VAR_12);
 if (VAR_13 < 0)
  goto uninit_vcpu;

 return VAR_12;

uninit_vcpu:
 FUNC_6(VAR_12);
free_shadow_vcpu:




 FUNC_12(VAR_11);
free_vcpu:
 FUNC_3(VAR_8, VAR_12);
out:
 return FUNC_0(VAR_13);
}
