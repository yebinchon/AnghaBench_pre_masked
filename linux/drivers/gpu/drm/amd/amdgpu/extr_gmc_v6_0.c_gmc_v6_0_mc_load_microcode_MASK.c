
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; } ;
struct mc_firmware_header_v1_0 {TYPE_3__ header; int io_debug_array_offset_bytes; int io_debug_size_bytes; } ;
struct TYPE_5__ {int fw_version; TYPE_1__* fw; } ;
struct amdgpu_device {int usec_timeout; TYPE_2__ gmc; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_9)
{
 const __le32 *VAR_10 = ((void*)0);
 u32 VAR_11;
 const __le32 *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15;
 const struct mc_firmware_header_v1_0 *VAR_16;

 if (!VAR_9->gmc.fw)
  return -VAR_0;

 VAR_16 = (const struct mc_firmware_header_v1_0 *)VAR_9->gmc.fw->data;

 FUNC_2(&VAR_16->header);

 VAR_9->gmc.fw_version = FUNC_3(VAR_16->header.ucode_version);
 VAR_14 = FUNC_3(VAR_16->io_debug_size_bytes) / (4 * 2);
 VAR_12 = (const __le32 *)
  (VAR_9->gmc.fw->data + FUNC_3(VAR_16->io_debug_array_offset_bytes));
 VAR_15 = FUNC_3(VAR_16->header.ucode_size_bytes) / 4;
 VAR_10 = (const __le32 *)
  (VAR_9->gmc.fw->data + FUNC_3(VAR_16->header.ucode_array_offset_bytes));

 VAR_11 = FUNC_0(VAR_6) & VAR_1;

 if (VAR_11 == 0) {


  FUNC_1(VAR_6, 0x00000008);
  FUNC_1(VAR_6, 0x00000010);


  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   FUNC_1(VAR_5, FUNC_4(VAR_12++));
   FUNC_1(VAR_4, FUNC_4(VAR_12++));
  }

  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
   FUNC_1(VAR_7, FUNC_4(VAR_10++));
  }


  FUNC_1(VAR_6, 0x00000008);
  FUNC_1(VAR_6, 0x00000004);
  FUNC_1(VAR_6, 0x00000001);


  for (VAR_13 = 0; VAR_13 < VAR_9->usec_timeout; VAR_13++) {
   if (FUNC_0(VAR_8) & VAR_2)
    break;
   FUNC_5(1);
  }
  for (VAR_13 = 0; VAR_13 < VAR_9->usec_timeout; VAR_13++) {
   if (FUNC_0(VAR_8) & VAR_3)
    break;
   FUNC_5(1);
  }

 }

 return 0;
}
