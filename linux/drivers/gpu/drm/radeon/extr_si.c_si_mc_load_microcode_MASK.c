
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int family; int usec_timeout; scalar_t__ new_fw; TYPE_1__* mc_fw; } ;
struct TYPE_4__ {int ucode_array_offset_bytes; int ucode_size_bytes; } ;
struct mc_firmware_header_v1_0 {TYPE_2__ header; int io_debug_array_offset_bytes; int io_debug_size_bytes; } ;
typedef int __le32 ;
typedef int __be32 ;
struct TYPE_3__ {int size; scalar_t__ data; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_6 (int) ;
 int VAR_14 ;

int FUNC_7(struct radeon_device *VAR_15)
{
 const __be32 *VAR_16 = ((void*)0);
 const __le32 *VAR_17 = ((void*)0);
 u32 VAR_18;
 u32 *VAR_19 = ((void*)0);
 const __le32 *VAR_20 = ((void*)0);
 int VAR_21, VAR_22, VAR_23;

 if (!VAR_15->mc_fw)
  return -VAR_0;

 if (VAR_15->new_fw) {
  const struct mc_firmware_header_v1_0 *VAR_24 =
   (const struct mc_firmware_header_v1_0 *)VAR_15->mc_fw->data;

  FUNC_5(&VAR_24->header);
  VAR_22 = FUNC_3(VAR_24->io_debug_size_bytes) / (4 * 2);
  VAR_20 = (const __le32 *)
   (VAR_15->mc_fw->data + FUNC_3(VAR_24->io_debug_array_offset_bytes));
  VAR_23 = FUNC_3(VAR_24->header.ucode_size_bytes) / 4;
  VAR_17 = (const __le32 *)
   (VAR_15->mc_fw->data + FUNC_3(VAR_24->header.ucode_array_offset_bytes));
 } else {
  VAR_23 = VAR_15->mc_fw->size / 4;

  switch (VAR_15->family) {
  case 129:
   VAR_19 = (u32 *)&VAR_13;
   VAR_22 = VAR_7;
   break;
  case 130:
   VAR_19 = (u32 *)&VAR_12;
   VAR_22 = VAR_7;
   break;
  case 128:
  default:
   VAR_19 = (u32 *)&VAR_14;
   VAR_22 = VAR_7;
   break;
  case 131:
   VAR_19 = (u32 *)&VAR_11;
   VAR_22 = VAR_7;
   break;
  case 132:
   VAR_19 = (u32 *)&VAR_10;
   VAR_22 = VAR_7;
   break;
  }
  VAR_16 = (const __be32 *)VAR_15->mc_fw->data;
 }

 VAR_18 = FUNC_0(VAR_3) & VAR_6;

 if (VAR_18 == 0) {

  FUNC_1(VAR_3, 0x00000008);
  FUNC_1(VAR_3, 0x00000010);


  for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
   if (VAR_15->new_fw) {
    FUNC_1(VAR_2, FUNC_4(VAR_20++));
    FUNC_1(VAR_1, FUNC_4(VAR_20++));
   } else {
    FUNC_1(VAR_2, VAR_19[(VAR_21 << 1)]);
    FUNC_1(VAR_1, VAR_19[(VAR_21 << 1) + 1]);
   }
  }

  for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
   if (VAR_15->new_fw)
    FUNC_1(VAR_4, FUNC_4(VAR_17++));
   else
    FUNC_1(VAR_4, FUNC_2(VAR_16++));
  }


  FUNC_1(VAR_3, 0x00000008);
  FUNC_1(VAR_3, 0x00000004);
  FUNC_1(VAR_3, 0x00000001);


  for (VAR_21 = 0; VAR_21 < VAR_15->usec_timeout; VAR_21++) {
   if (FUNC_0(VAR_5) & VAR_8)
    break;
   FUNC_6(1);
  }
  for (VAR_21 = 0; VAR_21 < VAR_15->usec_timeout; VAR_21++) {
   if (FUNC_0(VAR_5) & VAR_9)
    break;
   FUNC_6(1);
  }
 }

 return 0;
}
