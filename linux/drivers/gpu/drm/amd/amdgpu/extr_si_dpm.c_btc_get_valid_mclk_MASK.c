
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int valid_mclk_values; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct amdgpu_device *VAR_0,
         u32 VAR_1, u32 VAR_2)
{
 return FUNC_0(&VAR_0->pm.dpm.dyn_state.valid_mclk_values,
        VAR_1, VAR_2);
}
