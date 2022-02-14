
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;
struct TYPE_3__ {scalar_t__ set_powergating_by_smu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2,
         enum amd_powergating_state VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_2;
 bool VAR_5 = VAR_3 == VAR_1 ? 1 : 0;

 if (VAR_4->powerplay.pp_funcs &&
  VAR_4->powerplay.pp_funcs->set_powergating_by_smu)
  FUNC_0(VAR_4, VAR_0, VAR_5);

 return 0;
}
