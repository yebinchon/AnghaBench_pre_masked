
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gfx_off_delay_work; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gfx; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_1,
       enum amd_powergating_state VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;
 bool VAR_4 = (VAR_2 == VAR_0) ? 1 : 0;
 switch (VAR_3->asic_type) {
 case 129:
 case 128:
  if (!VAR_4) {
   FUNC_0(VAR_3, 0);
   FUNC_1(&VAR_3->gfx.gfx_off_delay_work);
  } else
   FUNC_0(VAR_3, 1);
  break;
 default:
  break;
 }
 return 0;
}
