
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_6,
             bool VAR_7)
{
 if (((VAR_6->asic_type == VAR_1) ||
     (VAR_6->asic_type == VAR_2) ||
     (VAR_6->asic_type == VAR_3)) &&
     VAR_6->powerplay.pp_funcs->set_powergating_by_smu)

  FUNC_1(VAR_6, VAR_0, VAR_7);

 FUNC_0(VAR_4, VAR_5, VAR_7 ? 1 : 0);
}
