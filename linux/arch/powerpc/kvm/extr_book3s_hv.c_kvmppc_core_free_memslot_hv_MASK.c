
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rmap; } ;
struct kvm_memory_slot {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_memory_slot *VAR_0,
     struct kvm_memory_slot *VAR_1)
{
 if (!VAR_1 || VAR_0->arch.rmap != VAR_1->arch.rmap) {
  FUNC_0(VAR_0->arch.rmap);
  VAR_0->arch.rmap = ((void*)0);
 }
}
