
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct smc_soft_pptable_entry {int ppt_size_bytes; int ppt_offset_bytes; int id; } ;
struct smc_firmware_header_v2_1 {int pptable_count; int pptable_entry_offset; } ;
struct TYPE_4__ {TYPE_1__* fw; } ;
struct amdgpu_device {TYPE_2__ pm; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1, void **VAR_2,
          uint32_t *VAR_3, uint32_t VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_1->adev;
 const struct smc_firmware_header_v2_1 *VAR_6;
 struct smc_soft_pptable_entry *VAR_7;
 uint32_t VAR_8 = 0;
 int VAR_9 = 0;

 VAR_6 = (const struct smc_firmware_header_v2_1 *) VAR_5->pm.fw->data;
 VAR_7 = (struct smc_soft_pptable_entry *)
  ((uint8_t *)VAR_6 + FUNC_0(VAR_6->pptable_entry_offset));
 VAR_8 = FUNC_0(VAR_6->pptable_count);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (FUNC_0(VAR_7[VAR_9].id) == VAR_4) {
   *VAR_2 = ((uint8_t *)VAR_6 + FUNC_0(VAR_7[VAR_9].ppt_offset_bytes));
   *VAR_3 = FUNC_0(VAR_7[VAR_9].ppt_size_bytes);
   break;
  }
 }

 if (VAR_9 == VAR_8)
  return -VAR_0;

 return 0;
}
