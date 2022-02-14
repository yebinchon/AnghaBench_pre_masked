
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stv0299_state {int mcr_reg; TYPE_1__* config; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;
struct TYPE_2__ {int* inittab; scalar_t__ op0_off; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stv0299_state*,int,int) ;

__attribute__((used)) static int FUNC_3 (struct dvb_frontend* VAR_0)
{
 struct stv0299_state* VAR_1 = VAR_0->demodulator_priv;
 int VAR_2;
 u8 VAR_3;
 u8 VAR_4;

 FUNC_0("stv0299: init chip\n");

 FUNC_2(VAR_1, 0x02, 0x30 | VAR_1->mcr_reg);
 FUNC_1(50);

 for (VAR_2 = 0; ; VAR_2 += 2) {
  VAR_3 = VAR_1->config->inittab[VAR_2];
  VAR_4 = VAR_1->config->inittab[VAR_2+1];
  if (VAR_3 == 0xff && VAR_4 == 0xff)
   break;
  if (VAR_3 == 0x0c && VAR_1->config->op0_off)
   VAR_4 &= ~0x10;
  if (VAR_3 == 0x2)
   VAR_1->mcr_reg = VAR_4 & 0xf;
  FUNC_2(VAR_1, VAR_3, VAR_4);
 }

 return 0;
}
