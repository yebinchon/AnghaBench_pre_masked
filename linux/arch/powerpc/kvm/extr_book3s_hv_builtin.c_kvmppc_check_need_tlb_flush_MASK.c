
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_nested_guest {int need_tlb_flush; } ;
struct TYPE_2__ {int need_tlb_flush; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int cpumask_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int,int *) ;
 int FUNC_4 (struct kvm*) ;

void FUNC_5(struct kvm *VAR_1, int VAR_2,
     struct kvm_nested_guest *VAR_3)
{
 cpumask_t *VAR_4;







 if (FUNC_1(VAR_0))
  VAR_2 = FUNC_0(VAR_2);

 if (VAR_3)
  VAR_4 = &VAR_3->need_tlb_flush;
 else
  VAR_4 = &VAR_1->arch.need_tlb_flush;

 if (FUNC_3(VAR_2, VAR_4)) {
  FUNC_4(VAR_1);


  FUNC_2(VAR_2, VAR_4);
 }
}
