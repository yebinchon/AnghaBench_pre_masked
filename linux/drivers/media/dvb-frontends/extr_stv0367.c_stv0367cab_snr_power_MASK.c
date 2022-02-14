
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0367_state {int dummy; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;
typedef enum stv0367cab_mod { ____Placeholder_stv0367cab_mod } stv0367cab_mod ;


 int VAR_0 ;







 int FUNC_0 (struct stv0367_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 struct stv0367_state *VAR_2 = VAR_1->demodulator_priv;
 enum stv0367cab_mod VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 switch (VAR_3) {
 case 129:
  return 21904;
 case 132:
  return 20480;
 case 130:
  return 23040;
 case 128:
  return 21504;
 case 133:
  return 23616;
 case 131:
  return 21760;
 case 134:
  return 21280;
 default:
  break;
 }

 return 1;
}
