
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda1004x_state {int dummy; } ;
struct dvb_frontend {struct tda1004x_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tda1004x_state*,int const,int const) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1, const u8 VAR_2[], int VAR_3)
{
 struct tda1004x_state* VAR_4 = VAR_1->demodulator_priv;

 if (VAR_3 != 2)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_2[0], VAR_2[1]);
}
