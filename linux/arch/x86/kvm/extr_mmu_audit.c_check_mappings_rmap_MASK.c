
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ level; } ;
struct kvm_mmu_page {int * spt; TYPE_1__ role; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_2, struct kvm_mmu_page *VAR_3)
{
 int VAR_4;

 if (VAR_3->role.level != VAR_1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (!FUNC_1(VAR_3->spt[VAR_4]))
   continue;

  FUNC_0(VAR_2, VAR_3->spt + VAR_4);
 }
}
