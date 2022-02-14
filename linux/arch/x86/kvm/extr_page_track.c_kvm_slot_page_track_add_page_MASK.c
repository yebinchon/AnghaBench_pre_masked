
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;
typedef enum kvm_page_track_mode { ____Placeholder_kvm_page_track_mode } kvm_page_track_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm_memory_slot*,int ) ;
 scalar_t__ FUNC_3 (struct kvm*,struct kvm_memory_slot*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct kvm_memory_slot*,int ,int,int) ;

void FUNC_6(struct kvm *VAR_1,
      struct kvm_memory_slot *VAR_2, gfn_t VAR_3,
      enum kvm_page_track_mode VAR_4)
{

 if (FUNC_0(!FUNC_4(VAR_4)))
  return;

 FUNC_5(VAR_2, VAR_3, VAR_4, 1);





 FUNC_2(VAR_2, VAR_3);

 if (VAR_4 == VAR_0)
  if (FUNC_3(VAR_1, VAR_2, VAR_3))
   FUNC_1(VAR_1);
}
