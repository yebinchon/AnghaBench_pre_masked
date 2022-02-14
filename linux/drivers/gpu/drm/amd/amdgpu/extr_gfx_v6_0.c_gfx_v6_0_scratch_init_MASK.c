
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_reg; unsigned int free_mask; int reg_base; } ;
struct TYPE_4__ {TYPE_1__ scratch; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 VAR_1->gfx.scratch.num_reg = 8;
 VAR_1->gfx.scratch.reg_base = VAR_0;
 VAR_1->gfx.scratch.free_mask = (1u << VAR_1->gfx.scratch.num_reg) - 1;
}
