
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int pg_flags; TYPE_2__ powerplay; } ;
struct TYPE_3__ {scalar_t__ set_powergating_by_smu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;

void FUNC_2(struct amdgpu_device *VAR_2,
    bool VAR_3)
{
 if (FUNC_1(VAR_2))
  return;

 if (VAR_3 && VAR_2->pg_flags & VAR_1) {
  if (VAR_2->powerplay.pp_funcs && VAR_2->powerplay.pp_funcs->set_powergating_by_smu)
   FUNC_0(VAR_2, VAR_0, 1);

 }
}
