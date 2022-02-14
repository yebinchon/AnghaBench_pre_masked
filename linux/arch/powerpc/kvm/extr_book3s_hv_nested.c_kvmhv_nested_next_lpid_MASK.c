
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_nested_lpid; scalar_t__* nested_guests; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct kvm *VAR_0, int VAR_1)
{
 int VAR_2 = -1;

 FUNC_0(&VAR_0->mmu_lock);
 while (++VAR_1 <= VAR_0->arch.max_nested_lpid) {
  if (VAR_0->arch.nested_guests[VAR_1]) {
   VAR_2 = VAR_1;
   break;
  }
 }
 FUNC_1(&VAR_0->mmu_lock);
 return VAR_2;
}
