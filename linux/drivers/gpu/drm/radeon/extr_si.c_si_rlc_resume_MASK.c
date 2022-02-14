
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int ucode_array_offset_bytes; int ucode_size_bytes; } ;
struct rlc_firmware_header_v1_0 {TYPE_2__ header; } ;
struct radeon_device {TYPE_1__* rlc_fw; scalar_t__ new_fw; } ;
typedef int __le32 ;
typedef int __be32 ;
struct TYPE_3__ {scalar_t__ data; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct radeon_device*,int ) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_12)
{
 u32 VAR_13;

 if (!VAR_12->rlc_fw)
  return -VAR_0;

 FUNC_11(VAR_12);

 FUNC_9(VAR_12);

 FUNC_7(VAR_12);

 FUNC_6(VAR_12);

 FUNC_0(VAR_6, 0);
 FUNC_0(VAR_7, 0);
 FUNC_0(VAR_1, 0);
 FUNC_0(VAR_3, 0xffffffff);
 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_4, 0xffffffff);

 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_9, 0);

 if (VAR_12->new_fw) {
  const struct rlc_firmware_header_v1_0 *VAR_14 =
   (const struct rlc_firmware_header_v1_0 *)VAR_12->rlc_fw->data;
  u32 VAR_15 = FUNC_2(VAR_14->header.ucode_size_bytes) / 4;
  const __le32 *VAR_16 = (const __le32 *)
   (VAR_12->rlc_fw->data + FUNC_2(VAR_14->header.ucode_array_offset_bytes));

  FUNC_4(&VAR_14->header);

  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
   FUNC_0(VAR_8, VAR_13);
   FUNC_0(VAR_10, FUNC_3(VAR_16++));
  }
 } else {
  const __be32 *VAR_17 =
   (const __be32 *)VAR_12->rlc_fw->data;
  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
   FUNC_0(VAR_8, VAR_13);
   FUNC_0(VAR_10, FUNC_1(VAR_17++));
  }
 }
 FUNC_0(VAR_8, 0);

 FUNC_5(VAR_12, FUNC_8(VAR_12));

 FUNC_10(VAR_12);

 return 0;
}
