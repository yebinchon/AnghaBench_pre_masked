
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_pte {int rc; unsigned long raddr; } ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_nested_guest {int shadow_lpid; int shadow_pgtable; } ;
struct TYPE_2__ {int lpid; int pgtable; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (struct kvm*,int ,int,unsigned long,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static long FUNC_3(struct kvm_vcpu *VAR_5,
           struct kvm_nested_guest *VAR_6,
           unsigned long VAR_7,
           struct kvmppc_pte VAR_8,
           unsigned long VAR_9)
{
 struct kvm *VAR_10 = VAR_5->kvm;
 bool VAR_11 = !!(VAR_9 & VAR_0);
 u64 VAR_12;
 long VAR_13;


 VAR_12 = VAR_3;
 if (VAR_11)
  VAR_12 |= VAR_4;
 if (VAR_12 & ~VAR_8.rc)
  return VAR_2;

 FUNC_1(&VAR_10->mmu_lock);

 VAR_13 = FUNC_0(VAR_10, VAR_10->arch.pgtable, VAR_11,
         VAR_8.raddr, VAR_10->arch.lpid);
 if (!VAR_13) {
  VAR_13 = -VAR_1;
  goto out_unlock;
 }


 VAR_13 = FUNC_0(VAR_10, VAR_6->shadow_pgtable, VAR_11, VAR_7,
          VAR_6->shadow_lpid);
 if (!VAR_13)
  VAR_13 = -VAR_1;
 else
  VAR_13 = 0;

out_unlock:
 FUNC_2(&VAR_10->mmu_lock);
 return VAR_13;
}
