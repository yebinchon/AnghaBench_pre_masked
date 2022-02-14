
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct object_info_table {TYPE_2__* v1_4; } ;
struct graphics_object_id {int type; int enum_id; int id; int member_0; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {struct object_info_table object_info_tbl; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_4__ {unsigned int number_of_path; TYPE_1__* display_path; } ;
struct TYPE_3__ {int encoderobjid; int display_objid; } ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;


 struct graphics_object_id FUNC_1 (int) ;

__attribute__((used)) static enum bp_result FUNC_2(struct dc_bios *VAR_2,
 struct graphics_object_id VAR_3, uint32_t VAR_4,
 struct graphics_object_id *VAR_5)
{
 struct bios_parser *VAR_6 = FUNC_0(VAR_2);
 unsigned int VAR_7;
 enum bp_result VAR_8 = VAR_0;
 struct graphics_object_id VAR_9 = {0};
 struct object_info_table *VAR_10 = &VAR_6->object_info_tbl;

 if (!VAR_5)
  return VAR_8;

 switch (VAR_3.type) {



 case 128:




  for (VAR_7 = 0; VAR_7 < VAR_10->v1_4->number_of_path; VAR_7++) {
   VAR_9 = FUNC_1(
   VAR_10->v1_4->display_path[VAR_7].encoderobjid);
   if (VAR_3.type == VAR_9.type &&
     VAR_3.id == VAR_9.id &&
      VAR_3.enum_id ==
       VAR_9.enum_id) {
    *VAR_5 =
    FUNC_1(0x1100);

   }
  }
  VAR_8 = VAR_1;
  break;
 case 129:
  for (VAR_7 = 0; VAR_7 < VAR_10->v1_4->number_of_path; VAR_7++) {
   VAR_9 = FUNC_1(
    VAR_10->v1_4->display_path[VAR_7].display_objid);

   if (VAR_3.type == VAR_9.type &&
    VAR_3.id == VAR_9.id &&
     VAR_3.enum_id == VAR_9.enum_id) {
    *VAR_5 =
    FUNC_1(
    VAR_10->v1_4->display_path[VAR_7].encoderobjid);

   }
  }
  VAR_8 = VAR_1;
  break;
 default:
  break;
 }

 return VAR_8;
}
