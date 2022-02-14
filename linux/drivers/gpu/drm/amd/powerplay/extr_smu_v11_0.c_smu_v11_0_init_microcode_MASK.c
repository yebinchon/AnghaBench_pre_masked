
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smu_context {struct amdgpu_device* adev; } ;
struct TYPE_10__ {int ucode_version; } ;
struct smc_firmware_header_v1_0 {TYPE_6__ header; } ;
struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_firmware_info {size_t ucode_id; TYPE_3__* fw; } ;
struct TYPE_8__ {TYPE_3__* fw; int fw_version; } ;
struct TYPE_7__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {int asic_type; TYPE_2__ pm; TYPE_1__ firmware; int dev; } ;
typedef int fw_name ;
struct TYPE_9__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 () ;





 int FUNC_2 (char*,char*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__**,char*,int ) ;
 int FUNC_8 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_9(struct smu_context *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 const char *VAR_5;
 char VAR_6[30];
 int VAR_7 = 0;
 const struct smc_firmware_header_v1_0 *VAR_8;
 const struct common_firmware_header *VAR_9;
 struct amdgpu_firmware_info *VAR_10 = ((void*)0);

 switch (VAR_4->asic_type) {
 case 128:
  VAR_5 = "vega20";
  break;
 case 132:
  VAR_5 = "arcturus";
  break;
 case 131:
  VAR_5 = "navi10";
  break;
 case 129:
  VAR_5 = "navi14";
  break;
 case 130:
  VAR_5 = "navi12";
  break;
 default:
  FUNC_1();
 }

 FUNC_8(VAR_6, sizeof(VAR_6), "amdgpu/%s_smc.bin", VAR_5);

 VAR_7 = FUNC_7(&VAR_4->pm.fw, VAR_6, VAR_4->dev);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_4(VAR_4->pm.fw);
 if (VAR_7)
  goto out;

 VAR_8 = (const struct smc_firmware_header_v1_0 *) VAR_4->pm.fw->data;
 FUNC_3(&VAR_8->header);
 VAR_4->pm.fw_version = FUNC_5(VAR_8->header.ucode_version);

 if (VAR_4->firmware.load_type == VAR_0) {
  VAR_10 = &VAR_4->firmware.ucode[VAR_1];
  VAR_10->ucode_id = VAR_1;
  VAR_10->fw = VAR_4->pm.fw;
  VAR_9 = (const struct common_firmware_header *)VAR_10->fw->data;
  VAR_4->firmware.fw_size +=
   FUNC_0(FUNC_5(VAR_9->ucode_size_bytes), VAR_2);
 }

out:
 if (VAR_7) {
  FUNC_2("smu_v11_0: Failed to load firmware \"%s\"\n",
     VAR_6);
  FUNC_6(VAR_4->pm.fw);
  VAR_4->pm.fw = ((void*)0);
 }
 return VAR_7;
}
