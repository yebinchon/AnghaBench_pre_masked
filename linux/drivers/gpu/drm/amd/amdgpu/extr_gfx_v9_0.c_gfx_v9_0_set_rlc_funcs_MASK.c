
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funcs; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {int asic_type; TYPE_2__ gfx; } ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 switch (VAR_1->asic_type) {
 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
 case 131:
  VAR_1->gfx.rlc.funcs = &VAR_0;
  break;
 default:
  break;
 }
}
