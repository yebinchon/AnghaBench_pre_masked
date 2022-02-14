
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {int dirty_bitmap; } ;
struct kvm_dirty_log {int slot; } ;
struct kvm {int slots_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm_memslots*,int ) ;
 unsigned long FUNC_1 (struct kvm_memory_slot*) ;
 int FUNC_2 (struct kvm*,struct kvm_dirty_log*,int*) ;
 scalar_t__ FUNC_3 (struct kvm*) ;
 struct kvm_memslots* FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*,struct kvm_memory_slot*) ;
 int FUNC_6 (int ,int ,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct kvm *VAR_3,
          struct kvm_dirty_log *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 struct kvm_memslots *VAR_7;
 struct kvm_memory_slot *VAR_8;
 int VAR_9 = 0;

 if (FUNC_3(VAR_3))
  return -VAR_0;

 FUNC_7(&VAR_3->slots_lock);

 VAR_5 = -VAR_0;
 if (VAR_4->slot >= VAR_2)
  goto out;

 VAR_7 = FUNC_4(VAR_3);
 VAR_8 = FUNC_0(VAR_7, VAR_4->slot);
 VAR_5 = -VAR_1;
 if (!VAR_8->dirty_bitmap)
  goto out;

 FUNC_5(VAR_3, VAR_8);
 VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_9);
 if (VAR_5)
  goto out;


 if (VAR_9) {
  VAR_6 = FUNC_1(VAR_8);
  FUNC_6(VAR_8->dirty_bitmap, 0, VAR_6);
 }
 VAR_5 = 0;
out:
 FUNC_8(&VAR_3->slots_lock);
 return VAR_5;
}
