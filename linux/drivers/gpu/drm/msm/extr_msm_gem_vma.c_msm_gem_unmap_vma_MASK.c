
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_vma {int inuse; int iova; } ;
struct msm_gem_address_space {int dummy; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct msm_gem_address_space *VAR_0,
  struct msm_gem_vma *VAR_1)
{
 if (!FUNC_0(!VAR_1->iova))
  VAR_1->inuse--;
}
