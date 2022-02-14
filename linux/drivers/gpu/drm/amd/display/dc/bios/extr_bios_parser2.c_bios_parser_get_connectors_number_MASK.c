
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct dc_bios {int dummy; } ;
struct TYPE_6__ {TYPE_2__* v1_4; } ;
struct bios_parser {TYPE_3__ object_info_tbl; } ;
struct TYPE_5__ {unsigned int number_of_path; TYPE_1__* display_path; } ;
struct TYPE_4__ {scalar_t__ encoderobjid; } ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;

__attribute__((used)) static uint8_t FUNC_1(struct dc_bios *VAR_0)
{
 struct bios_parser *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = 0;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->object_info_tbl.v1_4->number_of_path; VAR_3++) {
  if (VAR_1->object_info_tbl.v1_4->display_path[VAR_3].encoderobjid != 0)
   VAR_2++;
 }
 return VAR_2;
}
