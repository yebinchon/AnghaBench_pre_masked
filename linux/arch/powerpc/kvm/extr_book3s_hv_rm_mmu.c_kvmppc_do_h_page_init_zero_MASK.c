
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
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 long FUNC_1 (struct kvm_vcpu*,unsigned long,int,unsigned long*,struct kvm_memory_slot**) ;
 int FUNC_2 (struct kvm_memory_slot*,unsigned long,int ) ;
 scalar_t__ FUNC_3 (struct kvm*,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static long FUNC_7(struct kvm_vcpu *VAR_6,
           unsigned long VAR_7)
{
 struct kvm_memory_slot *VAR_8;
 struct kvm *VAR_9 = VAR_6->kvm;
 unsigned long VAR_10, VAR_11;
 long VAR_12 = VAR_0;
 int VAR_13;


 VAR_11 = VAR_9->mmu_notifier_seq;
 FUNC_6();

 VAR_12 = FUNC_1(VAR_6, VAR_7, 1, &VAR_10, &VAR_8);
 if (VAR_12 != VAR_0)
  return VAR_12;


 FUNC_4(&VAR_9->mmu_lock.rlock);
 if (FUNC_3(VAR_9, VAR_11)) {
  VAR_12 = VAR_1;
  goto out_unlock;
 }


 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13 += VAR_2, VAR_10 += VAR_2)
  FUNC_0((void *)VAR_10);
 FUNC_2(VAR_8, VAR_7 >> VAR_3, VAR_4);

out_unlock:
 FUNC_5(&VAR_9->mmu_lock.rlock);
 return VAR_12;
}
