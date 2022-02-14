
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int dummy; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;


 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
          enum fe_sec_voltage VAR_2)
{
 struct cx24110_state *VAR_3 = VAR_1->demodulator_priv;

 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_3,0x76,(FUNC_0(VAR_3,0x76)&0x3b)|0xc0);
 case 128:
  return FUNC_1(VAR_3,0x76,(FUNC_0(VAR_3,0x76)&0x3b)|0x40);
 default:
  return -VAR_0;
 }
}
