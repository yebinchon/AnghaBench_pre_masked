
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; } ;
struct TYPE_3__ {int (* asic_reset_mode_2 ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_1)
{
 if (!VAR_1->powerplay.pp_funcs ||
     !VAR_1->powerplay.pp_funcs->asic_reset_mode_2)
  return -VAR_0;

 return VAR_1->powerplay.pp_funcs->asic_reset_mode_2(VAR_1->powerplay.pp_handle);
}
