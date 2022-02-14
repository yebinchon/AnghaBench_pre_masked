
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct rlc_firmware_header_v2_0 {TYPE_3__ header; } ;
struct TYPE_5__ {int rlc_fw_version; TYPE_1__* rlc_fw; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_5)
{
 const struct rlc_firmware_header_v2_0 *VAR_6;
 const __le32 *VAR_7;
 unsigned VAR_8, VAR_9;

 if (!VAR_5->gfx.rlc_fw)
  return -VAR_0;

 VAR_6 = (const struct rlc_firmware_header_v2_0 *)VAR_5->gfx.rlc_fw->data;
 FUNC_1(&VAR_6->header);

 VAR_7 = (const __le32 *)(VAR_5->gfx.rlc_fw->data +
      FUNC_2(VAR_6->header.ucode_array_offset_bytes));
 VAR_9 = FUNC_2(VAR_6->header.ucode_size_bytes) / 4;

 FUNC_0(VAR_1, 0, VAR_3,
   VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_0(VAR_1, 0, VAR_4, FUNC_3(VAR_7++));
 FUNC_0(VAR_1, 0, VAR_3, VAR_5->gfx.rlc_fw_version);

 return 0;
}
