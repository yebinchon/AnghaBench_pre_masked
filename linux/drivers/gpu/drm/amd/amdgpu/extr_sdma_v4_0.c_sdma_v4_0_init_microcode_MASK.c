
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_sdma_instance {int dummy; } ;
struct amdgpu_firmware_info {int ucode_id; TYPE_5__* fw; } ;
struct TYPE_8__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct TYPE_7__ {int num_instances; TYPE_4__* instance; } ;
struct amdgpu_device {int asic_type; int rev_id; TYPE_3__ firmware; TYPE_2__ sdma; int dev; TYPE_1__* pdev; } ;
typedef int fw_name ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_5__* fw; } ;
struct TYPE_6__ {int device; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;






 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (TYPE_5__**,char*,int ) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (char*,int,char*,char const*,...) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_3)
{
 const char *VAR_4;
 char VAR_5[30];
 int VAR_6 = 0, VAR_7;
 struct amdgpu_firmware_info *VAR_8 = ((void*)0);
 const struct common_firmware_header *VAR_9 = ((void*)0);

 FUNC_2("\n");

 switch (VAR_3->asic_type) {
 case 130:
  VAR_4 = "vega10";
  break;
 case 129:
  VAR_4 = "vega12";
  break;
 case 128:
  VAR_4 = "vega20";
  break;
 case 132:
  if (VAR_3->rev_id >= 8)
   VAR_4 = "raven2";
  else if (VAR_3->pdev->device == 0x15d8)
   VAR_4 = "picasso";
  else
   VAR_4 = "raven";
  break;
 case 133:
  VAR_4 = "arcturus";
  break;
 case 131:
  VAR_4 = "renoir";
  break;
 default:
  FUNC_1();
 }

 FUNC_9(VAR_5, sizeof(VAR_5), "amdgpu/%s_sdma.bin", VAR_4);

 VAR_6 = FUNC_6(&VAR_3->sdma.instance[0].fw, VAR_5, VAR_3->dev);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_8(&VAR_3->sdma.instance[0]);
 if (VAR_6)
  goto out;

 for (VAR_7 = 1; VAR_7 < VAR_3->sdma.num_instances; VAR_7++) {
  if (VAR_3->asic_type == 133) {


   FUNC_5((void*)&VAR_3->sdma.instance[VAR_7],
          (void*)&VAR_3->sdma.instance[0],
          sizeof(struct amdgpu_sdma_instance));
  }
  else {
   FUNC_9(VAR_5, sizeof(VAR_5), "amdgpu/%s_sdma%d.bin", VAR_4, VAR_7);

   VAR_6 = FUNC_6(&VAR_3->sdma.instance[VAR_7].fw, VAR_5, VAR_3->dev);
   if (VAR_6)
    goto out;

   VAR_6 = FUNC_8(&VAR_3->sdma.instance[VAR_7]);
   if (VAR_6)
    goto out;
  }
 }

 FUNC_2("psp_load == '%s'\n",
  VAR_3->firmware.load_type == VAR_0 ? "true" : "false");

 if (VAR_3->firmware.load_type == VAR_0) {
  for (VAR_7 = 0; VAR_7 < VAR_3->sdma.num_instances; VAR_7++) {
   VAR_8 = &VAR_3->firmware.ucode[VAR_1 + VAR_7];
   VAR_8->ucode_id = VAR_1 + VAR_7;
   VAR_8->fw = VAR_3->sdma.instance[VAR_7].fw;
   VAR_9 = (const struct common_firmware_header *)VAR_8->fw->data;
   VAR_3->firmware.fw_size +=
    FUNC_0(FUNC_4(VAR_9->ucode_size_bytes), VAR_2);
  }
 }

out:
 if (VAR_6) {
  FUNC_3("sdma_v4_0: Failed to load firmware \"%s\"\n", VAR_5);
  FUNC_7(VAR_3);
 }
 return VAR_6;
}
