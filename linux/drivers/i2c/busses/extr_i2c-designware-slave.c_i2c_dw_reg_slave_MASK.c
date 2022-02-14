
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int flags; int addr; int adapter; } ;
struct dw_i2c_dev {scalar_t__ rx_outstanding; scalar_t__ abort_source; int status; scalar_t__ msg_err; scalar_t__ msg_read_idx; scalar_t__ msg_write_idx; scalar_t__ cmd_err; struct i2c_client* slave; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dw_i2c_dev*) ;
 int FUNC_1 (struct dw_i2c_dev*) ;
 int FUNC_2 (struct dw_i2c_dev*,int ,int ) ;
 struct dw_i2c_dev* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5)
{
 struct dw_i2c_dev *VAR_6 = FUNC_3(VAR_5->adapter);

 if (VAR_6->slave)
  return -VAR_2;
 if (VAR_5->flags & VAR_3)
  return -VAR_1;
 FUNC_4(VAR_6->dev);





 FUNC_0(VAR_6);
 FUNC_2(VAR_6, VAR_5->addr, VAR_0);
 VAR_6->slave = VAR_5;

 FUNC_1(VAR_6);

 VAR_6->cmd_err = 0;
 VAR_6->msg_write_idx = 0;
 VAR_6->msg_read_idx = 0;
 VAR_6->msg_err = 0;
 VAR_6->status = VAR_4;
 VAR_6->abort_source = 0;
 VAR_6->rx_outstanding = 0;

 return 0;
}
