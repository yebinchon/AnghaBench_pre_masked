
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct object_info_table {struct display_object_info_table_v1_4* v1_4; } ;
struct graphics_object_id {int dummy; } ;
struct display_object_info_table_v1_4 {size_t number_of_path; TYPE_1__* display_path; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {struct object_info_table object_info_tbl; } ;
struct TYPE_2__ {scalar_t__ encoderobjid; scalar_t__ display_objid; } ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct graphics_object_id FUNC_1 (int ,int ,int ) ;
 struct graphics_object_id FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct graphics_object_id FUNC_3(
 struct dc_bios *VAR_2,
 uint8_t VAR_3)
{
 struct bios_parser *VAR_4 = FUNC_0(VAR_2);
 struct graphics_object_id VAR_5 = FUNC_1(
  0, VAR_0, VAR_1);
 struct object_info_table *VAR_6 = &VAR_4->object_info_tbl;
 struct display_object_info_table_v1_4 *VAR_7 = VAR_6->v1_4;

 if (VAR_7->number_of_path > VAR_3) {



  if (VAR_7->display_path[VAR_3].encoderobjid != 0 &&
    VAR_7->display_path[VAR_3].display_objid != 0)
   VAR_5 = FUNC_2(
     VAR_7->display_path[VAR_3].display_objid);
 }

 return VAR_5;
}
