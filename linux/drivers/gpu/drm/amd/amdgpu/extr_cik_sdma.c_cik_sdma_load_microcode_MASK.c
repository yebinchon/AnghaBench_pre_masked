
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int ucode_array_offset_bytes; int ucode_version; int ucode_size_bytes; } ;
struct sdma_firmware_header_v1_0 {TYPE_4__ header; int ucode_feature_version; } ;
struct TYPE_7__ {int num_instances; TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_3__ sdma; } ;
typedef int __le32 ;
struct TYPE_6__ {int fw_version; int feature_version; int burst_nop; TYPE_1__* fw; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_4)
{
 const struct sdma_firmware_header_v1_0 *VAR_5;
 const __le32 *VAR_6;
 u32 VAR_7;
 int VAR_8, VAR_9;


 FUNC_2(VAR_4, 0);

 for (VAR_8 = 0; VAR_8 < VAR_4->sdma.num_instances; VAR_8++) {
  if (!VAR_4->sdma.instance[VAR_8].fw)
   return -VAR_0;
  VAR_5 = (const struct sdma_firmware_header_v1_0 *)VAR_4->sdma.instance[VAR_8].fw->data;
  FUNC_1(&VAR_5->header);
  VAR_7 = FUNC_3(VAR_5->header.ucode_size_bytes) / 4;
  VAR_4->sdma.instance[VAR_8].fw_version = FUNC_3(VAR_5->header.ucode_version);
  VAR_4->sdma.instance[VAR_8].feature_version = FUNC_3(VAR_5->ucode_feature_version);
  if (VAR_4->sdma.instance[VAR_8].feature_version >= 20)
   VAR_4->sdma.instance[VAR_8].burst_nop = 1;
  VAR_6 = (const __le32 *)
   (VAR_4->sdma.instance[VAR_8].fw->data + FUNC_3(VAR_5->header.ucode_array_offset_bytes));
  FUNC_0(VAR_1 + VAR_3[VAR_8], 0);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_0(VAR_2 + VAR_3[VAR_8], FUNC_4(VAR_6++));
  FUNC_0(VAR_1 + VAR_3[VAR_8], VAR_4->sdma.instance[VAR_8].fw_version);
 }

 return 0;
}
