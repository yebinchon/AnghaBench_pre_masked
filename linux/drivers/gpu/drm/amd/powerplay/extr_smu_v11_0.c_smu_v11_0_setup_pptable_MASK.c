
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {scalar_t__ pp_table_id; } ;
struct TYPE_10__ {int power_play_table_size; void* power_play_table; TYPE_4__ boot_values; } ;
struct smu_context {TYPE_5__ smu_table; struct amdgpu_device* adev; } ;
struct TYPE_8__ {int header_version_minor; int header_version_major; } ;
struct smc_firmware_header_v1_0 {TYPE_3__ header; } ;
struct TYPE_7__ {TYPE_1__* fw; } ;
struct amdgpu_device {TYPE_2__ pm; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct smu_context*,int,int*,int *,int *,int **) ;
 int FUNC_3 (struct smu_context*,void**,int*) ;
 int FUNC_4 (struct smu_context*,void**,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 const struct smc_firmware_header_v1_0 *VAR_5;
 int VAR_6, VAR_7;
 uint32_t VAR_8 = 0;
 uint16_t VAR_9;
 uint8_t VAR_10, VAR_11;
 void *VAR_12;
 uint16_t VAR_13, VAR_14;

 VAR_5 = (const struct smc_firmware_header_v1_0 *) VAR_4->pm.fw->data;
 VAR_13 = FUNC_1(VAR_5->header.header_version_major);
 VAR_14 = FUNC_1(VAR_5->header.header_version_minor);
 if (VAR_13 == 2 && VAR_3->smu_table.boot_values.pp_table_id > 0) {
  switch (VAR_14) {
  case 0:
   VAR_6 = FUNC_3(VAR_3, &VAR_12, &VAR_8);
   break;
  case 1:
   VAR_6 = FUNC_4(VAR_3, &VAR_12, &VAR_8,
        VAR_3->smu_table.boot_values.pp_table_id);
   break;
  default:
   VAR_6 = -VAR_0;
   break;
  }
  if (VAR_6)
   return VAR_6;

 } else {
  VAR_7 = FUNC_0(VAR_1,
          VAR_2);

  VAR_6 = FUNC_2(VAR_3, VAR_7, &VAR_9, &VAR_10, &VAR_11,
           (uint8_t **)&VAR_12);
  if (VAR_6)
   return VAR_6;
  VAR_8 = VAR_9;
 }

 if (!VAR_3->smu_table.power_play_table)
  VAR_3->smu_table.power_play_table = VAR_12;
 if (!VAR_3->smu_table.power_play_table_size)
  VAR_3->smu_table.power_play_table_size = VAR_8;

 return 0;
}
