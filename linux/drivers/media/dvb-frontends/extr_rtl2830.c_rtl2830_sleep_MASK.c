
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2830_dev {int sleeping; scalar_t__ fe_status; } ;
struct i2c_client {int dummy; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;


 struct rtl2830_dev* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->demodulator_priv;
 struct rtl2830_dev *VAR_2 = FUNC_0(VAR_1);

 VAR_2->sleeping = 1;
 VAR_2->fe_status = 0;

 return 0;
}
