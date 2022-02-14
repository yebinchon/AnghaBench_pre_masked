
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ucode_version; } ;
struct sdma_firmware_header_v1_0 {int ucode_feature_version; TYPE_1__ header; } ;
struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_firmware_info {int ucode_id; TYPE_5__* fw; } ;
struct TYPE_11__ {int num_instances; TYPE_3__* instance; } ;
struct TYPE_9__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {int asic_type; TYPE_4__ sdma; TYPE_2__ firmware; int dev; } ;
typedef int fw_name ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_10__ {int feature_version; int burst_nop; TYPE_5__* fw; void* fw_version; } ;


 scalar_t__ FUNC_0 (void*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;



 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_5__*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__**,char*,int ) ;
 int FUNC_8 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_3)
{
 const char *VAR_4;
 char VAR_5[30];
 int VAR_6 = 0, VAR_7;
 struct amdgpu_firmware_info *VAR_8 = ((void*)0);
 const struct common_firmware_header *VAR_9 = ((void*)0);
 const struct sdma_firmware_header_v1_0 *VAR_10;

 FUNC_2("\n");

 switch (VAR_3->asic_type) {
 case 130:
  VAR_4 = "navi10";
  break;
 case 128:
  VAR_4 = "navi14";
  break;
 case 129:
  VAR_4 = "navi12";
  break;
 default:
  FUNC_1();
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->sdma.num_instances; VAR_7++) {
  if (VAR_7 == 0)
   FUNC_8(VAR_5, sizeof(VAR_5), "amdgpu/%s_sdma.bin", VAR_4);
  else
   FUNC_8(VAR_5, sizeof(VAR_5), "amdgpu/%s_sdma1.bin", VAR_4);
  VAR_6 = FUNC_7(&VAR_3->sdma.instance[VAR_7].fw, VAR_5, VAR_3->dev);
  if (VAR_6)
   goto out;
  VAR_6 = FUNC_4(VAR_3->sdma.instance[VAR_7].fw);
  if (VAR_6)
   goto out;
  VAR_10 = (const struct sdma_firmware_header_v1_0 *)VAR_3->sdma.instance[VAR_7].fw->data;
  VAR_3->sdma.instance[VAR_7].fw_version = FUNC_5(VAR_10->header.ucode_version);
  VAR_3->sdma.instance[VAR_7].feature_version = FUNC_5(VAR_10->ucode_feature_version);
  if (VAR_3->sdma.instance[VAR_7].feature_version >= 20)
   VAR_3->sdma.instance[VAR_7].burst_nop = 1;
  FUNC_2("psp_load == '%s'\n",
    VAR_3->firmware.load_type == VAR_0 ? "true" : "false");

  if (VAR_3->firmware.load_type == VAR_0) {
   VAR_8 = &VAR_3->firmware.ucode[VAR_1 + VAR_7];
   VAR_8->ucode_id = VAR_1 + VAR_7;
   VAR_8->fw = VAR_3->sdma.instance[VAR_7].fw;
   VAR_9 = (const struct common_firmware_header *)VAR_8->fw->data;
   VAR_3->firmware.fw_size +=
    FUNC_0(FUNC_5(VAR_9->ucode_size_bytes), VAR_2);
  }
 }
out:
 if (VAR_6) {
  FUNC_3("sdma_v5_0: Failed to load firmware \"%s\"\n", VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_3->sdma.num_instances; VAR_7++) {
   FUNC_6(VAR_3->sdma.instance[VAR_7].fw);
   VAR_3->sdma.instance[VAR_7].fw = ((void*)0);
  }
 }
 return VAR_6;
}
