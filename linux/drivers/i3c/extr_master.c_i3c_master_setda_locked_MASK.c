
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i3c_master_controller {int dummy; } ;
struct i3c_ccc_setda {int addr; } ;
struct i3c_ccc_cmd_dest {int dummy; } ;
struct i3c_ccc_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i3c_ccc_cmd_dest*) ;
 struct i3c_ccc_setda* FUNC_1 (struct i3c_ccc_cmd_dest*,int,int) ;
 int FUNC_2 (struct i3c_ccc_cmd*,int,int ,struct i3c_ccc_cmd_dest*,int) ;
 int FUNC_3 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

__attribute__((used)) static int FUNC_4(struct i3c_master_controller *VAR_4,
       u8 VAR_5, u8 VAR_6, bool VAR_7)
{
 struct i3c_ccc_cmd_dest VAR_8;
 struct i3c_ccc_setda *VAR_9;
 struct i3c_ccc_cmd VAR_10;
 int VAR_11;

 if (!VAR_5 || !VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_1(&VAR_8, VAR_5, sizeof(*VAR_9));
 if (!VAR_9)
  return -VAR_1;

 VAR_9->addr = VAR_6 << 1;
 FUNC_2(&VAR_10, 0,
    VAR_7 ? VAR_2 : VAR_3,
    &VAR_8, 1);
 VAR_11 = FUNC_3(VAR_4, &VAR_10);
 FUNC_0(&VAR_8);

 return VAR_11;
}
