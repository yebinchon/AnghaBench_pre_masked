
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** lpage_info; int ** rmap; } ;
struct kvm_memory_slot {TYPE_1__ arch; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_memory_slot*,struct kvm_memory_slot*) ;

void FUNC_2(struct kvm *VAR_1, struct kvm_memory_slot *VAR_2,
      struct kvm_memory_slot *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (!VAR_3 || VAR_2->arch.rmap[VAR_4] != VAR_3->arch.rmap[VAR_4]) {
   FUNC_0(VAR_2->arch.rmap[VAR_4]);
   VAR_2->arch.rmap[VAR_4] = ((void*)0);
  }
  if (VAR_4 == 0)
   continue;

  if (!VAR_3 || VAR_2->arch.lpage_info[VAR_4 - 1] !=
        VAR_3->arch.lpage_info[VAR_4 - 1]) {
   FUNC_0(VAR_2->arch.lpage_info[VAR_4 - 1]);
   VAR_2->arch.lpage_info[VAR_4 - 1] = ((void*)0);
  }
 }

 FUNC_1(VAR_2, VAR_3);
}
