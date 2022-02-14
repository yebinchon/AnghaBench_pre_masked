
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int FanMaximumRpm; } ;
struct TYPE_3__ {TYPE_2__ pp_table; } ;
struct vega20_hwmgr {TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef TYPE_2__ PPTable_t ;


 int FUNC_0 (struct pp_hwmgr*,int*) ;

int FUNC_1(struct pp_hwmgr *VAR_0,
  uint32_t *VAR_1)
{
 struct vega20_hwmgr *VAR_2 = (struct vega20_hwmgr *)(VAR_0->backend);
 PPTable_t *VAR_3 = &(VAR_2->smc_state_table.pp_table);
 uint32_t VAR_4, VAR_5 = 0;
 int VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = VAR_4 * 100 / VAR_3->FanMaximumRpm;

 *VAR_1 = VAR_5 > 100 ? 100 : VAR_5;

 return 0;
}
