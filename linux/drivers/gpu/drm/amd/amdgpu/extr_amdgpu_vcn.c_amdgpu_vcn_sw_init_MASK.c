
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct common_firmware_header {int ucode_size_bytes; int ucode_version; } ;
struct TYPE_11__ {int indirect_sram; int fw_version; int num_vcn_inst; int harvest_config; int dpg_sram_cpu_addr; int dpg_sram_gpu_addr; int dpg_sram_bo; TYPE_3__* inst; TYPE_5__* fw; int idle_work; } ;
struct TYPE_9__ {scalar_t__ load_type; } ;
struct amdgpu_device {int asic_type; int rev_id; int pg_flags; int dev; TYPE_4__ vcn; TYPE_2__ firmware; TYPE_1__* pdev; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_10__ {int cpu_addr; int gpu_addr; int vcpu_bo; } ;
struct TYPE_8__ {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;






 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int,...) ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int FUNC_2 (int *,int ) ;
 int VAR_14 ;
 int FUNC_3 (struct amdgpu_device*,int,int ,int ,int *,int *,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_15 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__**,char const*,int ) ;

int FUNC_9(struct amdgpu_device *VAR_16)
{
 unsigned long VAR_17;
 const char *VAR_18;
 const struct common_firmware_header *VAR_19;
 unsigned char VAR_20;
 int VAR_21, VAR_22;

 FUNC_2(&VAR_16->vcn.idle_work, VAR_15);

 switch (VAR_16->asic_type) {
 case 129:
  if (VAR_16->rev_id >= 8)
   VAR_18 = VAR_12;
  else if (VAR_16->pdev->device == 0x15d8)
   VAR_18 = VAR_10;
  else
   VAR_18 = VAR_11;
  break;
 case 133:
  VAR_18 = VAR_6;
  break;
 case 128:
  VAR_18 = VAR_13;
  if ((VAR_16->firmware.load_type == VAR_0) &&
      (VAR_16->pg_flags & VAR_4))
   VAR_16->vcn.indirect_sram = 1;
  break;
 case 132:
  VAR_18 = VAR_7;
  if ((VAR_16->firmware.load_type == VAR_0) &&
      (VAR_16->pg_flags & VAR_4))
   VAR_16->vcn.indirect_sram = 1;
  break;
 case 130:
  VAR_18 = VAR_9;
  if ((VAR_16->firmware.load_type == VAR_0) &&
      (VAR_16->pg_flags & VAR_4))
   VAR_16->vcn.indirect_sram = 1;
  break;
 case 131:
  VAR_18 = VAR_8;
  if ((VAR_16->firmware.load_type == VAR_0) &&
      (VAR_16->pg_flags & VAR_4))
   VAR_16->vcn.indirect_sram = 1;
  break;
 default:
  return -VAR_5;
 }

 VAR_22 = FUNC_8(&VAR_16->vcn.fw, VAR_18, VAR_16->dev);
 if (VAR_22) {
  FUNC_5(VAR_16->dev, "amdgpu_vcn: Can't load firmware \"%s\"\n",
   VAR_18);
  return VAR_22;
 }

 VAR_22 = FUNC_4(VAR_16->vcn.fw);
 if (VAR_22) {
  FUNC_5(VAR_16->dev, "amdgpu_vcn: Can't validate firmware \"%s\"\n",
   VAR_18);
  FUNC_7(VAR_16->vcn.fw);
  VAR_16->vcn.fw = ((void*)0);
  return VAR_22;
 }

 VAR_19 = (const struct common_firmware_header *)VAR_16->vcn.fw->data;
 VAR_16->vcn.fw_version = FUNC_6(VAR_19->ucode_version);







 VAR_20 = (FUNC_6(VAR_19->ucode_version) >> 20) & 0xf;
 if (VAR_20) {
  unsigned int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

  VAR_27 = FUNC_6(VAR_19->ucode_version) & 0xfff;
  VAR_25 = (FUNC_6(VAR_19->ucode_version) >> 12) & 0xff;
  VAR_24 = VAR_20;
  VAR_23 = (FUNC_6(VAR_19->ucode_version) >> 24) & 0xf;
  VAR_26 = (FUNC_6(VAR_19->ucode_version) >> 28) & 0xf;
  FUNC_1("Found VCN firmware Version ENC: %hu.%hu DEC: %hu VEP: %hu Revision: %hu\n",
   VAR_24, VAR_25, VAR_23, VAR_26, VAR_27);
 } else {
  unsigned int VAR_28, VAR_29, VAR_30;

  VAR_30 = FUNC_6(VAR_19->ucode_version) & 0xff;
  VAR_28 = (FUNC_6(VAR_19->ucode_version) >> 24) & 0xff;
  VAR_29 = (FUNC_6(VAR_19->ucode_version) >> 8) & 0xff;
  FUNC_1("Found VCN firmware Version: %hu.%hu Family ID: %hu\n",
   VAR_28, VAR_29, VAR_30);
 }

 VAR_17 = VAR_3 + VAR_2;
 if (VAR_16->firmware.load_type != VAR_0)
  VAR_17 += FUNC_0(FUNC_6(VAR_19->ucode_size_bytes) + 8);

 for (VAR_21 = 0; VAR_21 < VAR_16->vcn.num_vcn_inst; VAR_21++) {
  if (VAR_16->vcn.harvest_config & (1 << VAR_21))
   continue;

  VAR_22 = FUNC_3(VAR_16, VAR_17, VAR_14,
      VAR_1, &VAR_16->vcn.inst[VAR_21].vcpu_bo,
      &VAR_16->vcn.inst[VAR_21].gpu_addr, &VAR_16->vcn.inst[VAR_21].cpu_addr);
  if (VAR_22) {
   FUNC_5(VAR_16->dev, "(%d) failed to allocate vcn bo\n", VAR_22);
   return VAR_22;
  }
 }

 if (VAR_16->vcn.indirect_sram) {
  VAR_22 = FUNC_3(VAR_16, 64 * 2 * 4, VAR_14,
       VAR_1, &VAR_16->vcn.dpg_sram_bo,
       &VAR_16->vcn.dpg_sram_gpu_addr, &VAR_16->vcn.dpg_sram_cpu_addr);
  if (VAR_22) {
   FUNC_5(VAR_16->dev, "(%d) failed to allocate DPG bo\n", VAR_22);
   return VAR_22;
  }
 }

 return 0;
}
