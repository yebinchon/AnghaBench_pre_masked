
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct msm_gem_vma {int iova; int mapped; TYPE_1__ node; } ;
struct msm_gem_address_space {int kref; int lock; int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct msm_gem_address_space *VAR_2,
  struct msm_gem_vma *VAR_3, int VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_3->iova))
  return -VAR_0;

 FUNC_3(&VAR_2->lock);
 VAR_5 = FUNC_1(&VAR_2->mm, &VAR_3->node, VAR_4);
 FUNC_4(&VAR_2->lock);

 if (VAR_5)
  return VAR_5;

 VAR_3->iova = VAR_3->node.start << VAR_1;
 VAR_3->mapped = 0;

 FUNC_2(&VAR_2->kref);

 return 0;
}
