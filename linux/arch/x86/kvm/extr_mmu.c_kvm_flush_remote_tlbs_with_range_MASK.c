
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_tlb_range {int dummy; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int (* tlb_remote_flush_with_range ) (struct kvm*,struct kvm_tlb_range*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct kvm*,struct kvm_tlb_range*) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_2,
  struct kvm_tlb_range *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (VAR_3 && VAR_1->tlb_remote_flush_with_range)
  VAR_4 = VAR_1->tlb_remote_flush_with_range(VAR_2, VAR_3);

 if (VAR_4)
  FUNC_0(VAR_2);
}
