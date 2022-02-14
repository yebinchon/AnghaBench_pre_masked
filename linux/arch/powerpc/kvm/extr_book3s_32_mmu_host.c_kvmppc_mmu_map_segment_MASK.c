
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ulong ;
typedef int u64 ;
typedef size_t u32 ;
struct kvmppc_sid_map {size_t guest_esid; size_t host_vsid; } ;
struct kvmppc_book3s_shadow_vcpu {size_t* sr; } ;
struct TYPE_3__ {scalar_t__ (* esid_to_vsid ) (struct kvm_vcpu*,size_t,int *) ;} ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct kvmppc_sid_map* FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (char*,size_t,size_t) ;
 struct kvmppc_sid_map* FUNC_2 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,size_t,int *) ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvmppc_book3s_shadow_vcpu*) ;

int FUNC_6(struct kvm_vcpu *VAR_4, ulong VAR_5)
{
 u32 VAR_6 = VAR_5 >> VAR_1;
 u64 VAR_7;
 u32 VAR_8;
 struct kvmppc_sid_map *VAR_9;
 struct kvmppc_book3s_shadow_vcpu *VAR_10 = FUNC_4(VAR_4);
 int VAR_11 = 0;

 if (VAR_4->arch.mmu.esid_to_vsid(VAR_4, VAR_6, &VAR_7)) {

  VAR_10->sr[VAR_6] = VAR_2;
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_4, VAR_7);
 if (!VAR_9)
  VAR_9 = FUNC_0(VAR_4, VAR_7);

 VAR_9->guest_esid = VAR_6;
 VAR_8 = VAR_9->host_vsid | VAR_3;
 VAR_10->sr[VAR_6] = VAR_8;

 FUNC_1("MMU: mtsr %d, 0x%x\n", VAR_6, VAR_8);

out:
 FUNC_5(VAR_10);
 return VAR_11;
}
