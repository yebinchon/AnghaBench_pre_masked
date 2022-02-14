
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_vma {scalar_t__ inuse; scalar_t__ iova; int node; scalar_t__ mapped; } ;
struct msm_gem_address_space {int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_gem_address_space*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct msm_gem_address_space *VAR_0,
  struct msm_gem_vma *VAR_1)
{
 if (FUNC_0(VAR_1->inuse > 0 || VAR_1->mapped))
  return;

 FUNC_3(&VAR_0->lock);
 if (VAR_1->iova)
  FUNC_1(&VAR_1->node);
 FUNC_4(&VAR_0->lock);

 VAR_1->iova = 0;

 FUNC_2(VAR_0);
}
