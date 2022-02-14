
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl6405 {int config; int override_or; int override_and; int i2c; int i2c_addr; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_6,
          enum fe_sec_voltage VAR_7)
{
 struct isl6405 *VAR_8 = (struct isl6405 *) VAR_6->sec_priv;
 struct i2c_msg VAR_9 = { .addr = VAR_8->i2c_addr, .flags = 0,
    .buf = &VAR_8->config,
    .len = sizeof(VAR_8->config) };

 if (VAR_8->override_or & 0x80) {
  VAR_8->config &= ~(VAR_5 | VAR_3);
  switch (VAR_7) {
  case 128:
   break;
  case 130:
   VAR_8->config |= VAR_3;
   break;
  case 129:
   VAR_8->config |= (VAR_3 | VAR_5);
   break;
  default:
   return -VAR_0;
  }
 } else {
  VAR_8->config &= ~(VAR_4 | VAR_2);
  switch (VAR_7) {
  case 128:
   break;
  case 130:
   VAR_8->config |= VAR_2;
   break;
  case 129:
   VAR_8->config |= (VAR_2 | VAR_4);
   break;
  default:
   return -VAR_0;
  }
 }
 VAR_8->config |= VAR_8->override_or;
 VAR_8->config &= VAR_8->override_and;

 return (FUNC_0(VAR_8->i2c, &VAR_9, 1) == 1) ? 0 : -VAR_1;
}
