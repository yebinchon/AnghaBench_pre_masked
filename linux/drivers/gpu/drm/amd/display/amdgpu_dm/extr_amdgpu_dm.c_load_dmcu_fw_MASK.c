
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ucode_version; int ucode_size_bytes; } ;
struct dmcu_firmware_header_v1_0 {TYPE_4__ header; int intv_size_bytes; } ;
struct TYPE_10__ {scalar_t__ dmcu_fw_version; TYPE_5__* fw_dmcu; } ;
struct TYPE_9__ {scalar_t__ load_type; int fw_size; TYPE_1__* ucode; } ;
struct amdgpu_device {int asic_type; TYPE_3__ dm; TYPE_2__ firmware; int dev; int external_rev_id; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_8__ {size_t ucode_id; TYPE_5__* fw; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,char*,char const*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__**,char const*,int ) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_7)
{
 const char *VAR_8 = ((void*)0);
 int VAR_9;
 const struct dmcu_firmware_header_v1_0 *VAR_10;

 switch(VAR_7->asic_type) {
 case 148:
 case 145:
 case 143:
 case 144:
 case 142:
 case 132:
 case 146:
 case 147:
 case 133:
 case 137:
 case 138:
 case 136:
 case 128:
 case 131:
 case 130:
 case 129:
 case 141:
 case 139:
 case 140:
 case 134:
  return 0;
 case 135:
  if (FUNC_1(VAR_7->external_rev_id))
   VAR_8 = VAR_5;
  else if (FUNC_2(VAR_7->external_rev_id))
   VAR_8 = VAR_5;
  else
   return 0;
  break;
 default:
  FUNC_4("Unsupported ASIC type: 0x%X\n", VAR_7->asic_type);
  return -VAR_3;
 }

 if (VAR_7->firmware.load_type != VAR_0) {
  FUNC_3("dm: DMCU firmware not supported on direct or SMU loading\n");
  return 0;
 }

 VAR_9 = FUNC_9(&VAR_7->dm.fw_dmcu, VAR_8, VAR_7->dev);
 if (VAR_9 == -VAR_4) {

  FUNC_3("dm: DMCU firmware not found\n");
  VAR_7->dm.fw_dmcu = ((void*)0);
  return 0;
 }
 if (VAR_9) {
  FUNC_6(VAR_7->dev, "amdgpu_dm: Can't load firmware \"%s\"\n",
   VAR_8);
  return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_7->dm.fw_dmcu);
 if (VAR_9) {
  FUNC_6(VAR_7->dev, "amdgpu_dm: Can't validate firmware \"%s\"\n",
   VAR_8);
  FUNC_8(VAR_7->dm.fw_dmcu);
  VAR_7->dm.fw_dmcu = ((void*)0);
  return VAR_9;
 }

 VAR_10 = (const struct dmcu_firmware_header_v1_0 *)VAR_7->dm.fw_dmcu->data;
 VAR_7->firmware.ucode[VAR_1].ucode_id = VAR_1;
 VAR_7->firmware.ucode[VAR_1].fw = VAR_7->dm.fw_dmcu;
 VAR_7->firmware.fw_size +=
  FUNC_0(FUNC_7(VAR_10->header.ucode_size_bytes) - FUNC_7(VAR_10->intv_size_bytes), VAR_6);

 VAR_7->firmware.ucode[VAR_2].ucode_id = VAR_2;
 VAR_7->firmware.ucode[VAR_2].fw = VAR_7->dm.fw_dmcu;
 VAR_7->firmware.fw_size +=
  FUNC_0(FUNC_7(VAR_10->intv_size_bytes), VAR_6);

 VAR_7->dm.dmcu_fw_version = FUNC_7(VAR_10->header.ucode_version);

 FUNC_3("PSP loading DMCU firmware\n");

 return 0;
}
