
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clear_state_gpu_addr; int clear_state_size; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_3)
{

 FUNC_0(VAR_0,
   VAR_3->gfx.rlc.clear_state_gpu_addr >> 32);
 FUNC_0(VAR_1,
   VAR_3->gfx.rlc.clear_state_gpu_addr & 0xfffffffc);
 FUNC_0(VAR_2,
   VAR_3->gfx.rlc.clear_state_size);
}
