
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ max_shader_engines; scalar_t__ max_sh_per_se; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {scalar_t__ usec_timeout; int grbm_idx_mutex; TYPE_2__ gfx; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 FUNC_3(&VAR_6->grbm_idx_mutex);
 for (VAR_7 = 0; VAR_7 < VAR_6->gfx.config.max_shader_engines; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_6->gfx.config.max_sh_per_se; VAR_8++) {
   FUNC_2(VAR_6, VAR_7, VAR_8, 0xffffffff);
   for (VAR_9 = 0; VAR_9 < VAR_6->usec_timeout; VAR_9++) {
    if (FUNC_1(VAR_4) == 0)
     break;
    FUNC_5(1);
   }
   if (VAR_9 == VAR_6->usec_timeout) {
    FUNC_2(VAR_6, 0xffffffff,
            0xffffffff, 0xffffffff);
    FUNC_4(&VAR_6->grbm_idx_mutex);
    FUNC_0("Timeout wait for RLC serdes %u,%u\n",
      VAR_7, VAR_8);
    return;
   }
  }
 }
 FUNC_2(VAR_6, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_4(&VAR_6->grbm_idx_mutex);

 VAR_10 = VAR_1 |
  VAR_0 |
  VAR_2 |
  VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_6->usec_timeout; VAR_9++) {
  if ((FUNC_1(VAR_5) & VAR_10) == 0)
   break;
  FUNC_5(1);
 }
}
