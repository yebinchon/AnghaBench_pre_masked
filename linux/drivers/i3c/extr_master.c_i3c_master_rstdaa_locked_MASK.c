
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i3c_master_controller {int bus; } ;
struct i3c_ccc_cmd_dest {int dummy; } ;
struct i3c_ccc_cmd {int dummy; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct i3c_ccc_cmd_dest*) ;
 int FUNC_3 (struct i3c_ccc_cmd_dest*,int ,int ) ;
 int FUNC_4 (struct i3c_ccc_cmd*,int,int ,struct i3c_ccc_cmd_dest*,int) ;
 int FUNC_5 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

__attribute__((used)) static int FUNC_6(struct i3c_master_controller *VAR_3,
        u8 VAR_4)
{
 enum i3c_addr_slot_status VAR_5;
 struct i3c_ccc_cmd_dest VAR_6;
 struct i3c_ccc_cmd VAR_7;
 int VAR_8;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_3->bus, VAR_4);
 if (VAR_4 != VAR_2 && VAR_5 != VAR_1)
  return -VAR_0;

 FUNC_3(&VAR_6, VAR_4, 0);
 FUNC_4(&VAR_7, 0,
    FUNC_0(VAR_4 == VAR_2),
    &VAR_6, 1);
 VAR_8 = FUNC_5(VAR_3, &VAR_7);
 FUNC_2(&VAR_6);

 return VAR_8;
}
