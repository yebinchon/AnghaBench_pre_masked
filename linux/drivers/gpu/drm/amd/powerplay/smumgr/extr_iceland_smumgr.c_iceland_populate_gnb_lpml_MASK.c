
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {scalar_t__ smu_backend; } ;
struct TYPE_2__ {scalar_t__* GnbLPML; } ;
struct iceland_smumgr {TYPE_1__ power_tune_table; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 int VAR_1;
 struct iceland_smumgr *VAR_2 = (struct iceland_smumgr *)(VAR_0->smu_backend);


 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  VAR_2->power_tune_table.GnbLPML[VAR_1] = 0;

 return 0;
}
