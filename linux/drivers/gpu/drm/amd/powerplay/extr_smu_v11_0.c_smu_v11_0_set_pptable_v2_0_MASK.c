
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct smc_firmware_header_v2_0 {int ppt_size_bytes; int ppt_offset_bytes; } ;
struct TYPE_4__ {TYPE_1__* fw; } ;
struct amdgpu_device {TYPE_2__ pm; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_0, void **VAR_1, uint32_t *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_0->adev;
 uint32_t VAR_4;
 const struct smc_firmware_header_v2_0 *VAR_5;

 VAR_5 = (const struct smc_firmware_header_v2_0 *) VAR_3->pm.fw->data;

 VAR_4 = FUNC_0(VAR_5->ppt_offset_bytes);
 *VAR_2 = FUNC_0(VAR_5->ppt_size_bytes);
 *VAR_1 = (uint8_t *)VAR_5 + VAR_4;

 return 0;
}
