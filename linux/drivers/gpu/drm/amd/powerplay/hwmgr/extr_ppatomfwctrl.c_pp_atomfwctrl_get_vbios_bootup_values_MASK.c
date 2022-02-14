
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pp_hwmgr {int adev; } ;
struct pp_atomfwctrl_bios_boot_up_values {int dummy; } ;
struct atom_firmware_info_v3_2 {int dummy; } ;
struct atom_firmware_info_v3_1 {int dummy; } ;
struct atom_common_table_header {int format_revision; int content_revision; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_atomfwctrl_bios_boot_up_values*,struct atom_firmware_info_v3_1*) ;
 int FUNC_2 (struct pp_hwmgr*,struct pp_atomfwctrl_bios_boot_up_values*,struct atom_firmware_info_v3_2*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,int *) ;

int FUNC_5(struct pp_hwmgr *VAR_2,
   struct pp_atomfwctrl_bios_boot_up_values *VAR_3)
{
 struct atom_firmware_info_v3_2 *VAR_4;
 struct atom_firmware_info_v3_1 *VAR_5;
 struct atom_common_table_header *VAR_6 = ((void*)0);
 uint16_t VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 VAR_6 = (struct atom_common_table_header *)
  FUNC_4(VAR_2->adev,
    VAR_7, ((void*)0), ((void*)0), ((void*)0));

 if (!VAR_6) {
  FUNC_3("Error retrieving BIOS firmwareinfo!");
  return -VAR_0;
 }

 if ((VAR_6->format_revision == 3) && (VAR_6->content_revision == 2)) {
  VAR_4 = (struct atom_firmware_info_v3_2 *)VAR_6;
  FUNC_2(VAR_2,
    VAR_3, VAR_4);
 } else if ((VAR_6->format_revision == 3) && (VAR_6->content_revision == 1)) {
  VAR_5 = (struct atom_firmware_info_v3_1 *)VAR_6;
  FUNC_1(VAR_2,
    VAR_3, VAR_5);
 } else {
  FUNC_3("Fw info table revision does not match!");
  return -VAR_0;
 }

 return 0;
}
