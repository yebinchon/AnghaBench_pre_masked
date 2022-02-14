
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct sdma_firmware_header_v1_0 {TYPE_2__ header; } ;
struct radeon_device {TYPE_1__* sdma_fw; scalar_t__ new_fw; } ;
typedef int __le32 ;
typedef int __be32 ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_7)
{
 int VAR_8;

 if (!VAR_7->sdma_fw)
  return -VAR_2;


 FUNC_2(VAR_7, 0);

 if (VAR_7->new_fw) {
  const struct sdma_firmware_header_v1_0 *VAR_9 =
   (const struct sdma_firmware_header_v1_0 *)VAR_7->sdma_fw->data;
  const __le32 *VAR_10;
  u32 VAR_11;

  FUNC_5(&VAR_9->header);


  VAR_10 = (const __le32 *)
   (VAR_7->sdma_fw->data + FUNC_3(VAR_9->header.ucode_array_offset_bytes));
  VAR_11 = FUNC_3(VAR_9->header.ucode_size_bytes) / 4;
  FUNC_0(VAR_4 + VAR_3, 0);
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
   FUNC_0(VAR_5 + VAR_3, FUNC_4(VAR_10++));
  FUNC_0(VAR_5 + VAR_3, VAR_1);


  VAR_10 = (const __le32 *)
   (VAR_7->sdma_fw->data + FUNC_3(VAR_9->header.ucode_array_offset_bytes));
  VAR_11 = FUNC_3(VAR_9->header.ucode_size_bytes) / 4;
  FUNC_0(VAR_4 + VAR_6, 0);
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
   FUNC_0(VAR_5 + VAR_6, FUNC_4(VAR_10++));
  FUNC_0(VAR_5 + VAR_6, VAR_1);
 } else {
  const __be32 *VAR_12;


  VAR_12 = (const __be32 *)VAR_7->sdma_fw->data;
  FUNC_0(VAR_4 + VAR_3, 0);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   FUNC_0(VAR_5 + VAR_3, FUNC_1(VAR_12++));
  FUNC_0(VAR_5 + VAR_3, VAR_1);


  VAR_12 = (const __be32 *)VAR_7->sdma_fw->data;
  FUNC_0(VAR_4 + VAR_6, 0);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   FUNC_0(VAR_5 + VAR_6, FUNC_1(VAR_12++));
  FUNC_0(VAR_5 + VAR_6, VAR_1);
 }

 FUNC_0(VAR_4 + VAR_3, 0);
 FUNC_0(VAR_4 + VAR_6, 0);
 return 0;
}
