
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
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11;

 FUNC_3(&VAR_7->grbm_idx_mutex);
 for (VAR_8 = 0; VAR_8 < VAR_7->gfx.config.max_shader_engines; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_7->gfx.config.max_sh_per_se; VAR_9++) {
   FUNC_2(VAR_7, VAR_8, VAR_9, 0xffffffff);
   for (VAR_10 = 0; VAR_10 < VAR_7->usec_timeout; VAR_10++) {
    if (FUNC_1(VAR_0, 0, VAR_5) == 0)
     break;
    FUNC_5(1);
   }
   if (VAR_10 == VAR_7->usec_timeout) {
    FUNC_2(VAR_7, 0xffffffff,
            0xffffffff, 0xffffffff);
    FUNC_4(&VAR_7->grbm_idx_mutex);
    FUNC_0("Timeout wait for RLC serdes %u,%u\n",
      VAR_8, VAR_9);
    return;
   }
  }
 }
 FUNC_2(VAR_7, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_4(&VAR_7->grbm_idx_mutex);

 VAR_11 = VAR_2 |
  VAR_1 |
  VAR_3 |
  VAR_4;
 for (VAR_10 = 0; VAR_10 < VAR_7->usec_timeout; VAR_10++) {
  if ((FUNC_1(VAR_0, 0, VAR_6) & VAR_11) == 0)
   break;
  FUNC_5(1);
 }
}
