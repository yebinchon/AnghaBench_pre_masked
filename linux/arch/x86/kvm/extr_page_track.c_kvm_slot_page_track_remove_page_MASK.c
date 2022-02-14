
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;
typedef enum kvm_page_track_mode { ____Placeholder_kvm_page_track_mode } kvm_page_track_mode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_memory_slot*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct kvm_memory_slot*,int ,int,int) ;

void FUNC_4(struct kvm *VAR_0,
         struct kvm_memory_slot *VAR_1, gfn_t VAR_2,
         enum kvm_page_track_mode VAR_3)
{
 if (FUNC_0(!FUNC_2(VAR_3)))
  return;

 FUNC_3(VAR_1, VAR_2, VAR_3, -1);





 FUNC_1(VAR_1, VAR_2);
}
