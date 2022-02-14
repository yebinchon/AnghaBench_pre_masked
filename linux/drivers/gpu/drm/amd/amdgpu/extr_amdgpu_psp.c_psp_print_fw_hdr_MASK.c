
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct smc_firmware_header_v1_0 {int header; } ;
struct sdma_firmware_header_v1_0 {int header; } ;
struct rlc_firmware_header_v2_0 {int header; } ;
struct psp_context {struct amdgpu_device* adev; } ;
struct gfx_firmware_header_v1_0 {int header; } ;
struct amdgpu_firmware_info {size_t ucode_id; } ;
struct TYPE_13__ {TYPE_10__* fw; } ;
struct TYPE_22__ {TYPE_8__* rlc_fw; TYPE_7__* mec_fw; TYPE_6__* me_fw; TYPE_5__* pfp_fw; TYPE_4__* ce_fw; } ;
struct TYPE_16__ {TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_11__ pm; TYPE_9__ gfx; TYPE_3__ sdma; } ;
struct TYPE_21__ {scalar_t__ data; } ;
struct TYPE_20__ {scalar_t__ data; } ;
struct TYPE_19__ {scalar_t__ data; } ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_15__ {TYPE_1__* fw; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_12__ {scalar_t__ data; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct psp_context *VAR_0,
        struct amdgpu_firmware_info *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->adev;
 const struct sdma_firmware_header_v1_0 *VAR_3 =
  (const struct sdma_firmware_header_v1_0 *)
  VAR_2->sdma.instance[VAR_1->ucode_id - 136].fw->data;
 const struct gfx_firmware_header_v1_0 *VAR_4 =
  (const struct gfx_firmware_header_v1_0 *)VAR_2->gfx.ce_fw->data;
 const struct gfx_firmware_header_v1_0 *VAR_5 =
  (const struct gfx_firmware_header_v1_0 *)VAR_2->gfx.pfp_fw->data;
 const struct gfx_firmware_header_v1_0 *VAR_6 =
  (const struct gfx_firmware_header_v1_0 *)VAR_2->gfx.me_fw->data;
 const struct gfx_firmware_header_v1_0 *VAR_7 =
  (const struct gfx_firmware_header_v1_0 *)VAR_2->gfx.mec_fw->data;
 const struct rlc_firmware_header_v2_0 *VAR_8 =
  (const struct rlc_firmware_header_v2_0 *)VAR_2->gfx.rlc_fw->data;
 const struct smc_firmware_header_v1_0 *VAR_9 =
  (const struct smc_firmware_header_v1_0 *)VAR_2->pm.fw->data;

 switch (VAR_1->ucode_id) {
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  FUNC_2(&VAR_3->header);
  break;
 case 141:
  FUNC_0(&VAR_4->header);
  break;
 case 138:
  FUNC_0(&VAR_5->header);
  break;
 case 140:
  FUNC_0(&VAR_6->header);
  break;
 case 139:
  FUNC_0(&VAR_7->header);
  break;
 case 137:
  FUNC_1(&VAR_8->header);
  break;
 case 128:
  FUNC_3(&VAR_9->header);
  break;
 default:
  break;
 }
}
