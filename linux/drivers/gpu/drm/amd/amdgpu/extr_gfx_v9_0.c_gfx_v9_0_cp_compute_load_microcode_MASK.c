
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {int jt_offset; unsigned int jt_size; TYPE_4__ header; } ;
struct TYPE_6__ {int mec_fw_gpu_addr; } ;
struct TYPE_7__ {int mec_fw_version; TYPE_2__ mec; TYPE_1__* mec_fw; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
typedef int __le32 ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_10)
{
 const struct gfx_firmware_header_v1_0 *VAR_11;
 const __le32 *VAR_12;
 unsigned VAR_13;
 u32 VAR_14;

 if (!VAR_10->gfx.mec_fw)
  return -VAR_2;

 FUNC_3(VAR_10, 0);

 VAR_11 = (const struct gfx_firmware_header_v1_0 *)VAR_10->gfx.mec_fw->data;
 FUNC_2(&VAR_11->header);

 VAR_12 = (const __le32 *)
  (VAR_10->gfx.mec_fw->data +
   FUNC_4(VAR_11->header.ucode_array_offset_bytes));
 VAR_14 = 0;
 VAR_14 = FUNC_0(VAR_14, VAR_1, VAR_4, 0);
 VAR_14 = FUNC_0(VAR_14, VAR_1, VAR_0, 0);
 FUNC_1(VAR_3, 0, VAR_5, VAR_14);

 FUNC_1(VAR_3, 0, VAR_7,
  VAR_10->gfx.mec.mec_fw_gpu_addr & 0xFFFFF000);
 FUNC_1(VAR_3, 0, VAR_6,
  FUNC_6(VAR_10->gfx.mec.mec_fw_gpu_addr));


 FUNC_1(VAR_3, 0, VAR_8,
    VAR_11->jt_offset);
 for (VAR_13 = 0; VAR_13 < VAR_11->jt_size; VAR_13++)
  FUNC_1(VAR_3, 0, VAR_9,
   FUNC_5(VAR_12 + VAR_11->jt_offset + VAR_13));

 FUNC_1(VAR_3, 0, VAR_8,
   VAR_10->gfx.mec_fw_version);


 return 0;
}
