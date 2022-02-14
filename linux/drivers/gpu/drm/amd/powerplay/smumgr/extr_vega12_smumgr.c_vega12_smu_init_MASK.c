
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* entry; } ;
struct vega12_smumgr {TYPE_2__ smu_tables; } ;
struct pp_hwmgr {struct vega12_smumgr* smu_backend; scalar_t__ adev; int device; } ;
struct cgs_firmware_info {int kptr; int member_0; } ;
struct amdgpu_device {int dummy; } ;
typedef int Watermarks_t ;
struct TYPE_3__ {int version; int size; scalar_t__ table; int mc_addr; int handle; } ;
typedef int SmuMetrics_t ;
typedef int PPTable_t ;
typedef int OverDriveTable_t ;
typedef int AvfsFuseOverride_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (int *,int *,scalar_t__*) ;
 int FUNC_2 (int ,int ,struct cgs_firmware_info*) ;
 int FUNC_3 (struct vega12_smumgr*) ;
 struct vega12_smumgr* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_12)
{
 struct vega12_smumgr *VAR_13;
 unsigned long VAR_14;
 struct cgs_firmware_info VAR_15 = {0};
 int VAR_16;

 VAR_16 = FUNC_2(VAR_12->device, VAR_1,
    &VAR_15);
 if (VAR_16 || !VAR_15.kptr)
  return -VAR_2;

 VAR_13 = FUNC_4(sizeof(struct vega12_smumgr), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_12->smu_backend = VAR_13;


 VAR_16 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
   sizeof(PPTable_t),
   VAR_5,
   VAR_0,
   &VAR_13->smu_tables.entry[VAR_9].handle,
   &VAR_13->smu_tables.entry[VAR_9].mc_addr,
   &VAR_13->smu_tables.entry[VAR_9].table);
 if (VAR_16)
  goto free_backend;

 VAR_13->smu_tables.entry[VAR_9].version = 0x01;
 VAR_13->smu_tables.entry[VAR_9].size = sizeof(PPTable_t);


 VAR_16 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
          sizeof(Watermarks_t),
          VAR_5,
          VAR_0,
          &VAR_13->smu_tables.entry[VAR_11].handle,
          &VAR_13->smu_tables.entry[VAR_11].mc_addr,
          &VAR_13->smu_tables.entry[VAR_11].table);

 if (VAR_16)
  goto err0;

 VAR_13->smu_tables.entry[VAR_11].version = 0x01;
 VAR_13->smu_tables.entry[VAR_11].size = sizeof(Watermarks_t);

 VAR_14 = 0x19000;
 if (VAR_14) {
  VAR_16 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
           VAR_14,
           VAR_5,
           VAR_0,
           &VAR_13->smu_tables.entry[VAR_8].handle,
           &VAR_13->smu_tables.entry[VAR_8].mc_addr,
           &VAR_13->smu_tables.entry[VAR_8].table);
  if (VAR_16)
   goto err1;

  VAR_13->smu_tables.entry[VAR_8].version = 0x01;
  VAR_13->smu_tables.entry[VAR_8].size = VAR_14;
 }


 VAR_16 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
          sizeof(AvfsFuseOverride_t),
          VAR_5,
          VAR_0,
          &VAR_13->smu_tables.entry[VAR_6].handle,
          &VAR_13->smu_tables.entry[VAR_6].mc_addr,
          &VAR_13->smu_tables.entry[VAR_6].table);

 if (VAR_16)
  goto err2;

 VAR_13->smu_tables.entry[VAR_6].version = 0x01;
 VAR_13->smu_tables.entry[VAR_6].size = sizeof(AvfsFuseOverride_t);


 VAR_16 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
          sizeof(OverDriveTable_t),
          VAR_5,
          VAR_0,
          &VAR_13->smu_tables.entry[VAR_7].handle,
          &VAR_13->smu_tables.entry[VAR_7].mc_addr,
          &VAR_13->smu_tables.entry[VAR_7].table);
 if (VAR_16)
  goto err3;

 VAR_13->smu_tables.entry[VAR_7].version = 0x01;
 VAR_13->smu_tables.entry[VAR_7].size = sizeof(OverDriveTable_t);


 VAR_16 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
          sizeof(SmuMetrics_t),
          VAR_5,
          VAR_0,
          &VAR_13->smu_tables.entry[VAR_10].handle,
          &VAR_13->smu_tables.entry[VAR_10].mc_addr,
          &VAR_13->smu_tables.entry[VAR_10].table);
 if (VAR_16)
  goto err4;

 VAR_13->smu_tables.entry[VAR_10].version = 0x01;
 VAR_13->smu_tables.entry[VAR_10].size = sizeof(SmuMetrics_t);

 return 0;

err4:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_7].handle,
    &VAR_13->smu_tables.entry[VAR_7].mc_addr,
    &VAR_13->smu_tables.entry[VAR_7].table);
err3:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_6].handle,
    &VAR_13->smu_tables.entry[VAR_6].mc_addr,
    &VAR_13->smu_tables.entry[VAR_6].table);
err2:
 if (VAR_13->smu_tables.entry[VAR_8].table)
  FUNC_1(&VAR_13->smu_tables.entry[VAR_8].handle,
    &VAR_13->smu_tables.entry[VAR_8].mc_addr,
    &VAR_13->smu_tables.entry[VAR_8].table);
err1:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_11].handle,
    &VAR_13->smu_tables.entry[VAR_11].mc_addr,
    &VAR_13->smu_tables.entry[VAR_11].table);
err0:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_9].handle,
   &VAR_13->smu_tables.entry[VAR_9].mc_addr,
   &VAR_13->smu_tables.entry[VAR_9].table);
free_backend:
 FUNC_3(VAR_12->smu_backend);

 return -VAR_2;
}
