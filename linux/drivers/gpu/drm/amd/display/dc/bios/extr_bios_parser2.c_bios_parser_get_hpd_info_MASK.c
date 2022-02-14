
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graphics_object_id {int dummy; } ;
struct graphics_object_hpd_info {int hpd_active; int hpd_int_gpio_uid; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {int dummy; } ;
struct atom_hpd_int_record {int plugin_pin_state; int pin_id; } ;
struct atom_display_object_path_v2 {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atom_display_object_path_v2* FUNC_1 (struct bios_parser*,struct graphics_object_id) ;
 struct atom_hpd_int_record* FUNC_2 (struct bios_parser*,struct atom_display_object_path_v2*) ;

__attribute__((used)) static enum bp_result FUNC_3(
 struct dc_bios *VAR_3,
 struct graphics_object_id VAR_4,
 struct graphics_object_hpd_info *VAR_5)
{
 struct bios_parser *VAR_6 = FUNC_0(VAR_3);
 struct atom_display_object_path_v2 *VAR_7;
 struct atom_hpd_int_record *VAR_8 = ((void*)0);

 if (!VAR_5)
  return VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_4);

 if (!VAR_7)
  return VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_7);

 if (VAR_8 != ((void*)0)) {
  VAR_5->hpd_int_gpio_uid = VAR_8->pin_id;
  VAR_5->hpd_active = VAR_8->plugin_pin_state;
  return VAR_2;
 }

 return VAR_1;
}
