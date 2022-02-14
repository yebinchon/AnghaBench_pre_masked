
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx22702_state* demodulator_priv; } ;
struct cx22702_state {TYPE_1__* config; } ;
struct TYPE_2__ {int output_mode; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct cx22702_state*,int,int) ;
 int* VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 int VAR_2;
 struct cx22702_state *VAR_3 = VAR_1->demodulator_priv;

 FUNC_2(VAR_3, 0x00, 0x02);

 FUNC_3(10);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2 += 2)
  FUNC_2(VAR_3, VAR_0[VAR_2], VAR_0[VAR_2 + 1]);

 FUNC_2(VAR_3, 0xf8, (VAR_3->config->output_mode << 1)
  & 0x02);

 FUNC_1(VAR_1, 0);

 return 0;
}
