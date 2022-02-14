
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_10__ {int ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {unsigned int jt_size; int jt_offset; TYPE_5__ header; } ;
struct TYPE_8__ {int mec_fw_gpu_addr; } ;
struct TYPE_9__ {int mec_fw_version; TYPE_3__ mec; TYPE_1__* mec_fw; } ;
struct amdgpu_device {TYPE_4__ gfx; TYPE_2__* nbio_funcs; int dev; } ;
typedef int __le32 ;
struct TYPE_7__ {int (* hdp_flush ) (struct amdgpu_device*,int *) ;} ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ,int) ;
 unsigned int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int const*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (struct amdgpu_device*,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_16)
{
 const struct gfx_firmware_header_v1_0 *VAR_17;
 const __le32 *VAR_18;
 unsigned VAR_19;
 u32 VAR_20;
 u32 VAR_21 = 50000;

 if (!VAR_16->gfx.mec_fw)
  return -VAR_4;

 FUNC_6(VAR_16, 0);

 VAR_17 = (const struct gfx_firmware_header_v1_0 *)VAR_16->gfx.mec_fw->data;
 FUNC_4(&VAR_17->header);

 VAR_18 = (const __le32 *)
  (VAR_16->gfx.mec_fw->data +
   FUNC_7(VAR_17->header.ucode_array_offset_bytes));


 VAR_20 = FUNC_2(VAR_6, 0, VAR_13);
 VAR_20 = FUNC_1(VAR_20, VAR_3, VAR_7, 1);
 FUNC_3(VAR_6, 0, VAR_13, VAR_20);


 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  VAR_20 = FUNC_2(VAR_6, 0, VAR_13);
  if (1 == FUNC_0(VAR_20, VAR_3,
           VAR_8))
   break;
  FUNC_10(1);
 }

 if (VAR_19 >= VAR_21) {
  FUNC_5(VAR_16->dev, "failed to invalidate instruction cache\n");
  return -VAR_4;
 }

 if (VAR_9 == 1)
  VAR_16->nbio_funcs->hdp_flush(VAR_16, ((void*)0));

 VAR_20 = FUNC_2(VAR_6, 0, VAR_10);
 VAR_20 = FUNC_1(VAR_20, VAR_2, VAR_1, 0);
 VAR_20 = FUNC_1(VAR_20, VAR_2, VAR_5, 0);
 VAR_20 = FUNC_1(VAR_20, VAR_2, VAR_0, 1);
 FUNC_3(VAR_6, 0, VAR_10, VAR_20);

 FUNC_3(VAR_6, 0, VAR_12, VAR_16->gfx.mec.mec_fw_gpu_addr &
       0xFFFFF000);
 FUNC_3(VAR_6, 0, VAR_11,
       FUNC_11(VAR_16->gfx.mec.mec_fw_gpu_addr));


 FUNC_3(VAR_6, 0, VAR_14, 0);

 for (VAR_19 = 0; VAR_19 < VAR_17->jt_size; VAR_19++)
  FUNC_3(VAR_6, 0, VAR_15,
        FUNC_8(VAR_18 + VAR_17->jt_offset + VAR_19));

 FUNC_3(VAR_6, 0, VAR_14, VAR_16->gfx.mec_fw_version);






 return 0;
}
