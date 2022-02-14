
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
 u8 VAR_3;

 *VAR_1 = (FUNC_0(VAR_2, 0xd5) << 8) |
   FUNC_0(VAR_2, 0xd4);
 VAR_3 = FUNC_0(VAR_2, 0xd8);
 FUNC_1(VAR_2, 0xd8, VAR_3 & ~0x20);

 FUNC_1(VAR_2, 0xd8, VAR_3 | 0x20);
 FUNC_1(VAR_2, 0xd8, VAR_3 | 0x20);

 return 0;
}
