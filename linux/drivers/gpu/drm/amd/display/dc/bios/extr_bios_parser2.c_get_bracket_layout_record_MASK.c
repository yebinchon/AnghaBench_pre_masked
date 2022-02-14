
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot_layout_info {int dummy; } ;
struct object_info_table {struct display_object_info_table_v1_4* v1_4; } ;
struct display_object_info_table_v1_4 {unsigned int number_of_path; TYPE_1__* display_path; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {struct object_info_table object_info_tbl; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_2__ {unsigned int display_objid; } ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dc_bios*,unsigned int,struct slot_layout_info*) ;

__attribute__((used)) static enum bp_result FUNC_3(
 struct dc_bios *VAR_2,
 unsigned int VAR_3,
 struct slot_layout_info *VAR_4)
{
 unsigned int VAR_5;
 struct bios_parser *VAR_6 = FUNC_0(VAR_2);
 enum bp_result VAR_7;
 struct object_info_table *VAR_8;
 struct display_object_info_table_v1_4 *VAR_9;

 if (VAR_4 == ((void*)0)) {
  FUNC_1("Invalid slot_layout_info\n");
  return VAR_0;
 }
 VAR_8 = &VAR_6->object_info_tbl;
 VAR_9 = VAR_8->v1_4;

 VAR_7 = VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_9->number_of_path; ++VAR_5) {

  if (VAR_3 ==
   VAR_9->display_path[VAR_5].display_objid) {
   VAR_7 = FUNC_2(VAR_2, VAR_5,
    VAR_4);
   break;
  }
 }
 return VAR_7;
}
