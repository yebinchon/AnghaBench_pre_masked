
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct au8522_state* demodulator_priv; } ;
struct au8522_state {scalar_t__ current_modulation; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct au8522_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct au8522_state *VAR_3 = VAR_1->demodulator_priv;

 if (VAR_3->current_modulation == VAR_0)
  *VAR_2 = FUNC_0(VAR_3, 0x0087);
 else
  *VAR_2 = FUNC_0(VAR_3, 0x0543);

 return 0;
}
