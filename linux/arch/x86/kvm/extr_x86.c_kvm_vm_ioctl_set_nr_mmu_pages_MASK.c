
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long n_requested_mmu_pages; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct kvm*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_2,
      unsigned long VAR_3)
{
 if (VAR_3 < VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_2->slots_lock);

 FUNC_0(VAR_2, VAR_3);
 VAR_2->arch.n_requested_mmu_pages = VAR_3;

 FUNC_2(&VAR_2->slots_lock);
 return 0;
}
