
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
struct TYPE_10__ {int ucode_array_offset_bytes; int ucode_size_bytes; } ;
struct rlc_firmware_header_v1_0 {TYPE_5__ header; } ;
struct TYPE_8__ {TYPE_2__* funcs; } ;
struct TYPE_9__ {TYPE_3__ rlc; TYPE_1__* rlc_fw; } ;
struct amdgpu_device {TYPE_4__ gfx; } ;
typedef int __le32 ;
struct TYPE_7__ {int (* start ) (struct amdgpu_device*) ;int (* reset ) (struct amdgpu_device*) ;int (* stop ) (struct amdgpu_device*) ;} ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct amdgpu_device*,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
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
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_11)
{
 u32 VAR_12;
 const struct rlc_firmware_header_v1_0 *VAR_13;
 const __le32 *VAR_14;
 u32 VAR_15;


 if (!VAR_11->gfx.rlc_fw)
  return -VAR_0;

 VAR_11->gfx.rlc.funcs->stop(VAR_11);
 VAR_11->gfx.rlc.funcs->reset(VAR_11);
 FUNC_4(VAR_11);
 FUNC_3(VAR_11);

 FUNC_0(VAR_6, 0);
 FUNC_0(VAR_7, 0);
 FUNC_0(VAR_1, 0);
 FUNC_0(VAR_3, 0xffffffff);
 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_4, 0xffffffff);

 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_9, 0);

 VAR_13 = (const struct rlc_firmware_header_v1_0 *)VAR_11->gfx.rlc_fw->data;
 VAR_15 = FUNC_6(VAR_13->header.ucode_size_bytes) / 4;
 VAR_14 = (const __le32 *)
  (VAR_11->gfx.rlc_fw->data + FUNC_6(VAR_13->header.ucode_array_offset_bytes));

 FUNC_1(&VAR_13->header);

 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
  FUNC_0(VAR_8, VAR_12);
  FUNC_0(VAR_10, FUNC_7(VAR_14++));
 }
 FUNC_0(VAR_8, 0);

 FUNC_2(VAR_11, FUNC_5(VAR_11));
 VAR_11->gfx.rlc.funcs->start(VAR_11);

 return 0;
}
