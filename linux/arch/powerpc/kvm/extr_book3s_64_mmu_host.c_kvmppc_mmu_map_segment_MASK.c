
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong ;
typedef int u64 ;
struct kvmppc_sid_map {int guest_esid; int host_vsid; } ;
struct kvmppc_book3s_shadow_vcpu {TYPE_3__* slb; } ;
struct TYPE_5__ {scalar_t__ (* esid_to_vsid ) (struct kvm_vcpu*,int,int*) ;} ;
struct TYPE_6__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_8__ {int sllp; } ;
struct TYPE_7__ {int esid; int vsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct kvmppc_sid_map* FUNC_0 (struct kvm_vcpu*,int) ;
 struct kvmppc_sid_map* FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 TYPE_4__* VAR_8 ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int,int*) ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvmppc_book3s_shadow_vcpu*) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct kvm_vcpu *VAR_9, ulong VAR_10)
{
 struct kvmppc_book3s_shadow_vcpu *VAR_11 = FUNC_4(VAR_9);
 u64 VAR_12 = VAR_10 >> VAR_3;
 u64 VAR_13 = (VAR_10 & VAR_1) | VAR_4;
 u64 VAR_14 = VAR_6;
 u64 VAR_15;
 int VAR_16;
 struct kvmppc_sid_map *VAR_17;
 int VAR_18 = 0;

 VAR_16 = FUNC_2(VAR_9, VAR_10 & VAR_1);

 if (VAR_9->arch.mmu.esid_to_vsid(VAR_9, VAR_12, &VAR_15)) {

  VAR_11->slb[VAR_16].esid = 0;
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_17 = FUNC_1(VAR_9, VAR_15);
 if (!VAR_17)
  VAR_17 = FUNC_0(VAR_9, VAR_15);

 VAR_17->guest_esid = VAR_12;

 VAR_14 |= (VAR_17->host_vsid << 12);
 VAR_14 &= ~VAR_5;
 VAR_13 |= VAR_16;







 VAR_11->slb[VAR_16].esid = VAR_13;
 VAR_11->slb[VAR_16].vsid = VAR_14;

 FUNC_6(VAR_14, VAR_13);

out:
 FUNC_5(VAR_11);
 return VAR_18;
}
