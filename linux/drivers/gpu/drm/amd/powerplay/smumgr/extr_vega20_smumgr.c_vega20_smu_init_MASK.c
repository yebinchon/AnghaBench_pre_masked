
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* entry; } ;
struct vega20_smumgr {TYPE_1__ smu_tables; } ;
struct pp_hwmgr {struct vega20_smumgr* smu_backend; scalar_t__ adev; int device; } ;
struct cgs_firmware_info {int kptr; int member_0; } ;
struct amdgpu_device {int dummy; } ;
typedef int Watermarks_t ;
struct TYPE_4__ {int version; int size; int table; int mc_addr; int handle; } ;
typedef int SmuMetrics_t ;
typedef int PPTable_t ;
typedef int OverDriveTable_t ;
typedef int DpmActivityMonitorCoeffInt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int ,int ,struct cgs_firmware_info*) ;
 int FUNC_3 (struct vega20_smumgr*) ;
 struct vega20_smumgr* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_12)
{
 struct vega20_smumgr *VAR_13;
 unsigned long VAR_14 = 0x19000;
 int VAR_15 = 0;

 struct cgs_firmware_info VAR_16 = {0};

 VAR_15 = FUNC_2(VAR_12->device,
    FUNC_5(VAR_11),
    &VAR_16);
 if (VAR_15 || !VAR_16.kptr)
  return -VAR_1;

 VAR_13 = FUNC_4(sizeof(struct vega20_smumgr), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_12->smu_backend = VAR_13;


 VAR_15 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
   sizeof(PPTable_t),
   VAR_4,
   VAR_0,
   &VAR_13->smu_tables.entry[VAR_8].handle,
   &VAR_13->smu_tables.entry[VAR_8].mc_addr,
   &VAR_13->smu_tables.entry[VAR_8].table);
 if (VAR_15)
  goto free_backend;

 VAR_13->smu_tables.entry[VAR_8].version = 0x01;
 VAR_13->smu_tables.entry[VAR_8].size = sizeof(PPTable_t);


 VAR_15 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
   sizeof(Watermarks_t),
   VAR_4,
   VAR_0,
   &VAR_13->smu_tables.entry[VAR_10].handle,
   &VAR_13->smu_tables.entry[VAR_10].mc_addr,
   &VAR_13->smu_tables.entry[VAR_10].table);
 if (VAR_15)
  goto err0;

 VAR_13->smu_tables.entry[VAR_10].version = 0x01;
 VAR_13->smu_tables.entry[VAR_10].size = sizeof(Watermarks_t);


 VAR_15 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
   VAR_14,
   VAR_4,
   VAR_0,
   &VAR_13->smu_tables.entry[VAR_7].handle,
   &VAR_13->smu_tables.entry[VAR_7].mc_addr,
   &VAR_13->smu_tables.entry[VAR_7].table);
 if (VAR_15)
  goto err1;

 VAR_13->smu_tables.entry[VAR_7].version = 0x01;
 VAR_13->smu_tables.entry[VAR_7].size = VAR_14;


 VAR_15 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
   sizeof(OverDriveTable_t),
   VAR_4,
   VAR_0,
   &VAR_13->smu_tables.entry[VAR_6].handle,
   &VAR_13->smu_tables.entry[VAR_6].mc_addr,
   &VAR_13->smu_tables.entry[VAR_6].table);
 if (VAR_15)
  goto err2;

 VAR_13->smu_tables.entry[VAR_6].version = 0x01;
 VAR_13->smu_tables.entry[VAR_6].size = sizeof(OverDriveTable_t);


 VAR_15 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
   sizeof(SmuMetrics_t),
   VAR_4,
   VAR_0,
   &VAR_13->smu_tables.entry[VAR_9].handle,
   &VAR_13->smu_tables.entry[VAR_9].mc_addr,
   &VAR_13->smu_tables.entry[VAR_9].table);
 if (VAR_15)
  goto err3;

 VAR_13->smu_tables.entry[VAR_9].version = 0x01;
 VAR_13->smu_tables.entry[VAR_9].size = sizeof(SmuMetrics_t);


 VAR_15 = FUNC_0((struct amdgpu_device *)VAR_12->adev,
   sizeof(DpmActivityMonitorCoeffInt_t),
   VAR_4,
   VAR_0,
   &VAR_13->smu_tables.entry[VAR_5].handle,
   &VAR_13->smu_tables.entry[VAR_5].mc_addr,
   &VAR_13->smu_tables.entry[VAR_5].table);
 if (VAR_15)
  goto err4;

 VAR_13->smu_tables.entry[VAR_5].version = 0x01;
 VAR_13->smu_tables.entry[VAR_5].size = sizeof(DpmActivityMonitorCoeffInt_t);

 return 0;

err4:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_9].handle,
   &VAR_13->smu_tables.entry[VAR_9].mc_addr,
   &VAR_13->smu_tables.entry[VAR_9].table);
err3:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_6].handle,
   &VAR_13->smu_tables.entry[VAR_6].mc_addr,
   &VAR_13->smu_tables.entry[VAR_6].table);
err2:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_7].handle,
   &VAR_13->smu_tables.entry[VAR_7].mc_addr,
   &VAR_13->smu_tables.entry[VAR_7].table);
err1:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_10].handle,
   &VAR_13->smu_tables.entry[VAR_10].mc_addr,
   &VAR_13->smu_tables.entry[VAR_10].table);
err0:
 FUNC_1(&VAR_13->smu_tables.entry[VAR_8].handle,
   &VAR_13->smu_tables.entry[VAR_8].mc_addr,
   &VAR_13->smu_tables.entry[VAR_8].table);
free_backend:
 FUNC_3(VAR_12->smu_backend);

 return -VAR_1;
}
