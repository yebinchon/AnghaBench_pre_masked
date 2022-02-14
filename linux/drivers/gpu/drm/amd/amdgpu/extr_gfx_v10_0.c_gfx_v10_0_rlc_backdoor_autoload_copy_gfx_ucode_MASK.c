
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_13__ {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct rlc_firmware_header_v2_0 {TYPE_5__ header; } ;
struct TYPE_16__ {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {int jt_size; TYPE_8__ header; } ;
struct TYPE_15__ {TYPE_6__* mec_fw; TYPE_4__* rlc_fw; TYPE_3__* me_fw; TYPE_2__* ce_fw; TYPE_1__* pfp_fw; } ;
struct amdgpu_device {TYPE_7__ gfx; } ;
typedef int __le32 ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,int ,int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5)
{
 const __le32 *VAR_6;
 uint32_t VAR_7;
 const struct gfx_firmware_header_v1_0 *VAR_8;
 const struct rlc_firmware_header_v2_0 *VAR_9;


 VAR_8 = (const struct gfx_firmware_header_v1_0 *)
  VAR_5->gfx.pfp_fw->data;
 VAR_6 = (const __le32 *)(VAR_5->gfx.pfp_fw->data +
  FUNC_1(VAR_8->header.ucode_array_offset_bytes));
 VAR_7 = FUNC_1(VAR_8->header.ucode_size_bytes);
 FUNC_0(VAR_5,
         VAR_3,
         VAR_6, VAR_7);


 VAR_8 = (const struct gfx_firmware_header_v1_0 *)
  VAR_5->gfx.ce_fw->data;
 VAR_6 = (const __le32 *)(VAR_5->gfx.ce_fw->data +
  FUNC_1(VAR_8->header.ucode_array_offset_bytes));
 VAR_7 = FUNC_1(VAR_8->header.ucode_size_bytes);
 FUNC_0(VAR_5,
         VAR_0,
         VAR_6, VAR_7);


 VAR_8 = (const struct gfx_firmware_header_v1_0 *)
  VAR_5->gfx.me_fw->data;
 VAR_6 = (const __le32 *)(VAR_5->gfx.me_fw->data +
  FUNC_1(VAR_8->header.ucode_array_offset_bytes));
 VAR_7 = FUNC_1(VAR_8->header.ucode_size_bytes);
 FUNC_0(VAR_5,
         VAR_1,
         VAR_6, VAR_7);


 VAR_9 = (const struct rlc_firmware_header_v2_0 *)
  VAR_5->gfx.rlc_fw->data;
 VAR_6 = (const __le32 *)(VAR_5->gfx.rlc_fw->data +
  FUNC_1(VAR_9->header.ucode_array_offset_bytes));
 VAR_7 = FUNC_1(VAR_9->header.ucode_size_bytes);
 FUNC_0(VAR_5,
         VAR_4,
         VAR_6, VAR_7);


 VAR_8 = (const struct gfx_firmware_header_v1_0 *)
  VAR_5->gfx.mec_fw->data;
 VAR_6 = (const __le32 *) (VAR_5->gfx.mec_fw->data +
  FUNC_1(VAR_8->header.ucode_array_offset_bytes));
 VAR_7 = FUNC_1(VAR_8->header.ucode_size_bytes) -
  VAR_8->jt_size * 4;
 FUNC_0(VAR_5,
         VAR_2,
         VAR_6, VAR_7);

}
