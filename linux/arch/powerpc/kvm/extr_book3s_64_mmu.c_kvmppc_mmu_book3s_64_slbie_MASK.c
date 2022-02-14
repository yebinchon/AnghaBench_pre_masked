
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_slb {int valid; scalar_t__ origv; scalar_t__ orige; int esid; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 struct kvmppc_slb* FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*,int,int) ;
 unsigned long long FUNC_3 (struct kvmppc_slb*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 struct kvmppc_slb *VAR_2;
 u64 VAR_3;

 FUNC_0("KVM MMU: slbie(0x%llx)\n", VAR_1);

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2)
  return;

 FUNC_0("KVM MMU: slbie(0x%llx, 0x%llx)\n", VAR_1, VAR_2->esid);

 VAR_2->valid = 0;
 VAR_2->orige = 0;
 VAR_2->origv = 0;

 VAR_3 = 1ull << FUNC_3(VAR_2);
 FUNC_2(VAR_0, VAR_1 & ~(VAR_3 - 1), VAR_3);
}
