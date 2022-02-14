
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int direct; } ;
struct kvm_mmu_page {scalar_t__ gfns; TYPE_1__ role; scalar_t__ spt; int link; int hash_link; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,struct kvm_mmu_page*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct kvm_mmu_page *VAR_1)
{
 FUNC_0(!FUNC_3(VAR_1->spt));
 FUNC_2(&VAR_1->hash_link);
 FUNC_5(&VAR_1->link);
 FUNC_1((unsigned long)VAR_1->spt);
 if (!VAR_1->role.direct)
  FUNC_1((unsigned long)VAR_1->gfns);
 FUNC_4(VAR_0, VAR_1);
}
