
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i2c_msg {int flags; } ;
struct i2c_adapter {int timeout; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct cdns_i2c {int err_status; TYPE_2__ adap; int xfer_done; struct i2c_msg* p_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct cdns_i2c*) ;
 int FUNC_2 (struct cdns_i2c*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct cdns_i2c *VAR_9, struct i2c_msg *VAR_10,
  struct i2c_adapter *VAR_11)
{
 unsigned long VAR_12;
 u32 VAR_13;

 VAR_9->p_msg = VAR_10;
 VAR_9->err_status = 0;
 FUNC_6(&VAR_9->xfer_done);


 VAR_13 = FUNC_3(VAR_1);
 if (VAR_10->flags & VAR_8) {
  if (VAR_13 & VAR_0)
   FUNC_4(VAR_13 & ~VAR_0,
     VAR_1);
 } else {
  if (!(VAR_13 & VAR_0))
   FUNC_4(VAR_13 | VAR_0,
     VAR_1);
 }


 if (VAR_10->flags & VAR_7)
  FUNC_1(VAR_9);
 else
  FUNC_2(VAR_9);


 VAR_12 = FUNC_7(&VAR_9->xfer_done, VAR_11->timeout);
 if (VAR_12 == 0) {
  FUNC_0(VAR_11);
  FUNC_5(VAR_9->adap.dev.parent,
    "timeout waiting on completion\n");
  return -VAR_6;
 }

 FUNC_4(VAR_3,
     VAR_2);


 if (VAR_9->err_status & VAR_4)
  return -VAR_5;

 return 0;
}
