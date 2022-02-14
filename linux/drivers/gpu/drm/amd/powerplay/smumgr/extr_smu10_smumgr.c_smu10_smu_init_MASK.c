
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* entry; } ;
struct smu10_smumgr {TYPE_2__ smu_tables; } ;
struct pp_hwmgr {scalar_t__ adev; struct smu10_smumgr* smu_backend; } ;
struct amdgpu_device {int dummy; } ;
typedef int Watermarks_t ;
struct TYPE_3__ {int version; int size; int table; int mc_addr; int handle; int table_id; } ;
typedef int DpmClocks_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct smu10_smumgr*) ;
 struct smu10_smumgr* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_9)
{
 struct smu10_smumgr *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(sizeof(struct smu10_smumgr), VAR_3);

 if (!VAR_10)
  return -VAR_2;

 VAR_9->smu_backend = VAR_10;


 VAR_11 = FUNC_0((struct amdgpu_device *)VAR_9->adev,
   sizeof(Watermarks_t),
   VAR_4,
   VAR_0,
   &VAR_10->smu_tables.entry[VAR_6].handle,
   &VAR_10->smu_tables.entry[VAR_6].mc_addr,
   &VAR_10->smu_tables.entry[VAR_6].table);

 if (VAR_11)
  goto err0;

 VAR_10->smu_tables.entry[VAR_6].version = 0x01;
 VAR_10->smu_tables.entry[VAR_6].size = sizeof(Watermarks_t);
 VAR_10->smu_tables.entry[VAR_6].table_id = VAR_8;


 VAR_11 = FUNC_0((struct amdgpu_device *)VAR_9->adev,
   sizeof(DpmClocks_t),
   VAR_4,
   VAR_0,
   &VAR_10->smu_tables.entry[VAR_5].handle,
   &VAR_10->smu_tables.entry[VAR_5].mc_addr,
   &VAR_10->smu_tables.entry[VAR_5].table);

 if (VAR_11)
  goto err1;

 VAR_10->smu_tables.entry[VAR_5].version = 0x01;
 VAR_10->smu_tables.entry[VAR_5].size = sizeof(DpmClocks_t);
 VAR_10->smu_tables.entry[VAR_5].table_id = VAR_7;

 return 0;

err1:
 FUNC_1(&VAR_10->smu_tables.entry[VAR_6].handle,
    &VAR_10->smu_tables.entry[VAR_6].mc_addr,
    &VAR_10->smu_tables.entry[VAR_6].table);
err0:
 FUNC_2(VAR_10);
 return -VAR_1;
}
