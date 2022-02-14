
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_15__ {int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; } ;
struct smc_firmware_header_v1_0 {TYPE_8__ header; int ucode_start_addr; } ;
struct TYPE_10__ {int ucode_version; int ucode_size_bytes; } ;
struct gfx_firmware_header_v1_0 {int ucode_feature_version; int jt_offset; TYPE_1__ header; int jt_size; } ;
struct common_firmware_header {int ucode_size_bytes; } ;
struct cgs_firmware_info {int image_size; int version; int is_kicker; void* kptr; void* ucode_start_address; void* feature_version; int fw_version; int mc_addr; } ;
struct cgs_device {int dummy; } ;
struct amdgpu_firmware_info {size_t ucode_id; TYPE_5__* fw; void* kaddr; int mc_addr; } ;
typedef enum cgs_ucode_id { ____Placeholder_cgs_ucode_id } cgs_ucode_id ;
typedef enum AMDGPU_UCODE_ID { ____Placeholder_AMDGPU_UCODE_ID } AMDGPU_UCODE_ID ;
struct TYPE_13__ {int fw_version; TYPE_5__* fw; } ;
struct TYPE_12__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct TYPE_16__ {int asic_type; TYPE_4__ pm; TYPE_3__ firmware; int dev; TYPE_2__* pdev; } ;
struct TYPE_14__ {int data; } ;
struct TYPE_11__ {int revision; int device; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_9__* VAR_10 ;
 int FUNC_2 (struct cgs_device*,int) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (struct cgs_device*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__**,char*,int ) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(struct cgs_device *VAR_11,
     enum cgs_ucode_id VAR_12,
     struct cgs_firmware_info *VAR_13)
{
 VAR_2;

 if ((VAR_6 != VAR_12) && (VAR_7 != VAR_12)) {
  uint64_t VAR_14;
  uint32_t VAR_15;
  const struct gfx_firmware_header_v1_0 *VAR_16;
  enum AMDGPU_UCODE_ID VAR_17;
  struct amdgpu_firmware_info *VAR_18;

  VAR_17 = FUNC_5(VAR_11, VAR_12);
  VAR_18 = &VAR_10->firmware.ucode[VAR_17];
  if (VAR_18->fw == ((void*)0))
   return -VAR_8;

  VAR_14 = VAR_18->mc_addr;
  VAR_16 = (const struct gfx_firmware_header_v1_0 *)VAR_18->fw->data;
  VAR_15 = FUNC_6(VAR_16->header.ucode_size_bytes);

  if ((VAR_12 == VAR_4) ||
      (VAR_12 == VAR_5)) {
   VAR_14 += FUNC_0(FUNC_6(VAR_16->header.ucode_size_bytes), VAR_9);
   VAR_15 = FUNC_6(VAR_16->jt_size) << 2;
  }

  VAR_13->kptr = VAR_18->kaddr;
  VAR_13->image_size = VAR_15;
  VAR_13->mc_addr = VAR_14;
  VAR_13->version = (uint16_t)FUNC_6(VAR_16->header.ucode_version);

  if (VAR_3 == VAR_12)
   VAR_13->image_size = FUNC_6(VAR_16->jt_offset) << 2;

  VAR_13->fw_version = FUNC_2(VAR_11, VAR_12);
  VAR_13->feature_version = (uint16_t)FUNC_6(VAR_16->ucode_feature_version);
 } else {
  char VAR_19[30] = {0};
  int VAR_20 = 0;
  uint32_t VAR_21;
  uint32_t VAR_22;
  const uint8_t *VAR_23;
  const struct smc_firmware_header_v1_0 *VAR_24;
  const struct common_firmware_header *VAR_25;
  struct amdgpu_firmware_info *VAR_26 = ((void*)0);

  if (!VAR_10->pm.fw) {
   switch (VAR_10->asic_type) {
   case 135:
    FUNC_9(VAR_19, "radeon/tahiti_smc.bin");
    break;
   case 139:
    if ((VAR_10->pdev->revision == 0x81) &&
        ((VAR_10->pdev->device == 0x6810) ||
        (VAR_10->pdev->device == 0x6811))) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "radeon/pitcairn_k_smc.bin");
    } else {
     FUNC_9(VAR_19, "radeon/pitcairn_smc.bin");
    }
    break;
   case 128:
    if (((VAR_10->pdev->device == 0x6820) &&
     ((VAR_10->pdev->revision == 0x81) ||
     (VAR_10->pdev->revision == 0x83))) ||
        ((VAR_10->pdev->device == 0x6821) &&
     ((VAR_10->pdev->revision == 0x83) ||
     (VAR_10->pdev->revision == 0x87))) ||
        ((VAR_10->pdev->revision == 0x87) &&
     ((VAR_10->pdev->device == 0x6823) ||
     (VAR_10->pdev->device == 0x682b)))) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "radeon/verde_k_smc.bin");
    } else {
     FUNC_9(VAR_19, "radeon/verde_smc.bin");
    }
    break;
   case 140:
    if (((VAR_10->pdev->revision == 0x81) &&
     ((VAR_10->pdev->device == 0x6600) ||
     (VAR_10->pdev->device == 0x6604) ||
     (VAR_10->pdev->device == 0x6605) ||
     (VAR_10->pdev->device == 0x6610))) ||
        ((VAR_10->pdev->revision == 0x83) &&
     (VAR_10->pdev->device == 0x6610))) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "radeon/oland_k_smc.bin");
    } else {
     FUNC_9(VAR_19, "radeon/oland_smc.bin");
    }
    break;
   case 142:
    if (((VAR_10->pdev->revision == 0x81) &&
     (VAR_10->pdev->device == 0x6660)) ||
        ((VAR_10->pdev->revision == 0x83) &&
     ((VAR_10->pdev->device == 0x6660) ||
     (VAR_10->pdev->device == 0x6663) ||
     (VAR_10->pdev->device == 0x6665) ||
      (VAR_10->pdev->device == 0x6667)))) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "radeon/hainan_k_smc.bin");
    } else if ((VAR_10->pdev->revision == 0xc3) &&
      (VAR_10->pdev->device == 0x6665)) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "radeon/banks_k_2_smc.bin");
    } else {
     FUNC_9(VAR_19, "radeon/hainan_smc.bin");
    }
    break;
   case 144:
    if ((VAR_10->pdev->revision == 0x80) ||
     (VAR_10->pdev->revision == 0x81) ||
     (VAR_10->pdev->device == 0x665f)) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "amdgpu/bonaire_k_smc.bin");
    } else {
     FUNC_9(VAR_19, "amdgpu/bonaire_smc.bin");
    }
    break;
   case 141:
    if (VAR_10->pdev->revision == 0x80) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "amdgpu/hawaii_k_smc.bin");
    } else {
     FUNC_9(VAR_19, "amdgpu/hawaii_smc.bin");
    }
    break;
   case 133:
    if (((VAR_10->pdev->device == 0x6900) && (VAR_10->pdev->revision == 0x81)) ||
        ((VAR_10->pdev->device == 0x6900) && (VAR_10->pdev->revision == 0x83)) ||
        ((VAR_10->pdev->device == 0x6907) && (VAR_10->pdev->revision == 0x87)) ||
        ((VAR_10->pdev->device == 0x6900) && (VAR_10->pdev->revision == 0xD1)) ||
        ((VAR_10->pdev->device == 0x6900) && (VAR_10->pdev->revision == 0xD3))) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "amdgpu/topaz_k_smc.bin");
    } else
     FUNC_9(VAR_19, "amdgpu/topaz_smc.bin");
    break;
   case 134:
    if (((VAR_10->pdev->device == 0x6939) && (VAR_10->pdev->revision == 0xf1)) ||
        ((VAR_10->pdev->device == 0x6938) && (VAR_10->pdev->revision == 0xf1))) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "amdgpu/tonga_k_smc.bin");
    } else
     FUNC_9(VAR_19, "amdgpu/tonga_smc.bin");
    break;
   case 143:
    FUNC_9(VAR_19, "amdgpu/fiji_smc.bin");
    break;
   case 137:
    if (VAR_12 == VAR_6) {
     if (((VAR_10->pdev->device == 0x67ef) &&
          ((VAR_10->pdev->revision == 0xe0) ||
           (VAR_10->pdev->revision == 0xe5))) ||
         ((VAR_10->pdev->device == 0x67ff) &&
          ((VAR_10->pdev->revision == 0xcf) ||
           (VAR_10->pdev->revision == 0xef) ||
           (VAR_10->pdev->revision == 0xff)))) {
      VAR_13->is_kicker = 1;
      FUNC_9(VAR_19, "amdgpu/polaris11_k_smc.bin");
     } else if ((VAR_10->pdev->device == 0x67ef) &&
         (VAR_10->pdev->revision == 0xe2)) {
      VAR_13->is_kicker = 1;
      FUNC_9(VAR_19, "amdgpu/polaris11_k2_smc.bin");
     } else {
      FUNC_9(VAR_19, "amdgpu/polaris11_smc.bin");
     }
    } else if (VAR_12 == VAR_7) {
     FUNC_9(VAR_19, "amdgpu/polaris11_smc_sk.bin");
    }
    break;
   case 138:
    if (VAR_12 == VAR_6) {
     if (((VAR_10->pdev->device == 0x67df) &&
          ((VAR_10->pdev->revision == 0xe0) ||
           (VAR_10->pdev->revision == 0xe3) ||
           (VAR_10->pdev->revision == 0xe4) ||
           (VAR_10->pdev->revision == 0xe5) ||
           (VAR_10->pdev->revision == 0xe7) ||
           (VAR_10->pdev->revision == 0xef))) ||
         ((VAR_10->pdev->device == 0x6fdf) &&
          ((VAR_10->pdev->revision == 0xef) ||
           (VAR_10->pdev->revision == 0xff)))) {
      VAR_13->is_kicker = 1;
      FUNC_9(VAR_19, "amdgpu/polaris10_k_smc.bin");
     } else if ((VAR_10->pdev->device == 0x67df) &&
         ((VAR_10->pdev->revision == 0xe1) ||
          (VAR_10->pdev->revision == 0xf7))) {
      VAR_13->is_kicker = 1;
      FUNC_9(VAR_19, "amdgpu/polaris10_k2_smc.bin");
     } else {
      FUNC_9(VAR_19, "amdgpu/polaris10_smc.bin");
     }
    } else if (VAR_12 == VAR_7) {
     FUNC_9(VAR_19, "amdgpu/polaris10_smc_sk.bin");
    }
    break;
   case 136:
    if (((VAR_10->pdev->device == 0x6987) &&
         ((VAR_10->pdev->revision == 0xc0) ||
          (VAR_10->pdev->revision == 0xc3))) ||
        ((VAR_10->pdev->device == 0x6981) &&
         ((VAR_10->pdev->revision == 0x00) ||
          (VAR_10->pdev->revision == 0x01) ||
          (VAR_10->pdev->revision == 0x10)))) {
     VAR_13->is_kicker = 1;
     FUNC_9(VAR_19, "amdgpu/polaris12_k_smc.bin");
    } else {
     FUNC_9(VAR_19, "amdgpu/polaris12_smc.bin");
    }
    break;
   case 129:
    FUNC_9(VAR_19, "amdgpu/vegam_smc.bin");
    break;
   case 132:
    if ((VAR_10->pdev->device == 0x687f) &&
     ((VAR_10->pdev->revision == 0xc0) ||
     (VAR_10->pdev->revision == 0xc1) ||
     (VAR_10->pdev->revision == 0xc3)))
     FUNC_9(VAR_19, "amdgpu/vega10_acg_smc.bin");
    else
     FUNC_9(VAR_19, "amdgpu/vega10_smc.bin");
    break;
   case 131:
    FUNC_9(VAR_19, "amdgpu/vega12_smc.bin");
    break;
   case 130:
    FUNC_9(VAR_19, "amdgpu/vega20_smc.bin");
    break;
   default:
    FUNC_1("SMC firmware not supported\n");
    return -VAR_8;
   }

   VAR_20 = FUNC_8(&VAR_10->pm.fw, VAR_19, VAR_10->dev);
   if (VAR_20) {
    FUNC_1("Failed to request firmware\n");
    return VAR_20;
   }

   VAR_20 = FUNC_4(VAR_10->pm.fw);
   if (VAR_20) {
    FUNC_1("Failed to load firmware \"%s\"", VAR_19);
    FUNC_7(VAR_10->pm.fw);
    VAR_10->pm.fw = ((void*)0);
    return VAR_20;
   }

   if (VAR_10->firmware.load_type == VAR_0) {
    VAR_26 = &VAR_10->firmware.ucode[VAR_1];
    VAR_26->ucode_id = VAR_1;
    VAR_26->fw = VAR_10->pm.fw;
    VAR_25 = (const struct common_firmware_header *)VAR_26->fw->data;
    VAR_10->firmware.fw_size +=
     FUNC_0(FUNC_6(VAR_25->ucode_size_bytes), VAR_9);
   }
  }

  VAR_24 = (const struct smc_firmware_header_v1_0 *) VAR_10->pm.fw->data;
  FUNC_3(&VAR_24->header);
  VAR_10->pm.fw_version = FUNC_6(VAR_24->header.ucode_version);
  VAR_21 = FUNC_6(VAR_24->header.ucode_size_bytes);
  VAR_22 = FUNC_6(VAR_24->ucode_start_addr);
  VAR_23 = (const uint8_t *)(VAR_10->pm.fw->data +
         FUNC_6(VAR_24->header.ucode_array_offset_bytes));

  VAR_13->version = VAR_10->pm.fw_version;
  VAR_13->image_size = VAR_21;
  VAR_13->ucode_start_address = VAR_22;
  VAR_13->kptr = (void *)VAR_23;
 }
 return 0;
}
