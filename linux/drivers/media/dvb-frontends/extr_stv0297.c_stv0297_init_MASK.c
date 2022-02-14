
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv0297_state {scalar_t__ last_ber; TYPE_1__* config; } ;
struct dvb_frontend {struct stv0297_state* demodulator_priv; } ;
struct TYPE_2__ {int* inittab; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0297_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct stv0297_state *VAR_1 = VAR_0->demodulator_priv;
 int VAR_2;


 for (VAR_2=0; !(VAR_1->config->inittab[VAR_2] == 0xff && VAR_1->config->inittab[VAR_2+1] == 0xff); VAR_2+=2)
  FUNC_1(VAR_1, VAR_1->config->inittab[VAR_2], VAR_1->config->inittab[VAR_2+1]);
 FUNC_0(200);

 VAR_1->last_ber = 0;

 return 0;
}
