
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lnbp21 {int config; int override_or; int override_and; int i2c; int i2c_addr; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_4,
         enum fe_sec_voltage VAR_5)
{
 struct lnbp21 *VAR_6 = (struct lnbp21 *) VAR_4->sec_priv;
 struct i2c_msg VAR_7 = { .addr = VAR_6->i2c_addr, .flags = 0,
    .buf = &VAR_6->config,
    .len = sizeof(VAR_6->config) };

 VAR_6->config &= ~(VAR_3 | VAR_2);

 switch(VAR_5) {
 case 128:
  break;
 case 130:
  VAR_6->config |= VAR_2;
  break;
 case 129:
  VAR_6->config |= (VAR_2 | VAR_3);
  break;
 default:
  return -VAR_0;
 }

 VAR_6->config |= VAR_6->override_or;
 VAR_6->config &= VAR_6->override_and;

 return (FUNC_0(VAR_6->i2c, &VAR_7, 1) == 1) ? 0 : -VAR_1;
}
