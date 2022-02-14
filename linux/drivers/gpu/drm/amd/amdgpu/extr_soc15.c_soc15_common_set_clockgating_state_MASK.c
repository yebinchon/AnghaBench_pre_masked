
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_device {int asic_type; TYPE_2__* nbio_funcs; TYPE_1__* df_funcs; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;
struct TYPE_4__ {int (* update_medium_grain_light_sleep ) (struct amdgpu_device*,int) ;int (* update_medium_grain_clock_gating ) (struct amdgpu_device*,int) ;} ;
struct TYPE_3__ {int (* update_medium_grain_clock_gating ) (struct amdgpu_device*,int) ;} ;


 int VAR_0 ;






 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_1,
         enum amd_clockgating_state VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 if (FUNC_0(VAR_3))
  return 0;

 switch (VAR_3->asic_type) {
 case 130:
 case 129:
 case 128:
  VAR_3->nbio_funcs->update_medium_grain_clock_gating(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  VAR_3->nbio_funcs->update_medium_grain_light_sleep(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_3(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_1(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_2(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_4(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  VAR_3->df_funcs->update_medium_grain_clock_gating(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  break;
 case 132:
 case 131:
  VAR_3->nbio_funcs->update_medium_grain_clock_gating(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  VAR_3->nbio_funcs->update_medium_grain_light_sleep(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_3(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_1(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_2(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_4(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  break;
 case 133:
  FUNC_3(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  break;
 default:
  break;
 }
 return 0;
}
