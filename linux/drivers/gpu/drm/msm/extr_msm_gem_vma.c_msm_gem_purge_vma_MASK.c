
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; } ;
struct msm_gem_vma {scalar_t__ inuse; int mapped; int iova; TYPE_1__ node; } ;
struct msm_gem_address_space {TYPE_3__* mmu; } ;
struct TYPE_6__ {TYPE_2__* funcs; } ;
struct TYPE_5__ {int (* unmap ) (TYPE_3__*,int ,unsigned int) ;} ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,unsigned int) ;

void FUNC_2(struct msm_gem_address_space *VAR_1,
  struct msm_gem_vma *VAR_2)
{
 unsigned VAR_3 = VAR_2->node.size << VAR_0;


 if (FUNC_0(VAR_2->inuse > 0))
  return;


 if (!VAR_2->mapped)
  return;

 if (VAR_1->mmu)
  VAR_1->mmu->funcs->unmap(VAR_1->mmu, VAR_2->iova, VAR_3);

 VAR_2->mapped = 0;
}
