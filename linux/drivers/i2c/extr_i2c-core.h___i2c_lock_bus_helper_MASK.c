
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dev; TYPE_1__* algo; } ;
struct TYPE_2__ {int smbus_xfer_atomic; int master_xfer_atomic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 scalar_t__ FUNC_4 (struct i2c_adapter*,int ) ;

__attribute__((used)) static inline int FUNC_5(struct i2c_adapter *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_2()) {
  FUNC_0(!VAR_2->algo->master_xfer_atomic && !VAR_2->algo->smbus_xfer_atomic,
       "No atomic I2C transfer handler for '%s'\n", FUNC_1(&VAR_2->dev));
  VAR_3 = FUNC_4(VAR_2, VAR_1) ? 0 : -VAR_0;
 } else {
  FUNC_3(VAR_2, VAR_1);
 }

 return VAR_3;
}
