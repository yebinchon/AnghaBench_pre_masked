
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct smu7_hwmgr {int vddc_leakage; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct phm_cac_leakage_table {size_t count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ Vddc; } ;


 int FUNC_0 (struct pp_hwmgr*,size_t*,int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0, struct phm_cac_leakage_table *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_0->backend);

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++) {
   VAR_3 = (uint32_t)(VAR_1->entries[VAR_2].Vddc);
   FUNC_0(VAR_0, &VAR_3, &VAR_4->vddc_leakage);
   VAR_1->entries[VAR_2].Vddc = (uint16_t)VAR_3;
  }
 }

 return 0;
}
