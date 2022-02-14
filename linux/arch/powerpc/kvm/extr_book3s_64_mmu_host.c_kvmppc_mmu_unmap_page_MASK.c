
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_pte {int eaddr; int vpage; } ;
struct TYPE_3__ {int (* esid_to_vsid ) (struct kvm_vcpu*,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int*) ;

void FUNC_2(struct kvm_vcpu *VAR_2, struct kvmppc_pte *VAR_3)
{
 u64 VAR_4 = 0xfffffffffULL;
 u64 VAR_5;

 VAR_2->arch.mmu.esid_to_vsid(VAR_2, VAR_3->eaddr >> VAR_0, &VAR_5);
 if (VAR_5 & VAR_1)
  VAR_4 = 0xffffffff0ULL;
 FUNC_0(VAR_2, VAR_3->vpage, VAR_4);
}
