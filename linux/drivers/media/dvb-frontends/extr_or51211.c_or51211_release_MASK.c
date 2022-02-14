
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct or51211_state {TYPE_1__* config; } ;
struct dvb_frontend {struct or51211_state* demodulator_priv; } ;
struct TYPE_2__ {int (* sleep ) (struct dvb_frontend*) ;} ;


 int FUNC_0 (struct or51211_state*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend* VAR_0)
{
 struct or51211_state* VAR_1 = VAR_0->demodulator_priv;
 VAR_1->config->sleep(VAR_0);
 FUNC_0(VAR_1);
}
