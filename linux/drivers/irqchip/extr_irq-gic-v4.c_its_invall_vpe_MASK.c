
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {int dummy; } ;
struct its_cmd_info {int cmd_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_vpe*,struct its_cmd_info*) ;

int FUNC_1(struct its_vpe *VAR_1)
{
 struct its_cmd_info VAR_2 = {
  .cmd_type = VAR_0,
 };

 return FUNC_0(VAR_1, &VAR_2);
}
