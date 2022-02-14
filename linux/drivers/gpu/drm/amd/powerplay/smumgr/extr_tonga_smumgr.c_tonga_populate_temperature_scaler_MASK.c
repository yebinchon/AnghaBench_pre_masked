
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* LPMLTemperatureScaler; } ;
struct tonga_smumgr {TYPE_1__ power_tune_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 int VAR_1;
 struct tonga_smumgr *VAR_2 =
    (struct tonga_smumgr *)(VAR_0->smu_backend);


 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  VAR_2->power_tune_table.LPMLTemperatureScaler[VAR_1] = 0;

 return 0;
}
