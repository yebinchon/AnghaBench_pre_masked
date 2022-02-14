
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pp_funcs; } ;
struct TYPE_6__ {int num_instances; int ecc_irq; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ powerplay; TYPE_3__ sdma; } ;
struct TYPE_4__ {scalar_t__ set_powergating_by_smu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;
 int VAR_6;

 if (FUNC_2(VAR_5))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->sdma.num_instances; VAR_6++) {
  FUNC_1(VAR_5, &VAR_5->sdma.ecc_irq,
          VAR_0 + VAR_6);
 }

 FUNC_3(VAR_5, 0);
 FUNC_4(VAR_5, 0);

 if ((VAR_5->asic_type == VAR_2 && VAR_5->powerplay.pp_funcs
   && VAR_5->powerplay.pp_funcs->set_powergating_by_smu) ||
   VAR_5->asic_type == VAR_3)
  FUNC_0(VAR_5, VAR_1, 1);

 return 0;
}
