
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_8__ {TYPE_2__ mclk_table; } ;
struct smu7_hwmgr {TYPE_3__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_9__ {int * data; } ;
struct TYPE_6__ {int value; } ;
typedef TYPE_4__ SMU72_Discrete_MCRegisters ;


 int FUNC_0 (struct pp_hwmgr*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
  SMU72_Discrete_MCRegisters *VAR_1)
{
 int VAR_2 = 0;
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_0->backend);
 int VAR_4;
 uint32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->dpm_table.mclk_table.count; VAR_5++) {
  VAR_4 = FUNC_0(
    VAR_0,
    VAR_3->dpm_table.mclk_table.dpm_levels[VAR_5].value,
    &VAR_1->data[VAR_5]
    );

  if (0 != VAR_4)
   VAR_2 = VAR_4;
 }

 return VAR_2;
}
