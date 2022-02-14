
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; int direct; } ;
struct kvm_mmu_page {TYPE_1__ role; scalar_t__ gfn; scalar_t__* gfns; } ;
typedef scalar_t__ gfn_t ;


 int VAR_0 ;

__attribute__((used)) static gfn_t FUNC_0(struct kvm_mmu_page *VAR_1, int VAR_2)
{
 if (!VAR_1->role.direct)
  return VAR_1->gfns[VAR_2];

 return VAR_1->gfn + (VAR_2 << ((VAR_1->role.level - 1) * VAR_0));
}
