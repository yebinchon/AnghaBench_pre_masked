
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_2__ arch; } ;
typedef int kvm_pfn_t ;
typedef int gva_t ;
typedef int gfn_t ;
struct TYPE_6__ {unsigned long mmu_notifier_seq; int mmu_lock; } ;
struct TYPE_4__ {int root_hpa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int,int,int,int,int ,int,int) ;
 int FUNC_4 (struct kvm_vcpu*,int,int) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,int,int,int) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*,int ,int,int ,int ,int*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*,int,int*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,unsigned long) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*,int,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct kvm_vcpu*,int,int *,int*) ;
 scalar_t__ FUNC_19 (struct kvm_vcpu*,int,int,int,int *,int,int*) ;

__attribute__((used)) static int FUNC_20(struct kvm_vcpu *VAR_7, gva_t VAR_8, u32 VAR_9,
     bool VAR_10)
{
 kvm_pfn_t VAR_11;
 int VAR_12;
 int VAR_13;
 bool VAR_14;
 gfn_t VAR_15 = VAR_8 >> VAR_1;
 unsigned long VAR_16;
 int VAR_17 = VAR_9 & VAR_3;
 bool VAR_18;
 bool VAR_19 = (VAR_9 & VAR_2) &&
    FUNC_7();

 FUNC_1(!FUNC_2(VAR_7->arch.mmu->root_hpa));

 if (FUNC_14(VAR_7, VAR_9, VAR_15))
  return VAR_5;

 VAR_12 = FUNC_13(VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_14 =
  VAR_19 ||
  !FUNC_4(VAR_7, VAR_15, VAR_4);
 VAR_13 = FUNC_11(VAR_7, VAR_15, &VAR_14);
 if (FUNC_9(!VAR_14)) {
  if (VAR_13 > VAR_4 &&
      !FUNC_4(VAR_7, VAR_15, VAR_13))
   VAR_13 = VAR_4;
  VAR_15 &= ~(FUNC_0(VAR_13) - 1);
 }

 if (FUNC_5(VAR_7, VAR_8, VAR_13, VAR_9))
  return VAR_6;

 VAR_16 = VAR_7->kvm->mmu_notifier_seq;
 FUNC_15();

 if (FUNC_19(VAR_7, VAR_10, VAR_15, VAR_8, &VAR_11, VAR_17, &VAR_18))
  return VAR_6;

 if (FUNC_6(VAR_7, 0, VAR_15, VAR_11, VAR_0, &VAR_12))
  return VAR_12;

 VAR_12 = VAR_6;
 FUNC_16(&VAR_7->kvm->mmu_lock);
 if (FUNC_12(VAR_7->kvm, VAR_16))
  goto out_unlock;
 if (FUNC_10(VAR_7) < 0)
  goto out_unlock;
 if (FUNC_9(!VAR_14))
  FUNC_18(VAR_7, VAR_15, &VAR_11, &VAR_13);
 VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_17, VAR_18, VAR_13, VAR_11,
    VAR_10, VAR_19);
out_unlock:
 FUNC_17(&VAR_7->kvm->mmu_lock);
 FUNC_8(VAR_11);
 return VAR_12;
}
