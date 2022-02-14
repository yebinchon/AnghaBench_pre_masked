
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {TYPE_5__ header; } ;
struct TYPE_9__ {int me_fw_version; TYPE_3__* me_fw; int ce_fw_version; TYPE_2__* ce_fw; int pfp_fw_version; TYPE_1__* pfp_fw; } ;
struct amdgpu_device {TYPE_4__ gfx; } ;
typedef int __le32 ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_8)
{
 const struct gfx_firmware_header_v1_0 *VAR_9;
 const struct gfx_firmware_header_v1_0 *VAR_10;
 const struct gfx_firmware_header_v1_0 *VAR_11;
 const __le32 *VAR_12;
 unsigned VAR_13, VAR_14;

 if (!VAR_8->gfx.me_fw || !VAR_8->gfx.pfp_fw || !VAR_8->gfx.ce_fw)
  return -VAR_0;

 VAR_9 = (const struct gfx_firmware_header_v1_0 *)
  VAR_8->gfx.pfp_fw->data;
 VAR_10 = (const struct gfx_firmware_header_v1_0 *)
  VAR_8->gfx.ce_fw->data;
 VAR_11 = (const struct gfx_firmware_header_v1_0 *)
  VAR_8->gfx.me_fw->data;

 FUNC_1(&VAR_9->header);
 FUNC_1(&VAR_10->header);
 FUNC_1(&VAR_11->header);

 FUNC_2(VAR_8, 0);


 VAR_12 = (const __le32 *)
  (VAR_8->gfx.pfp_fw->data +
   FUNC_3(VAR_9->header.ucode_array_offset_bytes));
 VAR_14 = FUNC_3(VAR_9->header.ucode_size_bytes) / 4;
 FUNC_0(VAR_1, 0, VAR_6, 0);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_0(VAR_1, 0, VAR_7, FUNC_4(VAR_12++));
 FUNC_0(VAR_1, 0, VAR_6, VAR_8->gfx.pfp_fw_version);


 VAR_12 = (const __le32 *)
  (VAR_8->gfx.ce_fw->data +
   FUNC_3(VAR_10->header.ucode_array_offset_bytes));
 VAR_14 = FUNC_3(VAR_10->header.ucode_size_bytes) / 4;
 FUNC_0(VAR_1, 0, VAR_2, 0);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_0(VAR_1, 0, VAR_3, FUNC_4(VAR_12++));
 FUNC_0(VAR_1, 0, VAR_2, VAR_8->gfx.ce_fw_version);


 VAR_12 = (const __le32 *)
  (VAR_8->gfx.me_fw->data +
   FUNC_3(VAR_11->header.ucode_array_offset_bytes));
 VAR_14 = FUNC_3(VAR_11->header.ucode_size_bytes) / 4;
 FUNC_0(VAR_1, 0, VAR_5, 0);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_0(VAR_1, 0, VAR_4, FUNC_4(VAR_12++));
 FUNC_0(VAR_1, 0, VAR_5, VAR_8->gfx.me_fw_version);

 return 0;
}
