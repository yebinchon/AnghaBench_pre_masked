
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ucode_size_bytes; int ucode_array_offset_bytes; int ucode_version; } ;
struct gfx_firmware_header_v1_0 {TYPE_4__ header; int ucode_feature_version; } ;
struct TYPE_7__ {int mec_fw_version; int mec_feature_version; int mec2_fw_version; int mec2_feature_version; TYPE_2__* mec2_fw; TYPE_1__* mec_fw; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ gfx; } ;
typedef int __le32 ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_6)
{
 const struct gfx_firmware_header_v1_0 *VAR_7;
 const __le32 *VAR_8;
 unsigned VAR_9, VAR_10;

 if (!VAR_6->gfx.mec_fw)
  return -VAR_1;

 VAR_7 = (const struct gfx_firmware_header_v1_0 *)VAR_6->gfx.mec_fw->data;
 FUNC_1(&VAR_7->header);
 VAR_6->gfx.mec_fw_version = FUNC_3(VAR_7->header.ucode_version);
 VAR_6->gfx.mec_feature_version = FUNC_3(
     VAR_7->ucode_feature_version);

 FUNC_2(VAR_6, 0);


 VAR_8 = (const __le32 *)
  (VAR_6->gfx.mec_fw->data +
   FUNC_3(VAR_7->header.ucode_array_offset_bytes));
 VAR_10 = FUNC_3(VAR_7->header.ucode_size_bytes) / 4;
 FUNC_0(VAR_2, 0);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_0(VAR_3, FUNC_4(VAR_8++));
 FUNC_0(VAR_2, 0);

 if (VAR_6->asic_type == VAR_0) {
  const struct gfx_firmware_header_v1_0 *VAR_11;

  if (!VAR_6->gfx.mec2_fw)
   return -VAR_1;

  VAR_11 = (const struct gfx_firmware_header_v1_0 *)VAR_6->gfx.mec2_fw->data;
  FUNC_1(&VAR_11->header);
  VAR_6->gfx.mec2_fw_version = FUNC_3(VAR_11->header.ucode_version);
  VAR_6->gfx.mec2_feature_version = FUNC_3(
    VAR_11->ucode_feature_version);


  VAR_8 = (const __le32 *)
   (VAR_6->gfx.mec2_fw->data +
    FUNC_3(VAR_11->header.ucode_array_offset_bytes));
  VAR_10 = FUNC_3(VAR_11->header.ucode_size_bytes) / 4;
  FUNC_0(VAR_4, 0);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
   FUNC_0(VAR_5, FUNC_4(VAR_8++));
  FUNC_0(VAR_4, 0);
 }

 return 0;
}
