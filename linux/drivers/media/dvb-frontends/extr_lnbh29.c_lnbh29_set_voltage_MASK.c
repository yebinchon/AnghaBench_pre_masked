
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lnbh29_priv {TYPE_1__* i2c; int * config; int i2c_address; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct dvb_frontend {struct lnbh29_priv* sec_priv; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,struct i2c_msg*,int) ;
 int FUNC_2 (struct lnbh29_priv*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_6,
         enum fe_sec_voltage VAR_7)
{
 struct lnbh29_priv *VAR_8 = VAR_6->sec_priv;
 u8 VAR_9;
 int VAR_10;
 struct i2c_msg VAR_11 = {
  .addr = VAR_8->i2c_address,
  .flags = 0,
  .len = sizeof(VAR_8->config),
  .buf = VAR_8->config
 };

 switch (VAR_7) {
 case 128:
  VAR_9 = VAR_2;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 default:
  return -VAR_0;
 }
 VAR_8->config[1] &= ~VAR_5;
 VAR_8->config[1] |= VAR_9;

 VAR_10 = FUNC_1(VAR_8->i2c, &VAR_11, 1);
 if (VAR_10 >= 0 && VAR_10 != 1)
  VAR_10 = -VAR_1;
 if (VAR_10 < 0) {
  FUNC_0(&VAR_8->i2c->dev, "LNBH29 I2C transfer error (%d)\n",
   VAR_10);
  return VAR_10;
 }


 FUNC_3(6000, 20000);

 if (VAR_7 == 128)
  return 0;

 return FUNC_2(VAR_8);
}
