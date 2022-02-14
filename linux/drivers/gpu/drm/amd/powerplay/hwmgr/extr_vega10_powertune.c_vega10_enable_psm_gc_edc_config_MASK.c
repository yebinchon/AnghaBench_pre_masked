
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_3__ {int max_shader_engines; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {int grbm_idx_mutex; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_16 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pp_hwmgr*,int) ;
 int FUNC_7 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_8 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_9(struct pp_hwmgr *VAR_17)
{
 struct amdgpu_device *VAR_18 = VAR_17->adev;
 int VAR_19 = 0;
 uint32_t VAR_20 = 0;
 uint32_t VAR_21, VAR_22;

 VAR_20 = VAR_18->gfx.config.max_shader_engines;

 FUNC_2(VAR_18);

 FUNC_8(VAR_17, VAR_1);

 FUNC_4(&VAR_18->grbm_idx_mutex);
 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  VAR_22 = VAR_3 | VAR_5 | ( VAR_21 << VAR_4);
  FUNC_1(VAR_2, 0, VAR_16, VAR_22);
  VAR_19 = FUNC_7(VAR_17, VAR_14, VAR_15);
  VAR_19 |= FUNC_7(VAR_17, VAR_13, VAR_15);
  VAR_19 |= FUNC_7(VAR_17, VAR_12, VAR_15);
  VAR_19 |= FUNC_7(VAR_17, VAR_11, VAR_15);

  if (0 != VAR_19)
   break;
 }
 FUNC_1(VAR_2, 0, VAR_16, 0xE0000000);
 FUNC_5(&VAR_18->grbm_idx_mutex);

 FUNC_6(VAR_17, 1);

 FUNC_3(VAR_18);

 FUNC_8(VAR_17, VAR_10);

 if (FUNC_0(VAR_6)) {
  FUNC_8(VAR_17, VAR_9);
  FUNC_8(VAR_17, VAR_8);
 }

 if (FUNC_0(VAR_7))
  FUNC_8(VAR_17, VAR_0);

 return 0;
}
