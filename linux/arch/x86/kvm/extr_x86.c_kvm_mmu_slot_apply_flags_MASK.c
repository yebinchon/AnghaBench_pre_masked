
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {int flags; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int (* slot_disable_log_dirty ) (struct kvm*,struct kvm_memory_slot*) ;int (* slot_enable_log_dirty ) (struct kvm*,struct kvm_memory_slot*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,struct kvm_memory_slot*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct kvm*,struct kvm_memory_slot*) ;
 int FUNC_2 (struct kvm*,struct kvm_memory_slot*) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_3,
         struct kvm_memory_slot *VAR_4)
{

 if (VAR_4->flags & VAR_1) {
  FUNC_0(VAR_3, VAR_4);
  return;
 }
 if (VAR_4->flags & VAR_0) {
  if (VAR_2->slot_enable_log_dirty)
   VAR_2->slot_enable_log_dirty(VAR_3, VAR_4);
  else
   FUNC_0(VAR_3, VAR_4);
 } else {
  if (VAR_2->slot_disable_log_dirty)
   VAR_2->slot_disable_log_dirty(VAR_3, VAR_4);
 }
}
