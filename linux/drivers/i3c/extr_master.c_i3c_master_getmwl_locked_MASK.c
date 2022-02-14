
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i3c_device_info {int max_write_len; int dyn_addr; } ;
struct i3c_ccc_mwl {int len; } ;
struct TYPE_2__ {int len; } ;
struct i3c_ccc_cmd_dest {TYPE_1__ payload; } ;
struct i3c_ccc_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i3c_ccc_cmd_dest*) ;
 struct i3c_ccc_mwl* FUNC_2 (struct i3c_ccc_cmd_dest*,int ,int) ;
 int FUNC_3 (struct i3c_ccc_cmd*,int,int ,struct i3c_ccc_cmd_dest*,int) ;
 int FUNC_4 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

__attribute__((used)) static int FUNC_5(struct i3c_master_controller *VAR_3,
        struct i3c_device_info *VAR_4)
{
 struct i3c_ccc_cmd_dest VAR_5;
 struct i3c_ccc_mwl *VAR_6;
 struct i3c_ccc_cmd VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(&VAR_5, VAR_4->dyn_addr, sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(&VAR_7, 1, VAR_2, &VAR_5, 1);
 VAR_8 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_8)
  goto out;

 if (VAR_5.payload.len != sizeof(*VAR_6)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_4->max_write_len = FUNC_0(VAR_6->len);

out:
 FUNC_1(&VAR_5);

 return VAR_8;
}
