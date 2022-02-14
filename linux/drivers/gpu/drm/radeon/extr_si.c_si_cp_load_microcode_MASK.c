
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {TYPE_3__* me_fw; TYPE_2__* ce_fw; TYPE_1__* pfp_fw; scalar_t__ new_fw; } ;
struct TYPE_8__ {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {TYPE_4__ header; } ;
typedef int __le32 ;
typedef int __be32 ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct radeon_device*,int) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_11)
{
 int VAR_12;

 if (!VAR_11->me_fw || !VAR_11->pfp_fw || !VAR_11->ce_fw)
  return -VAR_7;

 FUNC_5(VAR_11, 0);

 if (VAR_11->new_fw) {
  const struct gfx_firmware_header_v1_0 *VAR_13 =
   (const struct gfx_firmware_header_v1_0 *)VAR_11->pfp_fw->data;
  const struct gfx_firmware_header_v1_0 *VAR_14 =
   (const struct gfx_firmware_header_v1_0 *)VAR_11->ce_fw->data;
  const struct gfx_firmware_header_v1_0 *VAR_15 =
   (const struct gfx_firmware_header_v1_0 *)VAR_11->me_fw->data;
  const __le32 *VAR_16;
  u32 VAR_17;

  FUNC_4(&VAR_13->header);
  FUNC_4(&VAR_14->header);
  FUNC_4(&VAR_15->header);


  VAR_16 = (const __le32 *)
   (VAR_11->pfp_fw->data + FUNC_2(VAR_13->header.ucode_array_offset_bytes));
  VAR_17 = FUNC_2(VAR_13->header.ucode_size_bytes) / 4;
  FUNC_0(VAR_5, 0);
  for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++)
   FUNC_0(VAR_6, FUNC_3(VAR_16++));
  FUNC_0(VAR_5, 0);


  VAR_16 = (const __le32 *)
   (VAR_11->ce_fw->data + FUNC_2(VAR_14->header.ucode_array_offset_bytes));
  VAR_17 = FUNC_2(VAR_14->header.ucode_size_bytes) / 4;
  FUNC_0(VAR_0, 0);
  for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++)
   FUNC_0(VAR_1, FUNC_3(VAR_16++));
  FUNC_0(VAR_0, 0);


  VAR_16 = (const __be32 *)
   (VAR_11->me_fw->data + FUNC_2(VAR_15->header.ucode_array_offset_bytes));
  VAR_17 = FUNC_2(VAR_15->header.ucode_size_bytes) / 4;
  FUNC_0(VAR_4, 0);
  for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++)
   FUNC_0(VAR_2, FUNC_3(VAR_16++));
  FUNC_0(VAR_4, 0);
 } else {
  const __be32 *VAR_18;


  VAR_18 = (const __be32 *)VAR_11->pfp_fw->data;
  FUNC_0(VAR_5, 0);
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
   FUNC_0(VAR_6, FUNC_1(VAR_18++));
  FUNC_0(VAR_5, 0);


  VAR_18 = (const __be32 *)VAR_11->ce_fw->data;
  FUNC_0(VAR_0, 0);
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
   FUNC_0(VAR_1, FUNC_1(VAR_18++));
  FUNC_0(VAR_0, 0);


  VAR_18 = (const __be32 *)VAR_11->me_fw->data;
  FUNC_0(VAR_4, 0);
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
   FUNC_0(VAR_2, FUNC_1(VAR_18++));
  FUNC_0(VAR_4, 0);
 }

 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_3, 0);
 return 0;
}
