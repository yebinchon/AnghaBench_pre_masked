
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lnbp21 {int i2c; int override_and; int config; int override_or; int i2c_addr; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, long VAR_3)
{
 struct lnbp21 *VAR_4 = (struct lnbp21 *) VAR_2->sec_priv;
 struct i2c_msg VAR_5 = { .addr = VAR_4->i2c_addr, .flags = 0,
    .buf = &VAR_4->config,
    .len = sizeof(VAR_4->config) };

 if (VAR_3)
  VAR_4->config |= VAR_1;
 else
  VAR_4->config &= ~VAR_1;

 VAR_4->config |= VAR_4->override_or;
 VAR_4->config &= VAR_4->override_and;

 return (FUNC_0(VAR_4->i2c, &VAR_5, 1) == 1) ? 0 : -VAR_0;
}
