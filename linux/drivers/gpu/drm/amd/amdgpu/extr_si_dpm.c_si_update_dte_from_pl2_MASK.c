
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct si_dte_data {int k; int max_t; int t0; int tdep_count; int* r; int* tdep_r; } ;
struct TYPE_3__ {int tdp_limit; int near_tdp_limit; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1,
       struct si_dte_data *VAR_2)
{
 u32 VAR_3 = VAR_1->pm.dpm.tdp_limit;
 u32 VAR_4 = VAR_1->pm.dpm.near_tdp_limit;
 u32 VAR_5 = VAR_2->k;
 u32 VAR_6 = VAR_2->max_t;
 u32 VAR_7[5] = { 10, 15, 20, 25, 30 };
 u32 VAR_8 = VAR_2->t0;
 u32 VAR_9;

 if (VAR_4 != 0 && VAR_4 <= VAR_3) {
  VAR_2->tdep_count = 3;

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
   VAR_2->r[VAR_9] =
    (VAR_7[VAR_9] * (VAR_6 - VAR_8/(u32)1000) * (1 << 14)) /
    (VAR_4 * (u32)100);
  }

  VAR_2->tdep_r[1] = VAR_2->r[4] * 2;

  for (VAR_9 = 2; VAR_9 < VAR_0; VAR_9++) {
   VAR_2->tdep_r[VAR_9] = VAR_2->r[4];
  }
 } else {
  FUNC_0("Invalid PL2! DTE will not be updated.\n");
 }
}
