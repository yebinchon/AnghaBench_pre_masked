
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int* cp_table_ptr; } ;
struct radeon_device {scalar_t__ family; TYPE_7__* mec_fw; TYPE_6__* me_fw; TYPE_5__* pfp_fw; TYPE_4__* ce_fw; TYPE_2__* mec2_fw; scalar_t__ new_fw; TYPE_1__ rlc; } ;
struct TYPE_10__ {int const ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {int const jt_size; int const jt_offset; TYPE_3__ header; } ;
typedef int __le32 ;
typedef int __be32 ;
struct TYPE_14__ {int data; } ;
struct TYPE_13__ {int data; } ;
struct TYPE_12__ {int data; } ;
struct TYPE_11__ {int data; } ;
struct TYPE_9__ {int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const) ;

void FUNC_3(struct radeon_device *VAR_4)
{
 volatile u32 *VAR_5;
 int VAR_6, VAR_7, VAR_8 = 4;
 u32 VAR_9 = 0;
 u32 VAR_10, VAR_11;

 if (VAR_4->family == VAR_0)
  VAR_8 = 5;

 if (VAR_4->rlc.cp_table_ptr == ((void*)0))
  return;


 VAR_5 = VAR_4->rlc.cp_table_ptr;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  if (VAR_4->new_fw) {
   const __le32 *VAR_12;
   const struct gfx_firmware_header_v1_0 *VAR_13;

   if (VAR_6 == 0) {
    VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_4->ce_fw->data;
    VAR_12 = (const __le32 *)
     (VAR_4->ce_fw->data + FUNC_2(VAR_13->header.ucode_array_offset_bytes));
    VAR_10 = FUNC_2(VAR_13->jt_offset);
    VAR_11 = FUNC_2(VAR_13->jt_size);
   } else if (VAR_6 == 1) {
    VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_4->pfp_fw->data;
    VAR_12 = (const __le32 *)
     (VAR_4->pfp_fw->data + FUNC_2(VAR_13->header.ucode_array_offset_bytes));
    VAR_10 = FUNC_2(VAR_13->jt_offset);
    VAR_11 = FUNC_2(VAR_13->jt_size);
   } else if (VAR_6 == 2) {
    VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_4->me_fw->data;
    VAR_12 = (const __le32 *)
     (VAR_4->me_fw->data + FUNC_2(VAR_13->header.ucode_array_offset_bytes));
    VAR_10 = FUNC_2(VAR_13->jt_offset);
    VAR_11 = FUNC_2(VAR_13->jt_size);
   } else if (VAR_6 == 3) {
    VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_4->mec_fw->data;
    VAR_12 = (const __le32 *)
     (VAR_4->mec_fw->data + FUNC_2(VAR_13->header.ucode_array_offset_bytes));
    VAR_10 = FUNC_2(VAR_13->jt_offset);
    VAR_11 = FUNC_2(VAR_13->jt_size);
   } else {
    VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_4->mec2_fw->data;
    VAR_12 = (const __le32 *)
     (VAR_4->mec2_fw->data + FUNC_2(VAR_13->header.ucode_array_offset_bytes));
    VAR_10 = FUNC_2(VAR_13->jt_offset);
    VAR_11 = FUNC_2(VAR_13->jt_size);
   }

   for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7 ++) {
    VAR_5[VAR_9 + VAR_7] =
     FUNC_1(FUNC_2(VAR_12[VAR_10 + VAR_7]));
   }
   VAR_9 += VAR_11;
  } else {
   const __be32 *VAR_14;
   VAR_11 = VAR_3;

   if (VAR_6 == 0) {
    VAR_14 = (const __be32 *)VAR_4->ce_fw->data;
    VAR_10 = VAR_2;
   } else if (VAR_6 == 1) {
    VAR_14 = (const __be32 *)VAR_4->pfp_fw->data;
    VAR_10 = VAR_2;
   } else if (VAR_6 == 2) {
    VAR_14 = (const __be32 *)VAR_4->me_fw->data;
    VAR_10 = VAR_2;
   } else {
    VAR_14 = (const __be32 *)VAR_4->mec_fw->data;
    VAR_10 = VAR_1;
   }

   for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7 ++) {
    VAR_5[VAR_9 + VAR_7] =
     FUNC_1(FUNC_0(VAR_14[VAR_10 + VAR_7]));
   }
   VAR_9 += VAR_11;
  }
 }
}
