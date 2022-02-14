
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_firmware_info {int dummy; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {int dummy; } ;
struct atom_data_revision {int major; int minor; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 int VAR_0 ;
 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,struct atom_data_revision*) ;
 int FUNC_4 (struct bios_parser*,struct dc_firmware_info*) ;
 int FUNC_5 (struct bios_parser*,struct dc_firmware_info*) ;
 int FUNC_6 (struct bios_parser*,struct dc_firmware_info*) ;
 int VAR_3 ;

__attribute__((used)) static enum bp_result FUNC_7(
 struct dc_bios *VAR_4,
 struct dc_firmware_info *VAR_5)
{
 struct bios_parser *VAR_6 = FUNC_0(VAR_4);
 enum bp_result VAR_7 = VAR_1;
 VAR_0 *VAR_3;
 struct atom_data_revision VAR_8;

 if (VAR_5 && FUNC_1(VAR_2)) {
  VAR_3 = FUNC_2(VAR_0,
   FUNC_1(VAR_2));
  FUNC_3(VAR_3, &VAR_8);
  switch (VAR_8.major) {
  case 1:
   switch (VAR_8.minor) {
   case 4:
    VAR_7 = FUNC_4(VAR_6, VAR_5);
    break;
   default:
    break;
   }
   break;

  case 2:
   switch (VAR_8.minor) {
   case 1:
    VAR_7 = FUNC_5(VAR_6, VAR_5);
    break;
   case 2:
    VAR_7 = FUNC_6(VAR_6, VAR_5);
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
 }

 return VAR_7;
}
