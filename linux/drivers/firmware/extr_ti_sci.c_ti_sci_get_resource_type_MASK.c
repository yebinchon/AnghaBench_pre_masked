
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ti_sci_rm_type_map {scalar_t__ dev_id; scalar_t__ type; } ;
struct ti_sci_info {TYPE_1__* desc; } ;
struct TYPE_2__ {struct ti_sci_rm_type_map* rm_type_map; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ti_sci_info *VAR_1, u16 VAR_2,
        u16 *VAR_3)
{
 struct ti_sci_rm_type_map *VAR_4 = VAR_1->desc->rm_type_map;
 bool VAR_5 = 0;
 int VAR_6;


 if (!VAR_4) {
  *VAR_3 = VAR_2;
  return 0;
 }

 for (VAR_6 = 0; VAR_4[VAR_6].dev_id; VAR_6++) {
  if (VAR_4[VAR_6].dev_id == VAR_2) {
   *VAR_3 = VAR_4[VAR_6].type;
   VAR_5 = 1;
   break;
  }
 }

 if (!VAR_5)
  return -VAR_0;

 return 0;
}
