
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kv_ps {int dpm0_pg_nb_ps_lo; int dpm0_pg_nb_ps_hi; int dpmx_nb_ps_lo; int dpmx_nb_ps_hi; } ;
struct TYPE_2__ {scalar_t__ nb_dpm_enable; } ;
struct kv_power_info {TYPE_1__ sys_info; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_10 ;
 struct kv_power_info* FUNC_2 (struct amdgpu_device*) ;
 struct kv_ps* FUNC_3 (struct amdgpu_ps*) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_11,
        struct amdgpu_ps *VAR_12)
{
 struct kv_ps *VAR_13 = FUNC_3(VAR_12);
 struct kv_power_info *VAR_14 = FUNC_2(VAR_11);
 u32 VAR_15;

 if (VAR_11->asic_type == VAR_0 || VAR_11->asic_type == VAR_1)
  return;

 if (VAR_14->sys_info.nb_dpm_enable) {
  VAR_15 = FUNC_0(VAR_10);
  VAR_15 &= ~(VAR_4 |
    VAR_2 |
    VAR_8 |
    VAR_6);
  VAR_15 |= (VAR_13->dpm0_pg_nb_ps_lo << VAR_5) |
    (VAR_13->dpm0_pg_nb_ps_hi << VAR_3) |
    (VAR_13->dpmx_nb_ps_lo << VAR_9) |
    (VAR_13->dpmx_nb_ps_hi << VAR_7);
  FUNC_1(VAR_10, VAR_15);
 }
}
