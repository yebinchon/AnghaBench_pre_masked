
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ao_cu_mask; } ;
struct TYPE_6__ {int cp_table_gpu_addr; } ;
struct TYPE_5__ {TYPE_1__ cu_info; TYPE_3__ rlc; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ gfx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_7)
{
 if ((VAR_7->asic_type == VAR_0) ||
     (VAR_7->asic_type == VAR_3)) {
  FUNC_2(VAR_7);
  FUNC_4(VAR_7);
  FUNC_1(VAR_7);
  FUNC_0(VAR_5, VAR_7->gfx.rlc.cp_table_gpu_addr >> 8);
  FUNC_3(VAR_7);
  FUNC_0(VAR_6, VAR_7->gfx.cu_info.ao_cu_mask);
 } else if ((VAR_7->asic_type == VAR_1) ||
     (VAR_7->asic_type == VAR_2) ||
     (VAR_7->asic_type == VAR_4)) {
  FUNC_2(VAR_7);
  FUNC_4(VAR_7);
  FUNC_1(VAR_7);
  FUNC_3(VAR_7);
 }

}
