
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; } ;
struct mc_firmware_header_v1_0 {TYPE_3__ header; int io_debug_array_offset_bytes; int io_debug_size_bytes; } ;
struct TYPE_5__ {int fw_version; TYPE_1__* fw; } ;
struct amdgpu_device {int usec_timeout; TYPE_2__ gmc; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_11)
{
 const struct mc_firmware_header_v1_0 *VAR_12;
 const __le32 *VAR_13 = ((void*)0);
 const __le32 *VAR_14 = ((void*)0);
 u32 VAR_15;
 int VAR_16, VAR_17, VAR_18;






 if (FUNC_3(VAR_11))
  return 0;

 if (!VAR_11->gmc.fw)
  return -VAR_0;

 VAR_12 = (const struct mc_firmware_header_v1_0 *)VAR_11->gmc.fw->data;
 FUNC_4(&VAR_12->header);

 VAR_11->gmc.fw_version = FUNC_5(VAR_12->header.ucode_version);
 VAR_18 = FUNC_5(VAR_12->io_debug_size_bytes) / (4 * 2);
 VAR_14 = (const __le32 *)
  (VAR_11->gmc.fw->data + FUNC_5(VAR_12->io_debug_array_offset_bytes));
 VAR_17 = FUNC_5(VAR_12->header.ucode_size_bytes) / 4;
 VAR_13 = (const __le32 *)
  (VAR_11->gmc.fw->data + FUNC_5(VAR_12->header.ucode_array_offset_bytes));

 VAR_15 = FUNC_0(FUNC_1(VAR_8), VAR_1, VAR_3);

 if (VAR_15 == 0) {

  FUNC_2(VAR_8, 0x00000008);
  FUNC_2(VAR_8, 0x00000010);


  for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
   FUNC_2(VAR_7, FUNC_6(VAR_14++));
   FUNC_2(VAR_6, FUNC_6(VAR_14++));
  }

  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   FUNC_2(VAR_9, FUNC_6(VAR_13++));


  FUNC_2(VAR_8, 0x00000008);
  FUNC_2(VAR_8, 0x00000004);
  FUNC_2(VAR_8, 0x00000001);


  for (VAR_16 = 0; VAR_16 < VAR_11->usec_timeout; VAR_16++) {
   if (FUNC_0(FUNC_1(VAR_10),
       VAR_2, VAR_4))
    break;
   FUNC_7(1);
  }
  for (VAR_16 = 0; VAR_16 < VAR_11->usec_timeout; VAR_16++) {
   if (FUNC_0(FUNC_1(VAR_10),
       VAR_2, VAR_5))
    break;
   FUNC_7(1);
  }
 }

 return 0;
}
