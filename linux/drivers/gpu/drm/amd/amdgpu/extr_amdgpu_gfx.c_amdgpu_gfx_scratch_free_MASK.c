
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {unsigned int free_mask; unsigned int reg_base; } ;
struct TYPE_4__ {TYPE_1__ scratch; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;



void FUNC_0(struct amdgpu_device *VAR_0, uint32_t VAR_1)
{
 VAR_0->gfx.scratch.free_mask |= 1u << (VAR_1 - VAR_0->gfx.scratch.reg_base);
}
