
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
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_14 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pp_hwmgr*,int) ;
 int FUNC_7 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_8 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_9(struct pp_hwmgr *VAR_15)
{
 struct amdgpu_device *VAR_16 = VAR_15->adev;
 int VAR_17;
 uint32_t VAR_18 = 0, VAR_19, VAR_20;

 VAR_18 = VAR_16->gfx.config.max_shader_engines;

 FUNC_2(VAR_16);

 FUNC_4(&VAR_16->grbm_idx_mutex);
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_20 = VAR_4 | VAR_6 | ( VAR_19 << VAR_5);
  FUNC_1(VAR_1, 0, VAR_14, VAR_20);

  VAR_17 = FUNC_7(VAR_15, VAR_11, VAR_13);
  VAR_17 |= FUNC_7(VAR_15, VAR_12, VAR_13);
  VAR_17 |= FUNC_7(VAR_15, VAR_10, VAR_13);
  VAR_17 |= FUNC_7(VAR_15, VAR_9, VAR_13);
  if (0 != VAR_17)
   break;
 }
 FUNC_1(VAR_1, 0, VAR_14, 0xE0000000);
 FUNC_5(&VAR_16->grbm_idx_mutex);

 FUNC_6(VAR_15, 1);

 FUNC_3(VAR_16);

 FUNC_8(VAR_15, VAR_3);
 if (FUNC_0(VAR_7))
  FUNC_8(VAR_15, VAR_2);

 if (FUNC_0(VAR_8))
  FUNC_8(VAR_15, VAR_0);

 return 0;
}
