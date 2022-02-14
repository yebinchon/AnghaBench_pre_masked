
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl2832_dev {scalar_t__ post_bit_error; scalar_t__ post_bit_error_prev; } ;
struct dvb_frontend {struct rtl2832_dev* demodulator_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct rtl2832_dev *VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = (VAR_2->post_bit_error - VAR_2->post_bit_error_prev);
 VAR_2->post_bit_error_prev = VAR_2->post_bit_error;

 return 0;
}
