
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucode_version; } ;
struct sdma_firmware_header_v1_0 {int ucode_feature_version; TYPE_1__ header; } ;
struct amdgpu_sdma_instance {int feature_version; int burst_nop; void* fw_version; TYPE_2__* fw; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_sdma_instance *VAR_0)
{
 int VAR_1 = 0;
 const struct sdma_firmware_header_v1_0 *VAR_2;

 VAR_1 = FUNC_0(VAR_0->fw);
 if (VAR_1)
  return VAR_1;

 VAR_2 = (const struct sdma_firmware_header_v1_0 *)VAR_0->fw->data;
 VAR_0->fw_version = FUNC_1(VAR_2->header.ucode_version);
 VAR_0->feature_version = FUNC_1(VAR_2->ucode_feature_version);

 if (VAR_0->feature_version >= 20)
  VAR_0->burst_nop = 1;

 return 0;
}
