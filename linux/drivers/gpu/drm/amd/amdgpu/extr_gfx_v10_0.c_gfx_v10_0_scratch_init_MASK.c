
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
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_2)
{
 VAR_2->gfx.scratch.num_reg = 8;
 VAR_2->gfx.scratch.reg_base = FUNC_0(VAR_0, 0, VAR_1);
 VAR_2->gfx.scratch.free_mask = (1u << VAR_2->gfx.scratch.num_reg) - 1;
}
