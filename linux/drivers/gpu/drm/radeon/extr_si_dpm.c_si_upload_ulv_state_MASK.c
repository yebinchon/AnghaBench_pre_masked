
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ vddc; } ;
struct si_ulv_param {TYPE_1__ pl; scalar_t__ supported; } ;
struct TYPE_4__ {int ULVState; } ;
struct si_power_info {int state_table_start; int sram_end; TYPE_2__ smc_statetable; struct si_ulv_param ulv; } ;
struct radeon_device {int dummy; } ;
typedef int SISLANDS_SMC_SWSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct radeon_device*,int,int *,int,int ) ;
 struct si_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_2)
{
 struct si_power_info *VAR_3 = FUNC_3(VAR_2);
 struct si_ulv_param *VAR_4 = &VAR_3->ulv;
 int VAR_5 = 0;

 if (VAR_4->supported && VAR_4->pl.vddc) {
  u32 VAR_6 = VAR_3->state_table_start +
   FUNC_1(VAR_0, VAR_1);
  SISLANDS_SMC_SWSTATE *VAR_7 = &VAR_3->smc_statetable.ULVState;
  u32 VAR_8 = sizeof(SISLANDS_SMC_SWSTATE);

  FUNC_0(VAR_7, 0, VAR_8);

  VAR_5 = FUNC_4(VAR_2, VAR_7);
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_2, VAR_6, (u8 *)VAR_7,
         VAR_8, VAR_3->sram_end);
 }

 return VAR_5;
}
