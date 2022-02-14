
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* entry; } ;
struct vega10_smumgr {TYPE_2__ smu_tables; } ;
struct pp_hwmgr {struct vega10_smumgr* smu_backend; scalar_t__ adev; int device; } ;
struct cgs_firmware_info {int kptr; int member_0; } ;
struct amdgpu_device {int dummy; } ;
typedef int Watermarks_t ;
struct TYPE_3__ {int version; int size; scalar_t__ table; int mc_addr; int handle; int table_id; } ;
typedef int PPTable_t ;
typedef int AvfsTable_t ;
typedef int AvfsFuseOverride_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (int *,int *,scalar_t__*) ;
 int FUNC_2 (int ,int ,struct cgs_firmware_info*) ;
 int FUNC_3 (struct vega10_smumgr*) ;
 struct vega10_smumgr* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_16)
{
 struct vega10_smumgr *VAR_17;
 unsigned long VAR_18;
 int VAR_19;
 struct cgs_firmware_info VAR_20 = {0};

 VAR_19 = FUNC_2(VAR_16->device,
        VAR_3,
        &VAR_20);
 if (VAR_19 || !VAR_20.kptr)
  return -VAR_4;

 VAR_17 = FUNC_4(sizeof(struct vega10_smumgr), VAR_6);

 if (!VAR_17)
  return -VAR_5;

 VAR_16->smu_backend = VAR_17;


 VAR_19 = FUNC_0((struct amdgpu_device *)VAR_16->adev,
   sizeof(PPTable_t),
   VAR_7,
   VAR_0,
   &VAR_17->smu_tables.entry[VAR_8].handle,
   &VAR_17->smu_tables.entry[VAR_8].mc_addr,
   &VAR_17->smu_tables.entry[VAR_8].table);
 if (VAR_19)
  goto free_backend;

 VAR_17->smu_tables.entry[VAR_8].version = 0x01;
 VAR_17->smu_tables.entry[VAR_8].size = sizeof(PPTable_t);
 VAR_17->smu_tables.entry[VAR_8].table_id = VAR_12;


 VAR_19 = FUNC_0((struct amdgpu_device *)VAR_16->adev,
   sizeof(Watermarks_t),
   VAR_7,
   VAR_0,
   &VAR_17->smu_tables.entry[VAR_15].handle,
   &VAR_17->smu_tables.entry[VAR_15].mc_addr,
   &VAR_17->smu_tables.entry[VAR_15].table);

 if (VAR_19)
  goto err0;

 VAR_17->smu_tables.entry[VAR_15].version = 0x01;
 VAR_17->smu_tables.entry[VAR_15].size = sizeof(Watermarks_t);
 VAR_17->smu_tables.entry[VAR_15].table_id = VAR_13;


 VAR_19 = FUNC_0((struct amdgpu_device *)VAR_16->adev,
   sizeof(AvfsTable_t),
   VAR_7,
   VAR_0,
   &VAR_17->smu_tables.entry[VAR_2].handle,
   &VAR_17->smu_tables.entry[VAR_2].mc_addr,
   &VAR_17->smu_tables.entry[VAR_2].table);

 if (VAR_19)
  goto err1;

 VAR_17->smu_tables.entry[VAR_2].version = 0x01;
 VAR_17->smu_tables.entry[VAR_2].size = sizeof(AvfsTable_t);
 VAR_17->smu_tables.entry[VAR_2].table_id = VAR_9;

 VAR_18 = 0x19000;
 if (VAR_18) {
  VAR_19 = FUNC_0((struct amdgpu_device *)VAR_16->adev,
    VAR_18,
    VAR_7,
    VAR_0,
    &VAR_17->smu_tables.entry[VAR_14].handle,
    &VAR_17->smu_tables.entry[VAR_14].mc_addr,
    &VAR_17->smu_tables.entry[VAR_14].table);
  if (VAR_19)
   goto err2;
  VAR_17->smu_tables.entry[VAR_14].version = 0x01;
  VAR_17->smu_tables.entry[VAR_14].size = VAR_18;
  VAR_17->smu_tables.entry[VAR_14].table_id = VAR_11;
 }


 VAR_19 = FUNC_0((struct amdgpu_device *)VAR_16->adev,
   sizeof(AvfsFuseOverride_t),
   VAR_7,
   VAR_0,
   &VAR_17->smu_tables.entry[VAR_1].handle,
   &VAR_17->smu_tables.entry[VAR_1].mc_addr,
   &VAR_17->smu_tables.entry[VAR_1].table);
 if (VAR_19)
  goto err3;

 VAR_17->smu_tables.entry[VAR_1].version = 0x01;
 VAR_17->smu_tables.entry[VAR_1].size = sizeof(AvfsFuseOverride_t);
 VAR_17->smu_tables.entry[VAR_1].table_id = VAR_10;


 return 0;

err3:
 if (VAR_17->smu_tables.entry[VAR_14].table)
  FUNC_1(&VAR_17->smu_tables.entry[VAR_14].handle,
    &VAR_17->smu_tables.entry[VAR_14].mc_addr,
    &VAR_17->smu_tables.entry[VAR_14].table);
err2:
 FUNC_1(&VAR_17->smu_tables.entry[VAR_2].handle,
    &VAR_17->smu_tables.entry[VAR_2].mc_addr,
    &VAR_17->smu_tables.entry[VAR_2].table);
err1:
 FUNC_1(&VAR_17->smu_tables.entry[VAR_15].handle,
    &VAR_17->smu_tables.entry[VAR_15].mc_addr,
    &VAR_17->smu_tables.entry[VAR_15].table);
err0:
 FUNC_1(&VAR_17->smu_tables.entry[VAR_8].handle,
   &VAR_17->smu_tables.entry[VAR_8].mc_addr,
   &VAR_17->smu_tables.entry[VAR_8].table);
free_backend:
 FUNC_3(VAR_16->smu_backend);

 return -VAR_4;
}
