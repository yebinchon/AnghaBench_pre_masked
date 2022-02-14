
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {scalar_t__ family; TYPE_2__* mec_fw; TYPE_1__* mec2_fw; scalar_t__ new_fw; } ;
struct TYPE_6__ {int ucode_version; int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {TYPE_3__ header; } ;
typedef int __le32 ;
typedef int __be32 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_7)
{
 int VAR_8;

 if (!VAR_7->mec_fw)
  return -VAR_6;

 FUNC_2(VAR_7, 0);

 if (VAR_7->new_fw) {
  const struct gfx_firmware_header_v1_0 *VAR_9 =
   (const struct gfx_firmware_header_v1_0 *)VAR_7->mec_fw->data;
  const __le32 *VAR_10;
  u32 VAR_11;

  FUNC_5(&VAR_9->header);


  VAR_10 = (const __le32 *)
   (VAR_7->mec_fw->data + FUNC_3(VAR_9->header.ucode_array_offset_bytes));
  VAR_11 = FUNC_3(VAR_9->header.ucode_size_bytes) / 4;
  FUNC_0(VAR_2, 0);
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
   FUNC_0(VAR_3, FUNC_4(VAR_10++));
  FUNC_0(VAR_2, FUNC_3(VAR_9->header.ucode_version));


  if (VAR_7->family == VAR_0) {
   const struct gfx_firmware_header_v1_0 *VAR_12 =
    (const struct gfx_firmware_header_v1_0 *)VAR_7->mec2_fw->data;

   VAR_10 = (const __le32 *)
    (VAR_7->mec2_fw->data +
     FUNC_3(VAR_12->header.ucode_array_offset_bytes));
   VAR_11 = FUNC_3(VAR_12->header.ucode_size_bytes) / 4;
   FUNC_0(VAR_4, 0);
   for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
    FUNC_0(VAR_5, FUNC_4(VAR_10++));
   FUNC_0(VAR_4, FUNC_3(VAR_12->header.ucode_version));
  }
 } else {
  const __be32 *VAR_13;


  VAR_13 = (const __be32 *)VAR_7->mec_fw->data;
  FUNC_0(VAR_2, 0);
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
   FUNC_0(VAR_3, FUNC_1(VAR_13++));
  FUNC_0(VAR_2, 0);

  if (VAR_7->family == VAR_0) {

   VAR_13 = (const __be32 *)VAR_7->mec_fw->data;
   FUNC_0(VAR_4, 0);
   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
    FUNC_0(VAR_5, FUNC_1(VAR_13++));
   FUNC_0(VAR_4, 0);
  }
 }

 return 0;
}
