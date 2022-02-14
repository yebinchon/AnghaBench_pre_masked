
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {unsigned int free_mask; int num_reg; scalar_t__ reg_base; } ;
struct TYPE_3__ {TYPE_2__ scratch; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;

int FUNC_1(struct amdgpu_device *VAR_1, uint32_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->gfx.scratch.free_mask);
 if (VAR_3 != 0 && VAR_3 <= VAR_1->gfx.scratch.num_reg) {
  VAR_3--;
  VAR_1->gfx.scratch.free_mask &= ~(1u << VAR_3);
  *VAR_2 = VAR_1->gfx.scratch.reg_base + VAR_3;
  return 0;
 }
 return -VAR_0;
}
