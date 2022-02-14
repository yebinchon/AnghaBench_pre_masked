
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trinity_ps {int DpmXNbPsHi; int DpmXNbPsLo; int Dpm0PgNbPsHi; int Dpm0PgNbPsLo; } ;
struct TYPE_2__ {scalar_t__ nb_dpm_enable; } ;
struct trinity_power_info {TYPE_1__ sys_info; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 struct trinity_power_info* FUNC_6 (struct radeon_device*) ;
 struct trinity_ps* FUNC_7 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_5,
      struct radeon_ps *VAR_6)
{
 struct trinity_power_info *VAR_7 = FUNC_6(VAR_5);
 struct trinity_ps *VAR_8 = FUNC_7(VAR_6);
 u32 VAR_9;

 if (VAR_7->sys_info.nb_dpm_enable) {
  VAR_9 = FUNC_4(VAR_4);
  VAR_9 &= ~(VAR_1 | VAR_0 | VAR_3 | VAR_2);
  VAR_9 |= (FUNC_1(VAR_8->Dpm0PgNbPsLo) |
          FUNC_0(VAR_8->Dpm0PgNbPsHi) |
          FUNC_3(VAR_8->DpmXNbPsLo) |
          FUNC_2(VAR_8->DpmXNbPsHi));
  FUNC_5(VAR_4, VAR_9);
 }
}
