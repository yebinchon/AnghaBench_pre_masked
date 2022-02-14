
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_vlpi_map {int dummy; } ;
struct TYPE_2__ {struct its_vlpi_map* map; } ;
struct its_cmd_info {TYPE_1__ member_1; int cmd_type; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct its_cmd_info*) ;

int FUNC_1(int VAR_1, struct its_vlpi_map *VAR_2)
{
 struct its_cmd_info VAR_3 = {
  .cmd_type = VAR_0,
  {
   .map = VAR_2,
  },
 };

 return FUNC_0(VAR_1, &VAR_3);
}
