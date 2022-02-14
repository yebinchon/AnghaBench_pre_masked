
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_size; int kaddr; int mc_addr; int handle; } ;
struct TYPE_3__ {int data_size; int kaddr; int mc_addr; int handle; } ;
struct smu8_smumgr {TYPE_2__ toc_buffer; TYPE_1__ smu_buffer; int scratch_buffer_length; int * scratch_buffer; } ;
struct pp_hwmgr {scalar_t__ adev; struct smu8_smumgr* smu_backend; } ;
struct amdgpu_device {int dummy; } ;
struct SMU8_MultimediaPowerLogData {int dummy; } ;
struct SMU8_Fusion_ClkTable {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct amdgpu_device*,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (struct smu8_smumgr*) ;
 struct smu8_smumgr* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct pp_hwmgr*,int ,int,int *) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_13)
{
 int VAR_14 = 0;
 struct smu8_smumgr *VAR_15;

 VAR_15 = FUNC_4(sizeof(struct smu8_smumgr), VAR_3);
 if (VAR_15 == ((void*)0))
  return -VAR_2;

 VAR_13->smu_backend = VAR_15;

 VAR_15->toc_buffer.data_size = 4096;
 VAR_15->smu_buffer.data_size =
  FUNC_0(VAR_10, 32) +
  FUNC_0(VAR_11, 32) +
  FUNC_0(VAR_12, 32) +
  FUNC_0(sizeof(struct SMU8_MultimediaPowerLogData), 32) +
  FUNC_0(sizeof(struct SMU8_Fusion_ClkTable), 32);

 VAR_14 = FUNC_1((struct amdgpu_device *)VAR_13->adev,
    VAR_15->toc_buffer.data_size,
    VAR_4,
    VAR_0,
    &VAR_15->toc_buffer.handle,
    &VAR_15->toc_buffer.mc_addr,
    &VAR_15->toc_buffer.kaddr);
 if (VAR_14)
  goto err2;

 VAR_14 = FUNC_1((struct amdgpu_device *)VAR_13->adev,
    VAR_15->smu_buffer.data_size,
    VAR_4,
    VAR_0,
    &VAR_15->smu_buffer.handle,
    &VAR_15->smu_buffer.mc_addr,
    &VAR_15->smu_buffer.kaddr);
 if (VAR_14)
  goto err1;

 if (0 != FUNC_6(VAR_13,
  VAR_7,
  VAR_10,
  &VAR_15->scratch_buffer[VAR_15->scratch_buffer_length++])) {
  FUNC_5("Error when Populate Firmware Entry.\n");
  goto err0;
 }

 if (0 != FUNC_6(VAR_13,
  VAR_8,
  VAR_11,
  &VAR_15->scratch_buffer[VAR_15->scratch_buffer_length++])) {
  FUNC_5("Error when Populate Firmware Entry.\n");
  goto err0;
 }
 if (0 != FUNC_6(VAR_13,
  VAR_9,
  VAR_12,
  &VAR_15->scratch_buffer[VAR_15->scratch_buffer_length++])) {
  FUNC_5("Error when Populate Firmware Entry.\n");
  goto err0;
 }

 if (0 != FUNC_6(VAR_13,
  VAR_6,
  sizeof(struct SMU8_MultimediaPowerLogData),
  &VAR_15->scratch_buffer[VAR_15->scratch_buffer_length++])) {
  FUNC_5("Error when Populate Firmware Entry.\n");
  goto err0;
 }

 if (0 != FUNC_6(VAR_13,
  VAR_5,
  sizeof(struct SMU8_Fusion_ClkTable),
  &VAR_15->scratch_buffer[VAR_15->scratch_buffer_length++])) {
  FUNC_5("Error when Populate Firmware Entry.\n");
  goto err0;
 }

 return 0;

err0:
 FUNC_2(&VAR_15->smu_buffer.handle,
    &VAR_15->smu_buffer.mc_addr,
    &VAR_15->smu_buffer.kaddr);
err1:
 FUNC_2(&VAR_15->toc_buffer.handle,
    &VAR_15->toc_buffer.mc_addr,
    &VAR_15->toc_buffer.kaddr);
err2:
 FUNC_3(VAR_15);
 return -VAR_1;
}
