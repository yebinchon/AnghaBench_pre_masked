
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_vlpi_map {int dummy; } ;
struct TYPE_2__ {struct its_vlpi_map* map; } ;
struct its_cmd_info {TYPE_1__ member_1; int cmd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,struct its_cmd_info*) ;

int FUNC_3(int VAR_2, struct its_vlpi_map *VAR_3)
{
 struct its_cmd_info VAR_4 = {
  .cmd_type = VAR_1,
  {
   .map = VAR_3,
  },
 };
 int VAR_5;





 FUNC_1(VAR_2, VAR_0);

 VAR_5 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_5)
  FUNC_0(VAR_2, VAR_0);

 return VAR_5;
}
