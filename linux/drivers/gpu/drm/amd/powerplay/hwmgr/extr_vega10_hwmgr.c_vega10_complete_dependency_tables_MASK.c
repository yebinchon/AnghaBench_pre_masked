
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega10_hwmgr {int vddc_leakage; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; scalar_t__ pptable; } ;
struct TYPE_2__ {int vddc; } ;
struct phm_ppt_v2_information {int vddc_lookup_table; TYPE_1__ max_clock_voltage_on_dc; } ;


 int FUNC_0 (struct pp_hwmgr*,int *,int *) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int *) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;
 struct phm_ppt_v2_information *VAR_3 =
   (struct phm_ppt_v2_information *)(VAR_0->pptable);
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  VAR_1 = VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_3->vddc_lookup_table);
 if (VAR_2)
  VAR_1 = VAR_2;

 return VAR_1;
}
