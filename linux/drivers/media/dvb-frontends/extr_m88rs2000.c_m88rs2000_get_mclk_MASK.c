
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct m88rs2000_state*,int) ;

__attribute__((used)) static u32 FUNC_1(struct dvb_frontend *VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_1->demodulator_priv;
 u32 VAR_3;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0x86);
 if (!VAR_4 || VAR_4 == 0xff)
  return 0;

 VAR_4 /= 2;
 VAR_4 += 1;

 VAR_3 = (u32)(VAR_4 * VAR_0 + 28 / 2) / 28;

 return VAR_3;
}
