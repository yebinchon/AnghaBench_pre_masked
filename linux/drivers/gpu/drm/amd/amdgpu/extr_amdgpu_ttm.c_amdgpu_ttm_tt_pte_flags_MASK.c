
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_tt {int dummy; } ;
struct ttm_mem_reg {int dummy; } ;
struct TYPE_2__ {int gart_pte_flags; } ;
struct amdgpu_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_tt*) ;
 int FUNC_1 (struct ttm_tt*,struct ttm_mem_reg*) ;

uint64_t FUNC_2(struct amdgpu_device *VAR_2, struct ttm_tt *VAR_3,
     struct ttm_mem_reg *VAR_4)
{
 uint64_t VAR_5 = FUNC_1(VAR_3, VAR_4);

 VAR_5 |= VAR_2->gart.gart_pte_flags;
 VAR_5 |= VAR_0;

 if (!FUNC_0(VAR_3))
  VAR_5 |= VAR_1;

 return VAR_5;
}
