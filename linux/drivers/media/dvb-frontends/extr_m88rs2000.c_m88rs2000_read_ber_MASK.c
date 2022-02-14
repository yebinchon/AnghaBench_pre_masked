
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;


 int FUNC_0 (struct m88rs2000_state*,int) ;
 int FUNC_1 (struct m88rs2000_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3, VAR_4;

 FUNC_1(VAR_2, 0x9a, 0x30);
 VAR_3 = FUNC_0(VAR_2, 0xd8);
 if ((VAR_3 & 0x10) != 0) {
  FUNC_1(VAR_2, 0x9a, 0xb0);
  *VAR_1 = 0xffffffff;
  return 0;
 }

 *VAR_1 = (FUNC_0(VAR_2, 0xd7) << 8) |
  FUNC_0(VAR_2, 0xd6);

 VAR_4 = FUNC_0(VAR_2, 0xd9);
 FUNC_1(VAR_2, 0xd9, (VAR_4 & ~7) | 4);

 FUNC_1(VAR_2, 0xd8, (VAR_3 & ~8) | 0x30);
 FUNC_1(VAR_2, 0xd8, (VAR_3 & ~8) | 0x30);
 FUNC_1(VAR_2, 0x9a, 0xb0);

 return 0;
}
