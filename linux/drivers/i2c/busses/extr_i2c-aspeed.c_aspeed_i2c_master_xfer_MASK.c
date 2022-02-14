
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int timeout; } ;
struct aspeed_i2c_bus {int msgs_count; scalar_t__ master_state; int master_xfer_result; int lock; scalar_t__ base; scalar_t__ multi_master; TYPE_1__ adap; int cmd_complete; scalar_t__ msgs_index; struct i2c_msg* msgs; scalar_t__ cmd_err; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aspeed_i2c_bus*) ;
 int FUNC_1 (struct aspeed_i2c_bus*) ;
 struct aspeed_i2c_bus* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_5,
      struct i2c_msg *VAR_6, int VAR_7)
{
 struct aspeed_i2c_bus *VAR_8 = FUNC_2(VAR_5);
 unsigned long VAR_9, VAR_10;

 FUNC_5(&VAR_8->lock, VAR_10);
 VAR_8->cmd_err = 0;


 if (!VAR_8->multi_master &&
     (FUNC_3(VAR_8->base + VAR_1) &
      VAR_0)) {
  int VAR_11;

  FUNC_6(&VAR_8->lock, VAR_10);
  VAR_11 = FUNC_1(VAR_8);
  if (VAR_11)
   return VAR_11;
  FUNC_5(&VAR_8->lock, VAR_10);
 }

 VAR_8->cmd_err = 0;
 VAR_8->msgs = VAR_6;
 VAR_8->msgs_index = 0;
 VAR_8->msgs_count = VAR_7;

 FUNC_4(&VAR_8->cmd_complete);
 FUNC_0(VAR_8);
 FUNC_6(&VAR_8->lock, VAR_10);

 VAR_9 = FUNC_7(&VAR_8->cmd_complete,
      VAR_8->adap.timeout);

 if (VAR_9 == 0) {




  if (VAR_8->multi_master &&
      (FUNC_3(VAR_8->base + VAR_1) &
       VAR_0))
   FUNC_1(VAR_8);





  FUNC_5(&VAR_8->lock, VAR_10);
  if (VAR_8->master_state == VAR_3)
   VAR_8->master_state = VAR_2;
  FUNC_6(&VAR_8->lock, VAR_10);

  return -VAR_4;
 }

 return VAR_8->master_xfer_result;
}
