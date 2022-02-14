
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mmu {int dummy; } ;
struct msm_gpummu {struct msm_mmu base; struct msm_gpu* gpu; int table; int pt_base; } ;
struct msm_gpu {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msm_mmu* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,scalar_t__,int *,int,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct msm_gpummu*) ;
 struct msm_gpummu* FUNC_3 (int,int) ;
 int FUNC_4 (struct msm_mmu*,struct device*,int *) ;

struct msm_mmu *FUNC_5(struct device *VAR_6, struct msm_gpu *VAR_7)
{
 struct msm_gpummu *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_8->table = FUNC_1(VAR_6, VAR_3 + 32, &VAR_8->pt_base,
  VAR_2 | VAR_4, VAR_0);
 if (!VAR_8->table) {
  FUNC_2(VAR_8);
  return FUNC_0(-VAR_1);
 }

 VAR_8->gpu = VAR_7;
 FUNC_4(&VAR_8->base, VAR_6, &VAR_5);

 return &VAR_8->base;
}
