
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_master_controller {int dummy; } ;
struct i3c_ccc_cmd_dest {int dummy; } ;
struct i3c_ccc_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i3c_ccc_cmd_dest*) ;
 int FUNC_1 (struct i3c_ccc_cmd_dest*,int ,int ) ;
 int FUNC_2 (struct i3c_ccc_cmd*,int,int ,struct i3c_ccc_cmd_dest*,int) ;
 int FUNC_3 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

int FUNC_4(struct i3c_master_controller *VAR_2)
{
 struct i3c_ccc_cmd_dest VAR_3;
 struct i3c_ccc_cmd VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3, VAR_0, 0);
 FUNC_2(&VAR_4, 0, VAR_1, &VAR_3, 1);
 VAR_5 = FUNC_3(VAR_2, &VAR_4);
 FUNC_0(&VAR_3);

 return VAR_5;
}
