
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv7xx_pl {int mclk; int sclk; } ;
struct TYPE_4__ {int mclk_sclk_ratio; scalar_t__ sclk_mclk_delta; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct amdgpu_clock_and_voltage_limits {int mclk; int sclk; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*,int ,scalar_t__) ;
 int FUNC_1 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
       const struct amdgpu_clock_and_voltage_limits *VAR_1,
       struct rv7xx_pl *VAR_2)
{

 if ((VAR_2->mclk == 0) || (VAR_2->sclk == 0))
  return;

 if (VAR_2->mclk == VAR_2->sclk)
  return;

 if (VAR_2->mclk > VAR_2->sclk) {
  if (((VAR_2->mclk + (VAR_2->sclk - 1)) / VAR_2->sclk) > VAR_0->pm.dpm.dyn_state.mclk_sclk_ratio)
   VAR_2->sclk = FUNC_1(VAR_0,
            VAR_1->sclk,
            (VAR_2->mclk +
            (VAR_0->pm.dpm.dyn_state.mclk_sclk_ratio - 1)) /
            VAR_0->pm.dpm.dyn_state.mclk_sclk_ratio);
 } else {
  if ((VAR_2->sclk - VAR_2->mclk) > VAR_0->pm.dpm.dyn_state.sclk_mclk_delta)
   VAR_2->mclk = FUNC_0(VAR_0,
            VAR_1->mclk,
            VAR_2->sclk -
            VAR_0->pm.dpm.dyn_state.sclk_mclk_delta);
 }
}
