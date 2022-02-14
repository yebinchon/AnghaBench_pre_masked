
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct m88rs2000_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 return VAR_3;
}
