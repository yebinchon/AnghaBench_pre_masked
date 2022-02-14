
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv0297_state {int last_ber; } ;
struct dvb_frontend {struct stv0297_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0297_state*,int,int*,int) ;
 int FUNC_1 (struct stv0297_state*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 * VAR_1)
{
 struct stv0297_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3[3];

 FUNC_0(VAR_2, 0xA0, VAR_3, 3);
 if (!(VAR_3[0] & 0x80)) {
  VAR_2->last_ber = VAR_3[2] << 8 | VAR_3[1];
  FUNC_1(VAR_2, 0xA0, 0x80, 0x80);
 }

 *VAR_1 = VAR_2->last_ber;

 return 0;
}
