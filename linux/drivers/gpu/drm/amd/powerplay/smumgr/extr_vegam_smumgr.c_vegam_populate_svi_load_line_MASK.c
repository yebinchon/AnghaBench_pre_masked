
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SviLoadLineTrimVddC; scalar_t__ SviLoadLineOffsetVddC; int SviLoadLineVddC; int SviLoadLineEn; } ;
struct vegam_smumgr {TYPE_1__ power_tune_table; struct vegam_pt_defaults* power_tune_defaults; } ;
struct vegam_pt_defaults {int SviLoadLineVddC; int SviLoadLineEn; } ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct vegam_smumgr *VAR_1 = (struct vegam_smumgr *)(VAR_0->smu_backend);
 const struct vegam_pt_defaults *VAR_2 = VAR_1->power_tune_defaults;

 VAR_1->power_tune_table.SviLoadLineEn = VAR_2->SviLoadLineEn;
 VAR_1->power_tune_table.SviLoadLineVddC = VAR_2->SviLoadLineVddC;
 VAR_1->power_tune_table.SviLoadLineTrimVddC = 3;
 VAR_1->power_tune_table.SviLoadLineOffsetVddC = 0;

 return 0;
}
