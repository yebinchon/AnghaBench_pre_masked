
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
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pp_hwmgr*,int) ;
 int FUNC_6 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_12)
{
 struct amdgpu_device *VAR_13 = VAR_12->adev;
 int VAR_14;
 uint32_t VAR_15 = 0, VAR_16, VAR_17;

 VAR_15 = VAR_13->gfx.config.max_shader_engines;

 FUNC_1(VAR_13);

 FUNC_3(&VAR_13->grbm_idx_mutex);
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  VAR_17 = VAR_1 | VAR_3 | ( VAR_16 << VAR_2);
  FUNC_0(VAR_0, 0, VAR_11, VAR_17);
  VAR_14 = FUNC_6(VAR_12, VAR_4, VAR_10);
  VAR_14 |= FUNC_6(VAR_12, VAR_8, VAR_10);
  VAR_14 |= FUNC_6(VAR_12, VAR_7, VAR_10);
  VAR_14 |= FUNC_6(VAR_12, VAR_9, VAR_10);
  VAR_14 |= FUNC_6(VAR_12, VAR_6, VAR_10);
  VAR_14 |= FUNC_6(VAR_12, VAR_5, VAR_10);

  if (0 != VAR_14)
   break;
 }
 FUNC_0(VAR_0, 0, VAR_11, 0xE0000000);
 FUNC_4(&VAR_13->grbm_idx_mutex);

 FUNC_5(VAR_12, 1);

 FUNC_2(VAR_13);

 return 0;
}
