
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
 u8 VAR_3[3];
 u16 VAR_4;

 FUNC_0(VAR_2, 0x41, VAR_3, 3);
 VAR_4 = (VAR_3[1] & 0x03) << 8 | VAR_3[0];
 if (VAR_3[2] & 0x20) {
  if (VAR_4 < 0x200)
   VAR_4 = 0;
  else
   VAR_4 = VAR_4 - 0x200;
 } else {
  if (VAR_4 > 0x1ff)
   VAR_4 = 0;
  else
   VAR_4 = 0x1ff - VAR_4;
 }
 *VAR_1 = (VAR_4 << 7) | (VAR_4 >> 2);
 return 0;
}
