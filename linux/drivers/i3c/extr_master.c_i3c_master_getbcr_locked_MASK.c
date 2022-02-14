
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_master_controller {int dummy; } ;
struct i3c_device_info {int bcr; int dyn_addr; } ;
struct i3c_ccc_getbcr {int bcr; } ;
struct i3c_ccc_cmd_dest {int dummy; } ;
struct i3c_ccc_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i3c_ccc_cmd_dest*) ;
 struct i3c_ccc_getbcr* FUNC_1 (struct i3c_ccc_cmd_dest*,int ,int) ;
 int FUNC_2 (struct i3c_ccc_cmd*,int,int ,struct i3c_ccc_cmd_dest*,int) ;
 int FUNC_3 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

__attribute__((used)) static int FUNC_4(struct i3c_master_controller *VAR_2,
        struct i3c_device_info *VAR_3)
{
 struct i3c_ccc_getbcr *VAR_4;
 struct i3c_ccc_cmd_dest VAR_5;
 struct i3c_ccc_cmd VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(&VAR_5, VAR_3->dyn_addr, sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_6, 1, VAR_1, &VAR_5, 1);
 VAR_7 = FUNC_3(VAR_2, &VAR_6);
 if (VAR_7)
  goto out;

 VAR_3->bcr = VAR_4->bcr;

out:
 FUNC_0(&VAR_5);

 return VAR_7;
}
