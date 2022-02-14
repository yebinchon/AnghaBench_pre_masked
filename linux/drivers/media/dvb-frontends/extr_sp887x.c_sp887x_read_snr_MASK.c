
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sp887x_state {int dummy; } ;
struct dvb_frontend {struct sp887x_state* demodulator_priv; } ;


 int FUNC_0 (struct sp887x_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct sp887x_state* VAR_2 = VAR_0->demodulator_priv;

 u16 VAR_3 = FUNC_0(VAR_2, 0xf16);
 *VAR_1 = (VAR_3 << 4) | (VAR_3 >> 8);

 return 0;
}
