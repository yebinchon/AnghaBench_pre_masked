
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int tdp_limit; int near_tdp_limit_adjusted; scalar_t__ tdp_od_limit; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct amdgpu_device *VAR_1,
         bool VAR_2,
         u32 VAR_3,
         u32 *VAR_4,
         u32 *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_3 > (u32)VAR_1->pm.dpm.tdp_od_limit)
  return -VAR_0;

 VAR_7 = ((100 + 100) * VAR_1->pm.dpm.tdp_limit) / 100;

 if (VAR_2) {
  *VAR_4 = ((100 + VAR_3) * VAR_1->pm.dpm.tdp_limit) / 100;
  *VAR_5 = VAR_1->pm.dpm.near_tdp_limit_adjusted + (*VAR_4 - VAR_1->pm.dpm.tdp_limit);
 } else {
  *VAR_4 = ((100 - VAR_3) * VAR_1->pm.dpm.tdp_limit) / 100;
  VAR_6 = VAR_1->pm.dpm.tdp_limit - *VAR_4;
  if (VAR_6 < VAR_1->pm.dpm.near_tdp_limit_adjusted)
   *VAR_5 = VAR_1->pm.dpm.near_tdp_limit_adjusted - VAR_6;
  else
   *VAR_5 = 0;
 }

 if ((*VAR_4 <= 0) || (*VAR_4 > VAR_7))
  return -VAR_0;
 if ((*VAR_5 <= 0) || (*VAR_5 > *VAR_4))
  return -VAR_0;

 return 0;
}
