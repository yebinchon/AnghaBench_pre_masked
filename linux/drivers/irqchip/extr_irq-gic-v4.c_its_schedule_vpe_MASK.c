
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {int dummy; } ;
struct its_cmd_info {int cmd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct its_vpe*,struct its_cmd_info*) ;
 int FUNC_2 () ;

int FUNC_3(struct its_vpe *VAR_2, bool VAR_3)
{
 struct its_cmd_info VAR_4;

 FUNC_0(FUNC_2());

 VAR_4.cmd_type = VAR_3 ? VAR_1 : VAR_0;

 return FUNC_1(VAR_2, &VAR_4);
}
