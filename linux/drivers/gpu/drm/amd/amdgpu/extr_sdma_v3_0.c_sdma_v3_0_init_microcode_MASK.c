
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
struct TYPE_9__ {int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {int asic_type; TYPE_4__ sdma; TYPE_2__ firmware; int dev; } ;
typedef int fw_name ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_10__ {int feature_version; int burst_nop; TYPE_5__* fw; void* fw_version; } ;


 scalar_t__ FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_5__*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__**,char*,int ) ;
 int FUNC_8 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_2)
{
 const char *VAR_3;
 char VAR_4[30];
 int VAR_5 = 0, VAR_6;
 struct amdgpu_firmware_info *VAR_7 = ((void*)0);
 const struct common_firmware_header *VAR_8 = ((void*)0);
 const struct sdma_firmware_header_v1_0 *VAR_9;

 FUNC_2("\n");

 switch (VAR_2->asic_type) {
 case 129:
  VAR_3 = "tonga";
  break;
 case 134:
  VAR_3 = "fiji";
  break;
 case 133:
  VAR_3 = "polaris10";
  break;
 case 132:
  VAR_3 = "polaris11";
  break;
 case 131:
  VAR_3 = "polaris12";
  break;
 case 128:
  VAR_3 = "vegam";
  break;
 case 135:
  VAR_3 = "carrizo";
  break;
 case 130:
  VAR_3 = "stoney";
  break;
 default: FUNC_1();
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->sdma.num_instances; VAR_6++) {
  if (VAR_6 == 0)
   FUNC_8(VAR_4, sizeof(VAR_4), "amdgpu/%s_sdma.bin", VAR_3);
  else
   FUNC_8(VAR_4, sizeof(VAR_4), "amdgpu/%s_sdma1.bin", VAR_3);
  VAR_5 = FUNC_7(&VAR_2->sdma.instance[VAR_6].fw, VAR_4, VAR_2->dev);
  if (VAR_5)
   goto out;
  VAR_5 = FUNC_3(VAR_2->sdma.instance[VAR_6].fw);
  if (VAR_5)
   goto out;
  VAR_9 = (const struct sdma_firmware_header_v1_0 *)VAR_2->sdma.instance[VAR_6].fw->data;
  VAR_2->sdma.instance[VAR_6].fw_version = FUNC_4(VAR_9->header.ucode_version);
  VAR_2->sdma.instance[VAR_6].feature_version = FUNC_4(VAR_9->ucode_feature_version);
  if (VAR_2->sdma.instance[VAR_6].feature_version >= 20)
   VAR_2->sdma.instance[VAR_6].burst_nop = 1;

  VAR_7 = &VAR_2->firmware.ucode[VAR_0 + VAR_6];
  VAR_7->ucode_id = VAR_0 + VAR_6;
  VAR_7->fw = VAR_2->sdma.instance[VAR_6].fw;
  VAR_8 = (const struct common_firmware_header *)VAR_7->fw->data;
  VAR_2->firmware.fw_size +=
   FUNC_0(FUNC_4(VAR_8->ucode_size_bytes), VAR_1);

 }
out:
 if (VAR_5) {
  FUNC_5("sdma_v3_0: Failed to load firmware \"%s\"\n", VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_2->sdma.num_instances; VAR_6++) {
   FUNC_6(VAR_2->sdma.instance[VAR_6].fw);
   VAR_2->sdma.instance[VAR_6].fw = ((void*)0);
  }
 }
 return VAR_5;
}
