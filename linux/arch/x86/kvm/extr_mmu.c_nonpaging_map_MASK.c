
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int kvm_pfn_t ;
typedef int gva_t ;
typedef int gfn_t ;
struct TYPE_2__ {unsigned long mmu_notifier_seq; int mmu_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct kvm_vcpu*,int ,int,int,int,int ,int,int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,int,int) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ,int,int ,int ,int*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int,int*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,unsigned long) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct kvm_vcpu*,int,int *,int*) ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*,int,int,int ,int *,int,int*) ;

__attribute__((used)) static int FUNC_15(struct kvm_vcpu *VAR_5, gva_t VAR_6, u32 VAR_7,
    gfn_t VAR_8, bool VAR_9)
{
 int VAR_10;
 int VAR_11;
 bool VAR_12;
 kvm_pfn_t VAR_13;
 unsigned long VAR_14;
 bool VAR_15, VAR_16 = VAR_7 & VAR_2;
 bool VAR_17 = (VAR_7 & VAR_1) &&
    FUNC_4();

 VAR_12 = VAR_17;
 VAR_11 = FUNC_8(VAR_5, VAR_8, &VAR_12);
 if (FUNC_6(!VAR_12)) {





  if (VAR_11 > VAR_3)
   VAR_11 = VAR_3;

  VAR_8 &= ~(FUNC_0(VAR_11) - 1);
 }

 if (FUNC_2(VAR_5, VAR_6, VAR_11, VAR_7))
  return VAR_4;

 VAR_14 = VAR_5->kvm->mmu_notifier_seq;
 FUNC_10();

 if (FUNC_14(VAR_5, VAR_9, VAR_8, VAR_6, &VAR_13, VAR_16, &VAR_15))
  return VAR_4;

 if (FUNC_3(VAR_5, VAR_6, VAR_8, VAR_13, VAR_0, &VAR_10))
  return VAR_10;

 VAR_10 = VAR_4;
 FUNC_11(&VAR_5->kvm->mmu_lock);
 if (FUNC_9(VAR_5->kvm, VAR_14))
  goto out_unlock;
 if (FUNC_7(VAR_5) < 0)
  goto out_unlock;
 if (FUNC_6(!VAR_12))
  FUNC_13(VAR_5, VAR_8, &VAR_13, &VAR_11);
 VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_16, VAR_15, VAR_11, VAR_13,
    VAR_9, 0);
out_unlock:
 FUNC_12(&VAR_5->kvm->mmu_lock);
 FUNC_5(VAR_13);
 return VAR_10;
}
