
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl2830_dev {scalar_t__ post_bit_error; scalar_t__ post_bit_error_prev; } ;
struct i2c_client {int dummy; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;


 struct rtl2830_dev* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->demodulator_priv;
 struct rtl2830_dev *VAR_3 = FUNC_0(VAR_2);

 *VAR_1 = (VAR_3->post_bit_error - VAR_3->post_bit_error_prev);
 VAR_3->post_bit_error_prev = VAR_3->post_bit_error;

 return 0;
}
