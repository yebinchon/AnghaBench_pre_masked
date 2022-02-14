
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {int dummy; } ;
struct TYPE_2__ {int lpid; int pgtable; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int * FUNC_0 (int ,unsigned long,int *,unsigned int*) ;
 int FUNC_1 (struct kvm*,int *,unsigned long,unsigned int,struct kvm_memory_slot*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct kvm *VAR_1, struct kvm_memory_slot *VAR_2,
      unsigned long VAR_3)
{
 pte_t *VAR_4;
 unsigned long VAR_5 = VAR_3 << VAR_0;
 unsigned int VAR_6;

 VAR_4 = FUNC_0(VAR_1->arch.pgtable, VAR_5, ((void*)0), &VAR_6);
 if (VAR_4 && FUNC_2(*VAR_4))
  FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6, VAR_2,
     VAR_1->arch.lpid);
 return 0;
}
