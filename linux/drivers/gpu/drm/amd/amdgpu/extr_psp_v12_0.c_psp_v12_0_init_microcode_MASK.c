
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; } ;
struct psp_firmware_header_v1_0 {TYPE_1__ header; int ucode_feature_version; } ;
struct psp_context {struct amdgpu_device* adev; } ;
struct TYPE_7__ {int asd_fw_version; int asd_feature_version; int asd_ucode_size; TYPE_3__* asd_fw; int * asd_start_addr; } ;
struct amdgpu_device {int asic_type; TYPE_2__ psp; int dev; } ;
typedef int fw_name ;
struct TYPE_8__ {scalar_t__ data; } ;


 int FUNC_0 () ;

 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__**,char*,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_7(struct psp_context *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;
 const char *VAR_2;
 char VAR_3[30];
 int VAR_4 = 0;
 const struct psp_firmware_header_v1_0 *VAR_5;

 FUNC_1("\n");

 switch (VAR_1->asic_type) {
 case 128:
  VAR_2 = "renoir";
  break;
 default:
  FUNC_0();
 }

 FUNC_6(VAR_3, sizeof(VAR_3), "amdgpu/%s_asd.bin", VAR_2);
 VAR_4 = FUNC_5(&VAR_1->psp.asd_fw, VAR_3, VAR_1->dev);
 if (VAR_4)
  goto out1;

 VAR_4 = FUNC_2(VAR_1->psp.asd_fw);
 if (VAR_4)
  goto out1;

 VAR_5 = (const struct psp_firmware_header_v1_0 *)VAR_1->psp.asd_fw->data;
 VAR_1->psp.asd_fw_version = FUNC_3(VAR_5->header.ucode_version);
 VAR_1->psp.asd_feature_version = FUNC_3(VAR_5->ucode_feature_version);
 VAR_1->psp.asd_ucode_size = FUNC_3(VAR_5->header.ucode_size_bytes);
 VAR_1->psp.asd_start_addr = (uint8_t *)VAR_5 +
    FUNC_3(VAR_5->header.ucode_array_offset_bytes);

 return 0;

out1:
 FUNC_4(VAR_1->psp.asd_fw);
 VAR_1->psp.asd_fw = ((void*)0);

 return VAR_4;
}
