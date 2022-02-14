
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm_clear_dirty_log {int slot; } ;
struct kvm {int slots_lock; } ;
struct TYPE_2__ {int (* flush_shadow_memslot ) (struct kvm*,struct kvm_memory_slot*) ;} ;


 struct kvm_memory_slot* FUNC_0 (struct kvm_memslots*,int ) ;
 int FUNC_1 (struct kvm*,struct kvm_clear_dirty_log*,int*) ;
 struct kvm_memslots* FUNC_2 (struct kvm*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm*,struct kvm_memory_slot*) ;

int FUNC_6(struct kvm *VAR_1, struct kvm_clear_dirty_log *VAR_2)
{
 struct kvm_memslots *VAR_3;
 struct kvm_memory_slot *VAR_4;
 bool VAR_5 = 0;
 int VAR_6;

 FUNC_3(&VAR_1->slots_lock);

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5);

 if (VAR_5) {
  VAR_3 = FUNC_2(VAR_1);
  VAR_4 = FUNC_0(VAR_3, VAR_2->slot);


  VAR_0->flush_shadow_memslot(VAR_1, VAR_4);
 }

 FUNC_4(&VAR_1->slots_lock);
 return VAR_6;
}
