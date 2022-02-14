
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** gfn_track; } ;
struct kvm_memory_slot {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct kvm_memory_slot *VAR_1,
     struct kvm_memory_slot *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!VAR_2 || VAR_1->arch.gfn_track[VAR_3] !=
        VAR_2->arch.gfn_track[VAR_3]) {
   FUNC_0(VAR_1->arch.gfn_track[VAR_3]);
   VAR_1->arch.gfn_track[VAR_3] = ((void*)0);
  }
}
