
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;




 int FUNC_0 (struct m88rs2000_state*,int) ;
 int FUNC_1 (struct m88rs2000_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
         enum fe_sec_tone_mode VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3, VAR_4;
 FUNC_1(VAR_2, 0x9a, 0x30);
 VAR_3 = FUNC_0(VAR_2, 0xb1);
 VAR_4 = FUNC_0(VAR_2, 0xb2);

 VAR_4 &= 0x3f;

 switch (VAR_1) {
 case 128:
  VAR_3 |= 0x4;
  VAR_3 &= 0xbc;
  break;
 case 129:
  VAR_4 |= 0x80;
  break;
 default:
  break;
 }
 FUNC_1(VAR_2, 0xb2, VAR_4);
 FUNC_1(VAR_2, 0xb1, VAR_3);
 FUNC_1(VAR_2, 0x9a, 0xb0);
 return 0;
}
