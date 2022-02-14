
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int dummy; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;


 int VAR_0 ;
 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
       enum fe_sec_tone_mode VAR_2)
{
 struct cx24110_state *VAR_3 = VAR_1->demodulator_priv;

 return FUNC_1(VAR_3,0x76,(FUNC_0(VAR_3,0x76)&~0x10)|(((VAR_2==VAR_0))?0x10:0));
}
