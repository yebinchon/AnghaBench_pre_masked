
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_18__ {int const ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {int const jt_size; int const jt_offset; TYPE_9__ header; } ;
struct TYPE_11__ {int* cp_table_ptr; TYPE_1__* funcs; } ;
struct TYPE_17__ {TYPE_7__* mec2_fw; TYPE_6__* mec_fw; TYPE_5__* me_fw; TYPE_4__* pfp_fw; TYPE_3__* ce_fw; TYPE_2__ rlc; } ;
struct amdgpu_device {TYPE_8__ gfx; } ;
typedef int __le32 ;
struct TYPE_16__ {int data; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_14__ {int data; } ;
struct TYPE_13__ {int data; } ;
struct TYPE_12__ {int data; } ;
struct TYPE_10__ {int (* get_cp_table_num ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct amdgpu_device*) ;

void FUNC_3(struct amdgpu_device *VAR_0)
{
 const __le32 *VAR_1;
 volatile u32 *VAR_2;
 int VAR_3, VAR_4, VAR_5;
 u32 VAR_6 = 0;
 u32 VAR_7, VAR_8;

 VAR_5 = VAR_0->gfx.rlc.funcs->get_cp_table_num(VAR_0);


 VAR_2 = VAR_0->gfx.rlc.cp_table_ptr;
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  if (VAR_3 == 0) {
   const struct gfx_firmware_header_v1_0 *VAR_9 =
    (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.ce_fw->data;
   VAR_1 = (const __le32 *)
    (VAR_0->gfx.ce_fw->data +
     FUNC_1(VAR_9->header.ucode_array_offset_bytes));
   VAR_7 = FUNC_1(VAR_9->jt_offset);
   VAR_8 = FUNC_1(VAR_9->jt_size);
  } else if (VAR_3 == 1) {
   const struct gfx_firmware_header_v1_0 *VAR_10 =
    (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.pfp_fw->data;
   VAR_1 = (const __le32 *)
    (VAR_0->gfx.pfp_fw->data +
     FUNC_1(VAR_10->header.ucode_array_offset_bytes));
   VAR_7 = FUNC_1(VAR_10->jt_offset);
   VAR_8 = FUNC_1(VAR_10->jt_size);
  } else if (VAR_3 == 2) {
   const struct gfx_firmware_header_v1_0 *VAR_11 =
    (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.me_fw->data;
   VAR_1 = (const __le32 *)
    (VAR_0->gfx.me_fw->data +
     FUNC_1(VAR_11->header.ucode_array_offset_bytes));
   VAR_7 = FUNC_1(VAR_11->jt_offset);
   VAR_8 = FUNC_1(VAR_11->jt_size);
  } else if (VAR_3 == 3) {
   const struct gfx_firmware_header_v1_0 *VAR_12 =
    (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.mec_fw->data;
   VAR_1 = (const __le32 *)
    (VAR_0->gfx.mec_fw->data +
     FUNC_1(VAR_12->header.ucode_array_offset_bytes));
   VAR_7 = FUNC_1(VAR_12->jt_offset);
   VAR_8 = FUNC_1(VAR_12->jt_size);
  } else if (VAR_3 == 4) {
   const struct gfx_firmware_header_v1_0 *VAR_13 =
    (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.mec2_fw->data;
   VAR_1 = (const __le32 *)
    (VAR_0->gfx.mec2_fw->data +
     FUNC_1(VAR_13->header.ucode_array_offset_bytes));
   VAR_7 = FUNC_1(VAR_13->jt_offset);
   VAR_8 = FUNC_1(VAR_13->jt_size);
  }

  for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4 ++) {
   VAR_2[VAR_6 + VAR_4] =
    FUNC_0(FUNC_1(VAR_1[VAR_7 + VAR_4]));
  }

  VAR_6 += VAR_8;
 }
}
