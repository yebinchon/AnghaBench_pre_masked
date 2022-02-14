
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* entry; } ;
struct vega20_smumgr {TYPE_2__ smu_tables; } ;
struct pp_hwmgr {int * smu_backend; } ;
struct TYPE_3__ {int table; int mc_addr; int handle; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_6)
{
 struct vega20_smumgr *VAR_7 =
   (struct vega20_smumgr *)(VAR_6->smu_backend);

 if (VAR_7) {
  FUNC_0(&VAR_7->smu_tables.entry[VAR_3].handle,
    &VAR_7->smu_tables.entry[VAR_3].mc_addr,
    &VAR_7->smu_tables.entry[VAR_3].table);
  FUNC_0(&VAR_7->smu_tables.entry[VAR_5].handle,
    &VAR_7->smu_tables.entry[VAR_5].mc_addr,
    &VAR_7->smu_tables.entry[VAR_5].table);
  FUNC_0(&VAR_7->smu_tables.entry[VAR_2].handle,
    &VAR_7->smu_tables.entry[VAR_2].mc_addr,
    &VAR_7->smu_tables.entry[VAR_2].table);
  FUNC_0(&VAR_7->smu_tables.entry[VAR_1].handle,
    &VAR_7->smu_tables.entry[VAR_1].mc_addr,
    &VAR_7->smu_tables.entry[VAR_1].table);
  FUNC_0(&VAR_7->smu_tables.entry[VAR_4].handle,
    &VAR_7->smu_tables.entry[VAR_4].mc_addr,
    &VAR_7->smu_tables.entry[VAR_4].table);
  FUNC_0(&VAR_7->smu_tables.entry[VAR_0].handle,
    &VAR_7->smu_tables.entry[VAR_0].mc_addr,
    &VAR_7->smu_tables.entry[VAR_0].table);
  FUNC_1(VAR_6->smu_backend);
  VAR_6->smu_backend = ((void*)0);
 }
 return 0;
}
