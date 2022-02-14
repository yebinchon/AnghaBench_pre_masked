
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_size; int kaddr; int mc_addr; int handle; } ;
struct TYPE_3__ {int data_size; int kaddr; int mc_addr; int handle; } ;
struct smu7_smumgr {TYPE_2__ header_buffer; TYPE_1__ smu_buffer; } ;
struct pp_hwmgr {int feature_mask; int avfs_supported; scalar_t__ adev; int not_vf; scalar_t__ smu_backend; } ;
struct amdgpu_device {int dummy; } ;
struct SMU_DRAMData_TOC {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*) ;

int FUNC_3(struct pp_hwmgr *VAR_4)
{
 struct smu7_smumgr *VAR_5;
 int VAR_6;

 VAR_5 = (struct smu7_smumgr *)(VAR_4->smu_backend);
 VAR_5->header_buffer.data_size =
   ((sizeof(struct SMU_DRAMData_TOC) / 4096) + 1) * 4096;



 VAR_6 = FUNC_0((struct amdgpu_device *)VAR_4->adev,
  VAR_5->header_buffer.data_size,
  VAR_2,
  VAR_0,
  &VAR_5->header_buffer.handle,
  &VAR_5->header_buffer.mc_addr,
  &VAR_5->header_buffer.kaddr);

 if (VAR_6)
  return -VAR_1;

 if (!VAR_4->not_vf)
  return 0;

 VAR_5->smu_buffer.data_size = 200*4096;
 VAR_6 = FUNC_0((struct amdgpu_device *)VAR_4->adev,
  VAR_5->smu_buffer.data_size,
  VAR_2,
  VAR_0,
  &VAR_5->smu_buffer.handle,
  &VAR_5->smu_buffer.mc_addr,
  &VAR_5->smu_buffer.kaddr);

 if (VAR_6) {
  FUNC_1(&VAR_5->header_buffer.handle,
     &VAR_5->header_buffer.mc_addr,
     &VAR_5->header_buffer.kaddr);
  return -VAR_1;
 }

 if (FUNC_2(VAR_4) &&
     (VAR_4->feature_mask & VAR_3))
  VAR_4->avfs_supported = 1;

 return 0;
}
