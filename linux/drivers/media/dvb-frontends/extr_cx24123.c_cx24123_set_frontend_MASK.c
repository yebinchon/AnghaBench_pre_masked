
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int symbol_rate; int fec_inner; int inversion; int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {TYPE_3__* config; int currentsymbolrate; int currentfreq; } ;
struct TYPE_6__ {int (* agc_callback ) (struct dvb_frontend*) ;int dont_use_pll; int (* set_ts_params ) (struct dvb_frontend*,int ) ;} ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct cx24123_state*,int) ;
 int FUNC_2 (struct cx24123_state*,int ) ;
 int FUNC_3 (struct cx24123_state*,int ) ;
 int FUNC_4 (struct cx24123_state*,int ) ;
 int FUNC_5 (struct cx24123_state*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct dvb_frontend*,int ) ;
 int FUNC_9 (struct dvb_frontend*) ;
 int FUNC_10 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_0)
{
 struct cx24123_state *VAR_1 = VAR_0->demodulator_priv;
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;

 FUNC_6("\n");

 if (VAR_1->config->set_ts_params)
  VAR_1->config->set_ts_params(VAR_0, 0);

 VAR_1->currentfreq = VAR_2->frequency;
 VAR_1->currentsymbolrate = VAR_2->symbol_rate;

 FUNC_3(VAR_1, VAR_2->inversion);
 FUNC_2(VAR_1, VAR_2->fec_inner);
 FUNC_4(VAR_1, VAR_2->symbol_rate);

 if (!VAR_1->config->dont_use_pll)
  FUNC_0(VAR_0);
 else if (VAR_0->ops.tuner_ops.set_params)
  VAR_0->ops.tuner_ops.set_params(VAR_0);
 else
  FUNC_7("it seems I don't have a tuner...");


 FUNC_5(VAR_1, 0x03, (FUNC_1(VAR_1, 0x03) | 0x07));
 FUNC_5(VAR_1, 0x00, 0x10);
 FUNC_5(VAR_1, 0x00, 0);

 if (VAR_1->config->agc_callback)
  VAR_1->config->agc_callback(VAR_0);

 return 0;
}
