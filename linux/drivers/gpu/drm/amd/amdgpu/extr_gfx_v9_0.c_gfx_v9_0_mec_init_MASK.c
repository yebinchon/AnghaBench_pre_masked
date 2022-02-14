
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {size_t ucode_array_offset_bytes; size_t ucode_size_bytes; } ;
struct gfx_firmware_header_v1_0 {TYPE_4__ header; } ;
struct TYPE_14__ {TYPE_7__* mec_fw_obj; int mec_fw_gpu_addr; TYPE_7__* hpd_eop_obj; int hpd_eop_gpu_addr; int queue_bitmap; } ;
struct TYPE_15__ {size_t num_compute_rings; TYPE_5__ mec; TYPE_3__* mec_fw; } ;
struct amdgpu_device {TYPE_6__ gfx; int dev; } ;
typedef int __le32 ;
struct TYPE_10__ {int size; } ;
struct TYPE_11__ {TYPE_1__ mem; } ;
struct TYPE_16__ {TYPE_2__ tbo; } ;
struct TYPE_12__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,size_t,int ,int ,TYPE_7__**,int *,void**) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int *,int const*,unsigned int) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_5)
{
 int VAR_6;
 u32 *VAR_7;
 const __le32 *VAR_8;
 unsigned VAR_9;
 u32 *VAR_10;
 size_t VAR_11;

 const struct gfx_firmware_header_v1_0 *VAR_12;

 FUNC_4(VAR_5->gfx.mec.queue_bitmap, VAR_2);


 FUNC_3(VAR_5);
 VAR_11 = VAR_5->gfx.num_compute_rings * VAR_3;

 VAR_6 = FUNC_0(VAR_5, VAR_11, VAR_4,
          VAR_1,
          &VAR_5->gfx.mec.hpd_eop_obj,
          &VAR_5->gfx.mec.hpd_eop_gpu_addr,
          (void **)&VAR_7);
 if (VAR_6) {
  FUNC_5(VAR_5->dev, "(%d) create HDP EOP bo failed\n", VAR_6);
  FUNC_6(VAR_5);
  return VAR_6;
 }

 FUNC_9(VAR_7, 0, VAR_5->gfx.mec.hpd_eop_obj->tbo.mem.size);

 FUNC_1(VAR_5->gfx.mec.hpd_eop_obj);
 FUNC_2(VAR_5->gfx.mec.hpd_eop_obj);

 VAR_12 = (const struct gfx_firmware_header_v1_0 *)VAR_5->gfx.mec_fw->data;

 VAR_8 = (const __le32 *)
  (VAR_5->gfx.mec_fw->data +
   FUNC_7(VAR_12->header.ucode_array_offset_bytes));
 VAR_9 = FUNC_7(VAR_12->header.ucode_size_bytes) / 4;

 VAR_6 = FUNC_0(VAR_5, VAR_12->header.ucode_size_bytes,
          VAR_4, VAR_0,
          &VAR_5->gfx.mec.mec_fw_obj,
          &VAR_5->gfx.mec.mec_fw_gpu_addr,
          (void **)&VAR_10);
 if (VAR_6) {
  FUNC_5(VAR_5->dev, "(%d) create mec firmware bo failed\n", VAR_6);
  FUNC_6(VAR_5);
  return VAR_6;
 }

 FUNC_8(VAR_10, VAR_8, VAR_9);

 FUNC_1(VAR_5->gfx.mec.mec_fw_obj);
 FUNC_2(VAR_5->gfx.mec.mec_fw_obj);

 return 0;
}
