
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; } ;
struct psp_firmware_header_v1_0 {TYPE_1__ header; int ucode_feature_version; int sos_offset_bytes; int sos_size_bytes; } ;
struct psp_context {struct amdgpu_device* adev; } ;
struct TYPE_7__ {int sos_fw_version; int sos_feature_version; int sos_bin_size; int sys_bin_size; int asd_fw_version; int asd_feature_version; int asd_ucode_size; TYPE_3__* asd_fw; TYPE_3__* sos_fw; int * asd_start_addr; int * sys_start_addr; int * sos_start_addr; } ;
struct amdgpu_device {int asic_type; TYPE_2__ psp; int dev; } ;
typedef int fw_name ;
struct TYPE_8__ {scalar_t__ data; } ;


 int FUNC_0 () ;


 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__**,char*,int ) ;
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
 case 129:
  VAR_2 = "vega10";
  break;
 case 128:
  VAR_2 = "vega12";
  break;
 default: FUNC_0();
 }

 FUNC_7(VAR_3, sizeof(VAR_3), "amdgpu/%s_sos.bin", VAR_2);
 VAR_4 = FUNC_6(&VAR_1->psp.sos_fw, VAR_3, VAR_1->dev);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_2(VAR_1->psp.sos_fw);
 if (VAR_4)
  goto out;

 VAR_5 = (const struct psp_firmware_header_v1_0 *)VAR_1->psp.sos_fw->data;
 VAR_1->psp.sos_fw_version = FUNC_4(VAR_5->header.ucode_version);
 VAR_1->psp.sos_feature_version = FUNC_4(VAR_5->ucode_feature_version);
 VAR_1->psp.sos_bin_size = FUNC_4(VAR_5->sos_size_bytes);
 VAR_1->psp.sys_bin_size = FUNC_4(VAR_5->header.ucode_size_bytes) -
     FUNC_4(VAR_5->sos_size_bytes);
 VAR_1->psp.sys_start_addr = (uint8_t *)VAR_5 +
    FUNC_4(VAR_5->header.ucode_array_offset_bytes);
 VAR_1->psp.sos_start_addr = (uint8_t *)VAR_1->psp.sys_start_addr +
    FUNC_4(VAR_5->sos_offset_bytes);

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
   "psp v3.1: Failed to load firmware \"%s\"\n",
   VAR_3);
  FUNC_5(VAR_1->psp.sos_fw);
  VAR_1->psp.sos_fw = ((void*)0);
  FUNC_5(VAR_1->psp.asd_fw);
  VAR_1->psp.asd_fw = ((void*)0);
 }

 return VAR_4;
}
