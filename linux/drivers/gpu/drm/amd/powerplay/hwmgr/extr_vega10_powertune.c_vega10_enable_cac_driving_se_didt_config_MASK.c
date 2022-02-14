
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_15 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pp_hwmgr*,int) ;
 int FUNC_6 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_16)
{
 struct amdgpu_device *VAR_17 = VAR_16->adev;
 int VAR_18;
 uint32_t VAR_19 = 0, VAR_20, VAR_21;

 VAR_19 = VAR_17->gfx.config.max_shader_engines;

 FUNC_1(VAR_17);

 FUNC_3(&VAR_17->grbm_idx_mutex);
 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_21 = VAR_1 | VAR_3 | ( VAR_20 << VAR_2);
  FUNC_0(VAR_0, 0, VAR_15, VAR_21);

  VAR_18 = FUNC_6(VAR_16, VAR_8, VAR_13);
  VAR_18 |= FUNC_6(VAR_16, VAR_9, VAR_13);
  VAR_18 |= FUNC_6(VAR_16, VAR_11, VAR_13);
  VAR_18 |= FUNC_6(VAR_16, VAR_5, VAR_13);
  VAR_18 |= FUNC_6(VAR_16, VAR_6, VAR_13);
  VAR_18 |= FUNC_6(VAR_16, VAR_7, VAR_13);
  VAR_18 |= FUNC_6(VAR_16, VAR_10, VAR_13);
  VAR_18 |= FUNC_6(VAR_16, VAR_12, VAR_14);
  VAR_18 |= FUNC_6(VAR_16, VAR_4, VAR_13);

  if (0 != VAR_18)
   break;
 }
 FUNC_0(VAR_0, 0, VAR_15, 0xE0000000);
 FUNC_4(&VAR_17->grbm_idx_mutex);

 FUNC_5(VAR_16, 1);

 FUNC_2(VAR_17);

 return 0;
}
