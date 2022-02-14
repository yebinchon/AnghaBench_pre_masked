
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int ucode_version; int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct rlc_firmware_header_v1_0 {TYPE_2__ header; } ;
struct radeon_device {int family; TYPE_1__* rlc_fw; scalar_t__ new_fw; } ;
typedef int __le32 ;
typedef int __be32 ;
struct TYPE_3__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;





 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_13(struct radeon_device *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19;

 if (!VAR_16->rlc_fw)
  return -VAR_1;

 FUNC_7(VAR_16);


 VAR_19 = FUNC_0(VAR_5) & 0xfffffffc;
 FUNC_1(VAR_5, VAR_19);

 FUNC_12(VAR_16);

 FUNC_5(VAR_16);

 FUNC_4(VAR_16);

 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_11, 0x00008000);

 FUNC_8(VAR_16, 0xffffffff, 0xffffffff);
 FUNC_1(VAR_12, 0xffffffff);
 FUNC_1(VAR_13, 0x00600408);
 FUNC_1(VAR_9, 0x80000004);

 FUNC_1(VAR_14, 0);
 FUNC_1(VAR_15, 0);

 if (VAR_16->new_fw) {
  const struct rlc_firmware_header_v1_0 *VAR_20 =
   (const struct rlc_firmware_header_v1_0 *)VAR_16->rlc_fw->data;
  const __le32 *VAR_21 = (const __le32 *)
   (VAR_16->rlc_fw->data + FUNC_9(VAR_20->header.ucode_array_offset_bytes));

  FUNC_11(&VAR_20->header);

  VAR_18 = FUNC_9(VAR_20->header.ucode_size_bytes) / 4;
  FUNC_1(VAR_7, 0);
  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
   FUNC_1(VAR_8, FUNC_10(VAR_21++));
  FUNC_1(VAR_7, FUNC_9(VAR_20->header.ucode_version));
 } else {
  const __be32 *VAR_22;

  switch (VAR_16->family) {
  case 132:
  case 131:
  default:
   VAR_18 = VAR_0;
   break;
  case 129:
   VAR_18 = VAR_3;
   break;
  case 130:
   VAR_18 = VAR_2;
   break;
  case 128:
   VAR_18 = VAR_4;
   break;
  }

  VAR_22 = (const __be32 *)VAR_16->rlc_fw->data;
  FUNC_1(VAR_7, 0);
  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
   FUNC_1(VAR_8, FUNC_2(VAR_22++));
  FUNC_1(VAR_7, 0);
 }


 FUNC_3(VAR_16, 0);

 if (VAR_16->family == 132)
  FUNC_1(VAR_6, 0);

 FUNC_6(VAR_16);

 return 0;
}
