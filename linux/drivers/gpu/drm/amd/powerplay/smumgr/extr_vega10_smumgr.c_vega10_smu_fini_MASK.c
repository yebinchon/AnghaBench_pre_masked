
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* entry; } ;
struct vega10_smumgr {TYPE_2__ smu_tables; } ;
struct pp_hwmgr {struct vega10_smumgr* smu_backend; } ;
struct TYPE_3__ {scalar_t__ table; int mc_addr; int handle; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int *,scalar_t__*) ;
 int FUNC_1 (struct vega10_smumgr*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_5)
{
 struct vega10_smumgr *VAR_6 = VAR_5->smu_backend;

 if (VAR_6) {
  FUNC_0(&VAR_6->smu_tables.entry[VAR_2].handle,
    &VAR_6->smu_tables.entry[VAR_2].mc_addr,
    &VAR_6->smu_tables.entry[VAR_2].table);
  FUNC_0(&VAR_6->smu_tables.entry[VAR_4].handle,
     &VAR_6->smu_tables.entry[VAR_4].mc_addr,
     &VAR_6->smu_tables.entry[VAR_4].table);
  FUNC_0(&VAR_6->smu_tables.entry[VAR_1].handle,
     &VAR_6->smu_tables.entry[VAR_1].mc_addr,
     &VAR_6->smu_tables.entry[VAR_1].table);
  if (VAR_6->smu_tables.entry[VAR_3].table)
   FUNC_0(&VAR_6->smu_tables.entry[VAR_3].handle,
     &VAR_6->smu_tables.entry[VAR_3].mc_addr,
     &VAR_6->smu_tables.entry[VAR_3].table);
  FUNC_0(&VAR_6->smu_tables.entry[VAR_0].handle,
     &VAR_6->smu_tables.entry[VAR_0].mc_addr,
     &VAR_6->smu_tables.entry[VAR_0].table);
  FUNC_1(VAR_5->smu_backend);
  VAR_5->smu_backend = ((void*)0);
 }
 return 0;
}
