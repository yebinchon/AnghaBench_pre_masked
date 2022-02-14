
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int msg_num; int cmd; scalar_t__ addr_width; scalar_t__ data_len; struct i2c_msg* msg; } ;
struct mlxcpld_i2c_priv {TYPE_1__ xfer; } ;
struct i2c_msg {int flags; scalar_t__ len; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mlxcpld_i2c_priv *VAR_1,
     struct i2c_msg *VAR_2, int VAR_3,
     u8 VAR_4)
{
 VAR_1->xfer.msg = VAR_2;
 VAR_1->xfer.msg_num = VAR_3;







 VAR_1->xfer.cmd = VAR_2[VAR_3 - 1].flags & VAR_0;

 if (VAR_1->xfer.cmd == VAR_0 && VAR_4 != VAR_2[0].len) {
  VAR_1->xfer.addr_width = VAR_2[0].len;
  VAR_1->xfer.data_len = VAR_4 - VAR_1->xfer.addr_width;
 } else {
  VAR_1->xfer.addr_width = 0;
  VAR_1->xfer.data_len = VAR_4;
 }
}
