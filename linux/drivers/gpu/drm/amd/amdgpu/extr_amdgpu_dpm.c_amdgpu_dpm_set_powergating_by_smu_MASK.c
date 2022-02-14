
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
struct TYPE_3__ {int (* set_powergating_by_smu ) (int ,int,int) ;} ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;

int FUNC_4(struct amdgpu_device *VAR_0, uint32_t VAR_1, bool VAR_2)
{
 int VAR_3 = 0;
 bool VAR_4 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 133:
 case 130:
 case 128:
 case 129:
 case 131:
  if (VAR_4)
   VAR_3 = FUNC_1(&VAR_0->smu, VAR_1, VAR_2);
  else
   VAR_3 = ((VAR_0)->powerplay.pp_funcs->set_powergating_by_smu(
    (VAR_0)->powerplay.pp_handle, VAR_1, VAR_2));
  break;
 case 132:
 case 134:
  VAR_3 = ((VAR_0)->powerplay.pp_funcs->set_powergating_by_smu(
    (VAR_0)->powerplay.pp_handle, VAR_1, VAR_2));
  break;
 default:
  break;
 }

 return VAR_3;
}
