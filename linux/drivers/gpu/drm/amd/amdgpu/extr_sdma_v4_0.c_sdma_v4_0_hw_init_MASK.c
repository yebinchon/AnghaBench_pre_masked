
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ powerplay; } ;
struct TYPE_3__ {scalar_t__ set_powergating_by_smu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
 int VAR_4;
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;

 if ((VAR_5->asic_type == VAR_1 && VAR_5->powerplay.pp_funcs &&
   VAR_5->powerplay.pp_funcs->set_powergating_by_smu) ||
   VAR_5->asic_type == VAR_2)
  FUNC_0(VAR_5, VAR_0, 0);

 if (!FUNC_1(VAR_5))
  FUNC_2(VAR_5);

 VAR_4 = FUNC_3(VAR_5);

 return VAR_4;
}
