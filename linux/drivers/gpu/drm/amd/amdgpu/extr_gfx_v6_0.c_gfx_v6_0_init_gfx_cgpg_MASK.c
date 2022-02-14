
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int save_restore_gpu_addr; int clear_state_gpu_addr; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_8)
{
 u32 VAR_9;

 FUNC_1(VAR_7, VAR_8->gfx.rlc.save_restore_gpu_addr >> 8);
 FUNC_2(VAR_4, VAR_0, 1);
 FUNC_1(VAR_6, VAR_8->gfx.rlc.clear_state_gpu_addr >> 8);

 VAR_9 = FUNC_0(VAR_5);
 VAR_9 &= ~VAR_1;
 VAR_9 |= (0x700 << VAR_2);
 VAR_9 &= ~VAR_3;
 FUNC_1(VAR_5, VAR_9);
}
