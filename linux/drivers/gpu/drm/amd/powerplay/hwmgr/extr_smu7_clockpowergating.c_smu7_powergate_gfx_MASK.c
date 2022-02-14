
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_3__ {int number; } ;
struct TYPE_4__ {TYPE_1__ cu_info; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_2, bool VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->adev;

 if (VAR_3)
  return FUNC_1(VAR_2,
     VAR_1,
     VAR_4->gfx.cu_info.number);
 else
  return FUNC_0(VAR_2,
    VAR_0);
}
