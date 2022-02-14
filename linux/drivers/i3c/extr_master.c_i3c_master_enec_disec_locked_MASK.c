
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i3c_master_controller {int dummy; } ;
struct i3c_ccc_events {int events; } ;
struct i3c_ccc_cmd_dest {int dummy; } ;
struct i3c_ccc_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i3c_ccc_cmd_dest*) ;
 struct i3c_ccc_events* FUNC_3 (struct i3c_ccc_cmd_dest*,int ,int) ;
 int FUNC_4 (struct i3c_ccc_cmd*,int,int ,struct i3c_ccc_cmd_dest*,int) ;
 int FUNC_5 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

__attribute__((used)) static int FUNC_6(struct i3c_master_controller *VAR_2,
     u8 VAR_3, bool VAR_4, u8 VAR_5)
{
 struct i3c_ccc_events *VAR_6;
 struct i3c_ccc_cmd_dest VAR_7;
 struct i3c_ccc_cmd VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(&VAR_7, VAR_3, sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_0;

 VAR_6->events = VAR_5;
 FUNC_4(&VAR_8, 0,
    VAR_4 ?
    FUNC_1(VAR_3 == VAR_1) :
    FUNC_0(VAR_3 == VAR_1),
    &VAR_7, 1);
 VAR_9 = FUNC_5(VAR_2, &VAR_8);
 FUNC_2(&VAR_7);

 return VAR_9;
}
