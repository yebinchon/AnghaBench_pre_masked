
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SviLoadLineTrimVddC; scalar_t__ SviLoadLineOffsetVddC; int SviLoadLineVddC; int SviLoadLineEn; } ;
struct tonga_smumgr {TYPE_1__ power_tune_table; struct tonga_pt_defaults* power_tune_defaults; } ;
struct tonga_pt_defaults {int svi_load_line_vddC; int svi_load_line_en; } ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct tonga_smumgr *VAR_1 =
    (struct tonga_smumgr *)(VAR_0->smu_backend);
 const struct tonga_pt_defaults *VAR_2 = VAR_1->power_tune_defaults;

 VAR_1->power_tune_table.SviLoadLineEn = VAR_2->svi_load_line_en;
 VAR_1->power_tune_table.SviLoadLineVddC = VAR_2->svi_load_line_vddC;
 VAR_1->power_tune_table.SviLoadLineTrimVddC = 3;
 VAR_1->power_tune_table.SviLoadLineOffsetVddC = 0;

 return 0;
}
