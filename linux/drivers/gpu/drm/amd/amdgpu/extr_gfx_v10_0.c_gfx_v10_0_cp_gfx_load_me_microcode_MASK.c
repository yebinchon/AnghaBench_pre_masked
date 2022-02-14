
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_10__ {int ucode_size_bytes; int ucode_array_offset_bytes; } ;
struct gfx_firmware_header_v1_0 {TYPE_5__ header; } ;
struct TYPE_8__ {int me_fw_gpu_addr; int me_fw_obj; int me_fw_ptr; } ;
struct TYPE_9__ {TYPE_3__ me; TYPE_1__* me_fw; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ,int) ;
 unsigned int FUNC_2 (int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct amdgpu_device*,int ,int ,int ,int *,int*,void**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct amdgpu_device*) ;
 unsigned int FUNC_10 (int ) ;
 int FUNC_11 (int ,int const*,unsigned int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (struct amdgpu_device*,int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct amdgpu_device *VAR_17)
{
 int VAR_18;
 const struct gfx_firmware_header_v1_0 *VAR_19;
 const __le32 *VAR_20;
 unsigned VAR_21, VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24 = 50000;

 VAR_19 = (const struct gfx_firmware_header_v1_0 *)
  VAR_17->gfx.me_fw->data;

 FUNC_7(&VAR_19->header);

 VAR_20 = (const __le32 *)(VAR_17->gfx.me_fw->data +
  FUNC_10(VAR_19->header.ucode_array_offset_bytes));
 VAR_22 = FUNC_10(VAR_19->header.ucode_size_bytes);

 VAR_18 = FUNC_4(VAR_17, VAR_19->header.ucode_size_bytes,
          VAR_10, VAR_1,
          &VAR_17->gfx.me.me_fw_obj,
          &VAR_17->gfx.me.me_fw_gpu_addr,
          (void **)&VAR_17->gfx.me.me_fw_ptr);
 if (VAR_18) {
  FUNC_8(VAR_17->dev, "(%d) failed to create me fw bo\n", VAR_18);
  FUNC_9(VAR_17);
  return VAR_18;
 }

 FUNC_11(VAR_17->gfx.me.me_fw_ptr, VAR_20, VAR_22);

 FUNC_5(VAR_17->gfx.me.me_fw_obj);
 FUNC_6(VAR_17->gfx.me.me_fw_obj);


 VAR_23 = FUNC_2(VAR_7, 0, VAR_16);
 VAR_23 = FUNC_1(VAR_23, VAR_4, VAR_8, 1);
 FUNC_3(VAR_7, 0, VAR_16, VAR_23);


 for (VAR_21 = 0; VAR_21 < VAR_24; VAR_21++) {
  VAR_23 = FUNC_2(VAR_7, 0, VAR_16);
  if (1 == FUNC_0(VAR_23, VAR_4,
   VAR_9))
   break;
  FUNC_13(1);
 }

 if (VAR_21 >= VAR_24) {
  FUNC_8(VAR_17->dev, "failed to invalidate instruction cache\n");
  return -VAR_5;
 }

 if (VAR_12 == 1)
  VAR_17->nbio_funcs->hdp_flush(VAR_17, ((void*)0));

 VAR_23 = FUNC_2(VAR_7, 0, VAR_13);
 VAR_23 = FUNC_1(VAR_23, VAR_3, VAR_11, 0);
 VAR_23 = FUNC_1(VAR_23, VAR_3, VAR_2, 0);
 VAR_23 = FUNC_1(VAR_23, VAR_3, VAR_6, 0);
 VAR_23 = FUNC_1(VAR_23, VAR_3, VAR_0, 1);
 FUNC_3(VAR_7, 0, VAR_15,
  VAR_17->gfx.me.me_fw_gpu_addr & 0xFFFFF000);
 FUNC_3(VAR_7, 0, VAR_14,
  FUNC_14(VAR_17->gfx.me.me_fw_gpu_addr));

 return 0;
}
