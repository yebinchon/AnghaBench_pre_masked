
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmgt_guest_info {struct kvm* kvm; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int srcu; int mmu_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm*,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kvm*,struct kvm_memory_slot*,int ,int ) ;
 int FUNC_3 (struct kvmgt_guest_info*,int ) ;
 int FUNC_4 (struct kvmgt_guest_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(unsigned long VAR_2, u64 VAR_3)
{
 struct kvmgt_guest_info *VAR_4;
 struct kvm *VAR_5;
 struct kvm_memory_slot *VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_4 = (struct kvmgt_guest_info *)VAR_2;
 VAR_5 = VAR_4->kvm;

 VAR_7 = FUNC_7(&VAR_5->srcu);
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (!VAR_6) {
  FUNC_8(&VAR_5->srcu, VAR_7);
  return -VAR_0;
 }

 FUNC_5(&VAR_5->mmu_lock);

 if (!FUNC_3(VAR_4, VAR_3))
  goto out;

 FUNC_2(VAR_5, VAR_6, VAR_3, VAR_1);
 FUNC_4(VAR_4, VAR_3);

out:
 FUNC_6(&VAR_5->mmu_lock);
 FUNC_8(&VAR_5->srcu, VAR_7);
 return 0;
}
