
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int save_restore_gpu_addr; int clear_state_gpu_addr; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {int pg_flags; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(struct amdgpu_device *VAR_8)
{
 if (VAR_8->pg_flags & (VAR_3 |
         VAR_4 |
         VAR_2 |
         VAR_0 |
         VAR_1 |
         VAR_5)) {
  FUNC_4(VAR_8, 1);
  FUNC_3(VAR_8, 1);
  if (VAR_8->pg_flags & VAR_3) {
   FUNC_6(VAR_8);
   FUNC_1(VAR_8, 1);
   FUNC_2(VAR_8, 1);
  } else {
   FUNC_0(VAR_7, VAR_8->gfx.rlc.save_restore_gpu_addr >> 8);
   FUNC_0(VAR_6, VAR_8->gfx.rlc.clear_state_gpu_addr >> 8);

  }
  FUNC_5(VAR_8);
  FUNC_7(VAR_8, 1);
 } else {

  FUNC_0(VAR_7, VAR_8->gfx.rlc.save_restore_gpu_addr >> 8);
  FUNC_0(VAR_6, VAR_8->gfx.rlc.clear_state_gpu_addr >> 8);
 }
}
