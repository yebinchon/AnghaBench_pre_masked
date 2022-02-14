
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pp_feature; } ;
struct amdgpu_device {int asic_type; TYPE_1__ pm; } ;



 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 switch (VAR_1->asic_type) {
 case 128:
  VAR_1->pm.pp_feature &= ~VAR_0;
  break;
 default:
  break;
 }
}
