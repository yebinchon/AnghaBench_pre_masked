
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ radix; scalar_t__ process_table; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*,int,int) ;
 scalar_t__ FUNC_4 (struct kvm*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct kvm *VAR_4)
{
 if (FUNC_4(VAR_4))
  FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 VAR_4->arch.process_table = 0;

 FUNC_5(&VAR_4->mmu_lock);
 VAR_4->arch.radix = 0;
 FUNC_6(&VAR_4->mmu_lock);
 FUNC_1(VAR_4);
 FUNC_3(VAR_4, VAR_3,
      VAR_3 | VAR_2 | VAR_0 | VAR_1);
 return 0;
}
