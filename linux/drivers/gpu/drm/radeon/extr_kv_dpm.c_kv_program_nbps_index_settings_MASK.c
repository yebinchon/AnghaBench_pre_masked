
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ps {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;
struct kv_ps {int dpmx_nb_ps_hi; int dpmx_nb_ps_lo; int dpm0_pg_nb_ps_hi; int dpm0_pg_nb_ps_lo; } ;
struct TYPE_2__ {scalar_t__ nb_dpm_enable; } ;
struct kv_power_info {TYPE_1__ sys_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 struct kv_power_info* FUNC_6 (struct radeon_device*) ;
 struct kv_ps* FUNC_7 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_7,
        struct radeon_ps *VAR_8)
{
 struct kv_ps *VAR_9 = FUNC_7(VAR_8);
 struct kv_power_info *VAR_10 = FUNC_6(VAR_7);
 u32 VAR_11;

 if (VAR_7->family == VAR_0 || VAR_7->family == VAR_1)
  return;

 if (VAR_10->sys_info.nb_dpm_enable) {
  VAR_11 = FUNC_4(VAR_6);
  VAR_11 &= ~(VAR_3 | VAR_2 |
      VAR_5 | VAR_4);
  VAR_11 |= (FUNC_1(VAR_9->dpm0_pg_nb_ps_lo) |
     FUNC_0(VAR_9->dpm0_pg_nb_ps_hi) |
     FUNC_3(VAR_9->dpmx_nb_ps_lo) |
     FUNC_2(VAR_9->dpmx_nb_ps_hi));
  FUNC_5(VAR_6, VAR_11);
 }
}
