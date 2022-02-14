
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i3c_device_info {int bcr; int max_ibi_len; int max_read_len; int dyn_addr; } ;
struct i3c_ccc_mrl {int ibi_len; int read_len; } ;
struct TYPE_2__ {int len; } ;
struct i3c_ccc_cmd_dest {TYPE_1__ payload; } ;
struct i3c_ccc_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i3c_ccc_cmd_dest*) ;
 struct i3c_ccc_mrl* FUNC_2 (struct i3c_ccc_cmd_dest*,int ,int) ;
 int FUNC_3 (struct i3c_ccc_cmd*,int,int ,struct i3c_ccc_cmd_dest*,int) ;
 int FUNC_4 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

__attribute__((used)) static int FUNC_5(struct i3c_master_controller *VAR_4,
        struct i3c_device_info *VAR_5)
{
 struct i3c_ccc_cmd_dest VAR_6;
 unsigned int VAR_7;
 struct i3c_ccc_mrl *VAR_8;
 struct i3c_ccc_cmd VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(&VAR_6, VAR_5->dyn_addr, sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_1;





 if (!(VAR_5->bcr & VAR_2))
  VAR_6.payload.len -= 1;

 VAR_7 = VAR_6.payload.len;
 FUNC_3(&VAR_9, 1, VAR_3, &VAR_6, 1);
 VAR_10 = FUNC_4(VAR_4, &VAR_9);
 if (VAR_10)
  goto out;

 if (VAR_6.payload.len != VAR_7) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_5->max_read_len = FUNC_0(VAR_8->read_len);

 if (VAR_5->bcr & VAR_2)
  VAR_5->max_ibi_len = VAR_8->ibi_len;

out:
 FUNC_1(&VAR_6);

 return VAR_10;
}
