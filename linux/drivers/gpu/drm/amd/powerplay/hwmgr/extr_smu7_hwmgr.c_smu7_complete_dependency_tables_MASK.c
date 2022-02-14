
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu7_hwmgr {scalar_t__ vdd_gfx_control; int vddc_leakage; int vddcgfx_leakage; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct TYPE_2__ {int vddc; int vddgfx; } ;
struct phm_ppt_v1_information {int vddc_lookup_table; int vddgfx_lookup_table; TYPE_1__ max_clock_voltage_on_dc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int *,int *) ;
 int FUNC_3 (struct pp_hwmgr*,int ,int *) ;
 int FUNC_4 (struct pp_hwmgr*,int *,int *) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct phm_ppt_v1_information *VAR_5 =
   (struct phm_ppt_v1_information *)(VAR_1->pptable);

 if (VAR_4->vdd_gfx_control == VAR_0) {
  VAR_3 = FUNC_3(VAR_1,
   VAR_5->vddgfx_lookup_table, &(VAR_4->vddcgfx_leakage));
  if (VAR_3 != 0)
   VAR_2 = VAR_3;

  FUNC_4(VAR_1,
   &VAR_5->max_clock_voltage_on_dc.vddgfx, &(VAR_4->vddcgfx_leakage));
 } else {

  VAR_3 = FUNC_3(VAR_1,
    VAR_5->vddc_lookup_table, &(VAR_4->vddc_leakage));
  if (VAR_3)
   VAR_2 = VAR_3;

  VAR_3 = FUNC_2(VAR_1,
    &(VAR_4->vddc_leakage), &VAR_5->max_clock_voltage_on_dc.vddc);
  if (VAR_3)
   VAR_2 = VAR_3;
 }

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  VAR_2 = VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  VAR_2 = VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  VAR_2 = VAR_3;

 VAR_3 = FUNC_6(VAR_1, VAR_5->vddgfx_lookup_table);
 if (VAR_3)
  VAR_2 = VAR_3;

 VAR_3 = FUNC_6(VAR_1, VAR_5->vddc_lookup_table);
 if (VAR_3)
  VAR_2 = VAR_3;

 return VAR_2;
}
