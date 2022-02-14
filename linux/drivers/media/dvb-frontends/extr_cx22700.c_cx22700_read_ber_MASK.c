
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct cx22700_state* demodulator_priv; } ;
struct cx22700_state {int dummy; } ;


 int FUNC_0 (struct cx22700_state*,int) ;
 int FUNC_1 (struct cx22700_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct cx22700_state* VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = FUNC_0 (VAR_2, 0x0c) & 0x7f;
 FUNC_1 (VAR_2, 0x0c, 0x00);

 return 0;
}
