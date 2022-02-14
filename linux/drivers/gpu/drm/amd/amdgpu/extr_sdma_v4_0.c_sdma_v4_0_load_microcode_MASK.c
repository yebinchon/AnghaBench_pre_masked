
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int ucode_array_offset_bytes; int ucode_size_bytes; } ;
struct sdma_firmware_header_v1_0 {TYPE_4__ header; } ;
struct TYPE_7__ {int num_instances; TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_3__ sdma; } ;
typedef int __le32 ;
struct TYPE_6__ {int fw_version; TYPE_1__* fw; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_3)
{
 const struct sdma_firmware_header_v1_0 *VAR_4;
 const __le32 *VAR_5;
 u32 VAR_6;
 int VAR_7, VAR_8;


 FUNC_4(VAR_3, 0);

 for (VAR_7 = 0; VAR_7 < VAR_3->sdma.num_instances; VAR_7++) {
  if (!VAR_3->sdma.instance[VAR_7].fw)
   return -VAR_0;

  VAR_4 = (const struct sdma_firmware_header_v1_0 *)VAR_3->sdma.instance[VAR_7].fw->data;
  FUNC_1(&VAR_4->header);
  VAR_6 = FUNC_2(VAR_4->header.ucode_size_bytes) / 4;

  VAR_5 = (const __le32 *)
   (VAR_3->sdma.instance[VAR_7].fw->data +
    FUNC_2(VAR_4->header.ucode_array_offset_bytes));

  FUNC_0(VAR_7, VAR_1, 0);

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
   FUNC_0(VAR_7, VAR_2,
        FUNC_3(VAR_5++));

  FUNC_0(VAR_7, VAR_1,
       VAR_3->sdma.instance[VAR_7].fw_version);
 }

 return 0;
}
