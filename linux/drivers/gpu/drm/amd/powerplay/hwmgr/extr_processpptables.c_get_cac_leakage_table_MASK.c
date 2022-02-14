
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;
struct phm_cac_leakage_table {unsigned long count; TYPE_2__* entries; } ;
typedef unsigned long ULONG ;
struct TYPE_9__ {int ucNumEntries; TYPE_3__* entries; } ;
struct TYPE_8__ {int ulLeakageValue; int usVddc; int usVddc3; int usVddc2; int usVddc1; } ;
struct TYPE_7__ {int Leakage; void* Vddc; void* Vddc3; void* Vddc2; void* Vddc1; } ;
typedef TYPE_4__ ATOM_PPLIB_CAC_Leakage_Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct phm_cac_leakage_table* FUNC_0 (unsigned long,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_4,
     struct phm_cac_leakage_table **VAR_5,
    const ATOM_PPLIB_CAC_Leakage_Table *VAR_6)
{
 struct phm_cac_leakage_table *VAR_7;
 unsigned long VAR_8, VAR_9;

 if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_8 = sizeof(ULONG) +
  (sizeof(struct phm_cac_leakage_table) * VAR_6->ucNumEntries);

 VAR_7 = FUNC_0(VAR_8, VAR_2);

 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_7->count = (ULONG)VAR_6->ucNumEntries;

 for (VAR_9 = 0; VAR_9 < VAR_7->count; VAR_9++) {
  if (FUNC_3(VAR_4->platform_descriptor.platformCaps,
    VAR_3)) {
   VAR_7->entries[VAR_9].Vddc1 = FUNC_1(VAR_6->entries[VAR_9].usVddc1);
   VAR_7->entries[VAR_9].Vddc2 = FUNC_1(VAR_6->entries[VAR_9].usVddc2);
   VAR_7->entries[VAR_9].Vddc3 = FUNC_1(VAR_6->entries[VAR_9].usVddc3);
  } else {
   VAR_7->entries[VAR_9].Vddc = FUNC_1(VAR_6->entries[VAR_9].usVddc);
   VAR_7->entries[VAR_9].Leakage = FUNC_2(VAR_6->entries[VAR_9].ulLeakageValue);
  }
 }

 *VAR_5 = VAR_7;

 return 0;
}
