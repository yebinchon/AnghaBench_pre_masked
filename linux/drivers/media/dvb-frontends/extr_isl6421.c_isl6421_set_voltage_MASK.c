
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct isl6421 {int config; int is_off; int override_or; int override_and; TYPE_1__* i2c; int i2c_addr; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,struct i2c_msg*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_7,
          enum fe_sec_voltage VAR_8)
{
 int VAR_9;
 u8 VAR_10;
 bool VAR_11;
 struct isl6421 *VAR_12 = (struct isl6421 *) VAR_7->sec_priv;
 struct i2c_msg VAR_13[2] = {
  {
    .addr = VAR_12->i2c_addr,
    .flags = 0,
    .buf = &VAR_12->config,
    .len = 1,
  }, {
    .addr = VAR_12->i2c_addr,
    .flags = VAR_2,
    .buf = &VAR_10,
    .len = 1,
  }

 };

 VAR_12->config &= ~(VAR_6 | VAR_4);

 switch(VAR_8) {
 case 128:
  VAR_11 = 1;
  break;
 case 130:
  VAR_11 = 0;
  VAR_12->config |= VAR_4;
  break;
 case 129:
  VAR_11 = 0;
  VAR_12->config |= (VAR_4 | VAR_6);
  break;
 default:
  return -VAR_0;
 }






 if (VAR_12->is_off && !VAR_11)
  VAR_12->config |= VAR_3;

 VAR_12->config |= VAR_12->override_or;
 VAR_12->config &= VAR_12->override_and;

 VAR_9 = FUNC_1(VAR_12->i2c, VAR_13, 2);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 != 2)
  return -VAR_1;


 VAR_12->is_off = VAR_11;


 if (!VAR_11 && (VAR_10 & VAR_5))
  FUNC_2(1000);


 if ((VAR_12->config & VAR_3) &&
     !(VAR_12->override_or & VAR_3)) {
  VAR_12->config &= ~VAR_3;

  VAR_9 = FUNC_1(VAR_12->i2c, VAR_13, 2);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_9 != 2)
   return -VAR_1;
 }


 if (!VAR_11 && (VAR_10 & VAR_5)) {
  VAR_12->config &= ~(VAR_6 | VAR_4);
  VAR_9 = FUNC_1(VAR_12->i2c, VAR_13, 1);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_9 != 1)
   return -VAR_1;
  VAR_12->is_off = 1;

  FUNC_0(&VAR_12->i2c->dev,
    "Overload current detected. disabling LNBf power\n");
  return -VAR_0;
 }

 return 0;
}
