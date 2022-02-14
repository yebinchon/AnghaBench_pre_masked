
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct dib7000p_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 * VAR_1)
{
 struct dib7000p_state *VAR_2 = VAR_0->demodulator_priv;
 u16 VAR_3 = FUNC_0(VAR_2, 394);
 *VAR_1 = 65535 - VAR_3;
 return 0;
}
