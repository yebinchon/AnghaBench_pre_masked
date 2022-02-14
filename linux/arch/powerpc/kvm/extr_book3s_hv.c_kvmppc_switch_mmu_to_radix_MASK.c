
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int radix; int hpt; } ;
struct kvm {TYPE_1__ arch; int mmu_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct kvm *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;
 FUNC_2(VAR_4);

 FUNC_4(&VAR_4->mmu_lock);
 VAR_4->arch.radix = 1;
 FUNC_5(&VAR_4->mmu_lock);
 FUNC_0(&VAR_4->arch.hpt);
 FUNC_3(VAR_4, VAR_2 | VAR_0 | VAR_1,
      VAR_3 | VAR_2 | VAR_0 | VAR_1);
 return 0;
}
