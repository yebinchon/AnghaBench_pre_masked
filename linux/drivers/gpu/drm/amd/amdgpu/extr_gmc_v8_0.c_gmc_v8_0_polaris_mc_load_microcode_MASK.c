
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_6)
{
 const struct mc_firmware_header_v1_0 *VAR_7;
 const __le32 *VAR_8 = ((void*)0);
 const __le32 *VAR_9 = ((void*)0);
 u32 VAR_10;
 int VAR_11, VAR_12, VAR_13;






 if (FUNC_2(VAR_6))
  return 0;

 if (!VAR_6->gmc.fw)
  return -VAR_0;

 VAR_7 = (const struct mc_firmware_header_v1_0 *)VAR_6->gmc.fw->data;
 FUNC_3(&VAR_7->header);

 VAR_6->gmc.fw_version = FUNC_4(VAR_7->header.ucode_version);
 VAR_13 = FUNC_4(VAR_7->io_debug_size_bytes) / (4 * 2);
 VAR_9 = (const __le32 *)
  (VAR_6->gmc.fw->data + FUNC_4(VAR_7->io_debug_array_offset_bytes));
 VAR_12 = FUNC_4(VAR_7->header.ucode_size_bytes) / 4;
 VAR_8 = (const __le32 *)
  (VAR_6->gmc.fw->data + FUNC_4(VAR_7->header.ucode_array_offset_bytes));

 VAR_10 = FUNC_0(VAR_3);
 VAR_10 &= ~(0x40);
 FUNC_1(VAR_3, VAR_10);


 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
  FUNC_1(VAR_2, FUNC_5(VAR_9++));
  FUNC_1(VAR_1, FUNC_5(VAR_9++));
 }

 FUNC_1(VAR_4, 0x00000008);
 FUNC_1(VAR_4, 0x00000010);


 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  FUNC_1(VAR_5, FUNC_5(VAR_8++));


 FUNC_1(VAR_4, 0x00000008);
 FUNC_1(VAR_4, 0x00000004);
 FUNC_1(VAR_4, 0x00000001);


 for (VAR_11 = 0; VAR_11 < VAR_6->usec_timeout; VAR_11++) {
  VAR_10 = FUNC_0(VAR_3);
  if (VAR_10 & 0x80)
   break;
  FUNC_6(1);
 }

 return 0;
}
