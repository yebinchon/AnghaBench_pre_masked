
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct msm_gem_vma {int mapped; int iova; int inuse; } ;
struct msm_gem_address_space {TYPE_2__* mmu; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* map ) (TYPE_2__*,int ,struct sg_table*,unsigned int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,struct sg_table*,unsigned int,int) ;

int
FUNC_2(struct msm_gem_address_space *VAR_2,
  struct msm_gem_vma *VAR_3, int VAR_4,
  struct sg_table *VAR_5, int VAR_6)
{
 unsigned VAR_7 = VAR_6 << VAR_1;
 int VAR_8 = 0;

 if (FUNC_0(!VAR_3->iova))
  return -VAR_0;


 VAR_3->inuse++;

 if (VAR_3->mapped)
  return 0;

 VAR_3->mapped = 1;

 if (VAR_2 && VAR_2->mmu)
  VAR_8 = VAR_2->mmu->funcs->map(VAR_2->mmu, VAR_3->iova, VAR_5,
    VAR_7, VAR_4);

 if (VAR_8)
  VAR_3->mapped = 0;

 return VAR_8;
}
