
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct stv0297_state {int dummy; } ;
struct dvb_frontend {struct stv0297_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0297_state*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 * VAR_1)
{
 struct stv0297_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3[2];

 FUNC_0(VAR_2, 0x07, VAR_3, 2);
 *VAR_1 = VAR_3[1] << 8 | VAR_3[0];

 return 0;
}
