
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;





 int FUNC_0 (struct m88rs2000_state*,int) ;
 int FUNC_1 (struct m88rs2000_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
     enum fe_sec_voltage VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2, 0xb2);
 VAR_3 |= 0x03;

 switch (VAR_1) {
 case 129:
  VAR_3 &= ~0x03;
  break;
 case 130:
  VAR_3 &= ~0x03;
  VAR_3 |= 0x01;
  break;
 case 128:
  break;
 }

 FUNC_1(VAR_2, 0xb2, VAR_3);

 return 0;
}
