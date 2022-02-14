
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cp_table_gpu_addr; scalar_t__ is_rlc_v2_1; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {int pg_flags; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_7)
{
 FUNC_2(VAR_7);





 if (VAR_7->gfx.rlc.is_rlc_v2_1) {
  FUNC_4(VAR_7);
  FUNC_1(VAR_7);
 }

 if (VAR_7->pg_flags & (VAR_3 |
         VAR_4 |
         VAR_2 |
         VAR_0 |
         VAR_1 |
         VAR_5)) {
  FUNC_0(VAR_6,
         VAR_7->gfx.rlc.cp_table_gpu_addr >> 8);
  FUNC_3(VAR_7);
 }
}
