
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ FanTargetTemperature; } ;
struct TYPE_3__ {TYPE_2__ pp_table; } ;
struct vega20_hwmgr {TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef TYPE_2__ PPTable_t ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 int VAR_2;
 struct vega20_hwmgr *VAR_3 = (struct vega20_hwmgr *)(VAR_1->backend);
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);

 VAR_2 = FUNC_0(VAR_1,
    VAR_0,
    (uint32_t)VAR_4->FanTargetTemperature);

 return VAR_2;
}
