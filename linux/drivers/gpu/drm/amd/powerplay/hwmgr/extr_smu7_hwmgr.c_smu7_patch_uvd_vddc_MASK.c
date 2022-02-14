
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct smu7_hwmgr {int vddc_leakage; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct phm_uvd_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct TYPE_2__ {int v; } ;


 int FUNC_0 (struct pp_hwmgr*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
      struct phm_uvd_clock_voltage_dependency_table *VAR_1)
{
 uint16_t VAR_2;
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_0->backend);

 if (VAR_1)
  for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
   FUNC_0(VAR_0, &VAR_1->entries[VAR_2].v,
       &VAR_3->vddc_leakage);

 return 0;
}
