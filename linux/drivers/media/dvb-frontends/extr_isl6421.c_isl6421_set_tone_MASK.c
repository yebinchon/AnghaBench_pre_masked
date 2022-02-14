
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl6421 {int i2c; int override_and; int config; int override_or; int i2c_addr; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3,
       enum fe_sec_tone_mode VAR_4)
{
 struct isl6421 *VAR_5 = (struct isl6421 *) VAR_3->sec_priv;
 struct i2c_msg VAR_6 = { .addr = VAR_5->i2c_addr, .flags = 0,
          .buf = &VAR_5->config,
          .len = sizeof(VAR_5->config) };

 switch (VAR_4) {
 case 128:
  VAR_5->config |= VAR_2;
  break;
 case 129:
  VAR_5->config &= ~VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_5->config |= VAR_5->override_or;
 VAR_5->config &= VAR_5->override_and;

 return (FUNC_0(VAR_5->i2c, &VAR_6, 1) == 1) ? 0 : -VAR_1;
}
