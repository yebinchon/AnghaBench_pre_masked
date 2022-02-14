
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct mes_firmware_header_v1_0 {int mes_data_start_addr_hi; int mes_data_start_addr_lo; int mes_uc_start_addr_hi; int mes_uc_start_addr_lo; int mes_ucode_data_version; int mes_ucode_version; } ;
struct TYPE_5__ {int ucode_fw_version; int uc_start_addr; int data_start_addr; TYPE_2__* fw; } ;
struct amdgpu_device {int asic_type; TYPE_1__ mes; int dev; } ;
typedef int fw_name ;
struct TYPE_6__ {scalar_t__ data; } ;


 int FUNC_0 () ;

 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**,char*,int ) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_0)
{
 const char *VAR_1;
 char VAR_2[30];
 int VAR_3;
 const struct mes_firmware_header_v1_0 *VAR_4;

 switch (VAR_0->asic_type) {
 case 128:
  VAR_1 = "navi10";
  break;
 default:
  FUNC_0();
 }

 FUNC_5(VAR_2, sizeof(VAR_2), "amdgpu/%s_mes.bin", VAR_1);
 VAR_3 = FUNC_4(&VAR_0->mes.fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0->mes.fw);
 if (VAR_3) {
  FUNC_3(VAR_0->mes.fw);
  VAR_0->mes.fw = ((void*)0);
  return VAR_3;
 }

 VAR_4 = (const struct mes_firmware_header_v1_0 *)VAR_0->mes.fw->data;
 VAR_0->mes.ucode_fw_version = FUNC_2(VAR_4->mes_ucode_version);
 VAR_0->mes.ucode_fw_version =
  FUNC_2(VAR_4->mes_ucode_data_version);
 VAR_0->mes.uc_start_addr =
  FUNC_2(VAR_4->mes_uc_start_addr_lo) |
  ((uint64_t)(FUNC_2(VAR_4->mes_uc_start_addr_hi)) << 32);
 VAR_0->mes.data_start_addr =
  FUNC_2(VAR_4->mes_data_start_addr_lo) |
  ((uint64_t)(FUNC_2(VAR_4->mes_data_start_addr_hi)) << 32);

 return 0;
}
