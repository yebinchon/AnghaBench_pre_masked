
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct graphics_object_id {int type; int enum_id; int id; int member_0; } ;
struct TYPE_4__ {TYPE_1__* v1_4; } ;
struct bios_parser {TYPE_2__ object_info_tbl; } ;
struct atom_display_object_path_v2 {int display_objid; int encoderobjid; } ;
struct TYPE_3__ {unsigned int number_of_path; struct atom_display_object_path_v2* display_path; } ;





 struct graphics_object_id FUNC_0 (int ) ;

__attribute__((used)) static struct atom_display_object_path_v2 *FUNC_1(
  struct bios_parser *VAR_0,
  struct graphics_object_id VAR_1)
{
 unsigned int VAR_2;
 struct graphics_object_id VAR_3 = {0};

 switch (VAR_1.type) {
 case 129:
  for (VAR_2 = 0; VAR_2 < VAR_0->object_info_tbl.v1_4->number_of_path; VAR_2++) {
   VAR_3 = FUNC_0(
     VAR_0->object_info_tbl.v1_4->display_path[VAR_2].encoderobjid);
   if (VAR_1.type == VAR_3.type && VAR_1.id == VAR_3.id
     && VAR_1.enum_id == VAR_3.enum_id)
    return &VAR_0->object_info_tbl.v1_4->display_path[VAR_2];
  }

 case 130:
 case 128:



  for (VAR_2 = 0; VAR_2 < VAR_0->object_info_tbl.v1_4->number_of_path; VAR_2++) {
   VAR_3 = FUNC_0(
     VAR_0->object_info_tbl.v1_4->display_path[VAR_2].display_objid);
   if (VAR_1.type == VAR_3.type && VAR_1.id == VAR_3.id
     && VAR_1.enum_id == VAR_3.enum_id)
    return &VAR_0->object_info_tbl.v1_4->display_path[VAR_2];
  }

 default:
  return ((void*)0);
 }
}
