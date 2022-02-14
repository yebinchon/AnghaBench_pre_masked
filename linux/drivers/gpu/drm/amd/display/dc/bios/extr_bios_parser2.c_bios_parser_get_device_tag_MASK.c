
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct graphics_object_id {int dummy; } ;
struct dc_bios {int dummy; } ;
struct connector_device_tag_info {int dev_id; scalar_t__ acpi_device; } ;
struct bios_parser {int dummy; } ;
struct atom_display_object_path_v2 {int device_tag; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct atom_display_object_path_v2* FUNC_3 (struct bios_parser*,struct graphics_object_id) ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct dc_bios *VAR_2,
 struct graphics_object_id VAR_3,
 uint32_t VAR_4,
 struct connector_device_tag_info *VAR_5)
{
 struct bios_parser *VAR_6 = FUNC_0(VAR_2);
 struct atom_display_object_path_v2 *VAR_7;

 if (!VAR_5)
  return VAR_0;


 VAR_7 = FUNC_3(VAR_6, VAR_3);

 if (!VAR_7) {
  FUNC_1();
  return VAR_0;
 }

 VAR_5->acpi_device = 0;
 VAR_5->dev_id = FUNC_2(VAR_7->device_tag);

 return VAR_1;
}
