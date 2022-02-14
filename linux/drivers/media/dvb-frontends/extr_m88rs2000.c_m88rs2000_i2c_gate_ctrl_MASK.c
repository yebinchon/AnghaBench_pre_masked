
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;


 int FUNC_0 (struct m88rs2000_state*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1)
  FUNC_0(VAR_2, 0x81, 0x84);
 else
  FUNC_0(VAR_2, 0x81, 0x81);
 FUNC_1(10);
 return 0;
}
