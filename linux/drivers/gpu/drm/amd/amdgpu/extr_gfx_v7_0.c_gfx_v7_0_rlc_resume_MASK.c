
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int ucode_size_bytes; int ucode_array_offset_bytes; int ucode_version; } ;
struct rlc_firmware_header_v1_0 {TYPE_5__ header; int ucode_feature_version; } ;
struct TYPE_8__ {TYPE_2__* funcs; } ;
struct TYPE_9__ {int rlc_fw_version; int rlc_feature_version; TYPE_3__ rlc; TYPE_1__* rlc_fw; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_4__ gfx; int grbm_idx_mutex; } ;
typedef int __le32 ;
struct TYPE_7__ {int (* start ) (struct amdgpu_device*) ;int (* reset ) (struct amdgpu_device*) ;int (* stop ) (struct amdgpu_device*) ;} ;
struct TYPE_6__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_device *VAR_13)
{
 const struct rlc_firmware_header_v1_0 *VAR_14;
 const __le32 *VAR_15;
 unsigned VAR_16, VAR_17;
 u32 VAR_18;

 if (!VAR_13->gfx.rlc_fw)
  return -VAR_1;

 VAR_14 = (const struct rlc_firmware_header_v1_0 *)VAR_13->gfx.rlc_fw->data;
 FUNC_2(&VAR_14->header);
 VAR_13->gfx.rlc_fw_version = FUNC_6(VAR_14->header.ucode_version);
 VAR_13->gfx.rlc_feature_version = FUNC_6(
     VAR_14->ucode_feature_version);

 VAR_13->gfx.rlc.funcs->stop(VAR_13);


 VAR_18 = FUNC_0(VAR_2) & 0xfffffffc;
 FUNC_1(VAR_2, VAR_18);

 VAR_13->gfx.rlc.funcs->reset(VAR_13);

 FUNC_4(VAR_13);

 FUNC_1(VAR_7, 0);
 FUNC_1(VAR_8, 0x00008000);

 FUNC_8(&VAR_13->grbm_idx_mutex);
 FUNC_5(VAR_13, 0xffffffff, 0xffffffff, 0xffffffff);
 FUNC_1(VAR_9, 0xffffffff);
 FUNC_1(VAR_10, 0x00600408);
 FUNC_1(VAR_6, 0x80000004);
 FUNC_9(&VAR_13->grbm_idx_mutex);

 FUNC_1(VAR_11, 0);
 FUNC_1(VAR_12, 0);

 VAR_15 = (const __le32 *)
  (VAR_13->gfx.rlc_fw->data + FUNC_6(VAR_14->header.ucode_array_offset_bytes));
 VAR_17 = FUNC_6(VAR_14->header.ucode_size_bytes) / 4;
 FUNC_1(VAR_4, 0);
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
  FUNC_1(VAR_5, FUNC_7(VAR_15++));
 FUNC_1(VAR_4, VAR_13->gfx.rlc_fw_version);


 FUNC_3(VAR_13, 0);

 if (VAR_13->asic_type == VAR_0)
  FUNC_1(VAR_3, 0);

 VAR_13->gfx.rlc.funcs->start(VAR_13);

 return 0;
}
