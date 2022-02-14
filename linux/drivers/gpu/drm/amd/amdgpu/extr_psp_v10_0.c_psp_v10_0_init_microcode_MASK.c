
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; } ;
struct psp_firmware_header_v1_0 {TYPE_2__ header; int ucode_feature_version; } ;
struct psp_context {struct amdgpu_device* adev; } ;
struct TYPE_9__ {int asd_fw_version; int asd_feature_version; int asd_ucode_size; TYPE_4__* asd_fw; int * asd_start_addr; } ;
struct amdgpu_device {int asic_type; int rev_id; TYPE_3__ psp; int dev; TYPE_1__* pdev; } ;
typedef int fw_name ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_7__ {int device; } ;


 int FUNC_0 () ;

 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__**,char*,int ) ;
 int FUNC_7 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_8(struct psp_context *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;
 const char *VAR_2;
 char VAR_3[30];
 int VAR_4 = 0;
 const struct psp_firmware_header_v1_0 *VAR_5;

 FUNC_1("\n");

 switch (VAR_1->asic_type) {
 case 128:
  if (VAR_1->rev_id >= 0x8)
   VAR_2 = "raven2";
  else if (VAR_1->pdev->device == 0x15d8)
   VAR_2 = "picasso";
  else
   VAR_2 = "raven";
  break;
 default: FUNC_0();
 }

 FUNC_7(VAR_3, sizeof(VAR_3), "amdgpu/%s_asd.bin", VAR_2);
 VAR_4 = FUNC_6(&VAR_1->psp.asd_fw, VAR_3, VAR_1->dev);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_2(VAR_1->psp.asd_fw);
 if (VAR_4)
  goto out;

 VAR_5 = (const struct psp_firmware_header_v1_0 *)VAR_1->psp.asd_fw->data;
 VAR_1->psp.asd_fw_version = FUNC_4(VAR_5->header.ucode_version);
 VAR_1->psp.asd_feature_version = FUNC_4(VAR_5->ucode_feature_version);
 VAR_1->psp.asd_ucode_size = FUNC_4(VAR_5->header.ucode_size_bytes);
 VAR_1->psp.asd_start_addr = (uint8_t *)VAR_5 +
    FUNC_4(VAR_5->header.ucode_array_offset_bytes);

 return 0;
out:
 if (VAR_4) {
  FUNC_3(VAR_1->dev,
   "psp v10.0: Failed to load firmware \"%s\"\n",
   VAR_3);
  FUNC_5(VAR_1->psp.asd_fw);
  VAR_1->psp.asd_fw = ((void*)0);
 }

 return VAR_4;
}
