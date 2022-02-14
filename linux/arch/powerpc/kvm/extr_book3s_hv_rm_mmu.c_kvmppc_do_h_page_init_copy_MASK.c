
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_memory_slot {int dummy; } ;
struct TYPE_2__ {int rlock; } ;
struct kvm {unsigned long mmu_notifier_seq; TYPE_1__ mmu_lock; } ;


 long VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (struct kvm_vcpu*,unsigned long,int,unsigned long*,struct kvm_memory_slot**) ;
 int FUNC_1 (struct kvm_memory_slot*,unsigned long,int ) ;
 int FUNC_2 (void*,void*,int ) ;
 scalar_t__ FUNC_3 (struct kvm*,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static long FUNC_7(struct kvm_vcpu *VAR_5,
           unsigned long VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 struct kvm_memory_slot *VAR_11;
 struct kvm *VAR_12 = VAR_5->kvm;
 long VAR_13 = VAR_0;


 VAR_10 = VAR_12->mmu_notifier_seq;
 FUNC_6();

 VAR_13 = FUNC_0(VAR_5, VAR_6, 1, &VAR_8, &VAR_11);
 if (VAR_13 != VAR_0)
  return VAR_13;
 VAR_13 = FUNC_0(VAR_5, VAR_7, 0, &VAR_9, ((void*)0));
 if (VAR_13 != VAR_0)
  return VAR_13;


 FUNC_4(&VAR_12->mmu_lock.rlock);
 if (FUNC_3(VAR_12, VAR_10)) {
  VAR_13 = VAR_1;
  goto out_unlock;
 }


 FUNC_2((void *)VAR_8, (void *)VAR_9, VAR_4);

 FUNC_1(VAR_11, VAR_6 >> VAR_2, VAR_3);

out_unlock:
 FUNC_5(&VAR_12->mmu_lock.rlock);
 return VAR_13;
}
