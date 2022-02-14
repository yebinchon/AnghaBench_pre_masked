
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {scalar_t__ transmission_mode; scalar_t__ guard_interval; scalar_t__ modulation; scalar_t__ code_rate_HP; } ;
struct dvb_frontend {TYPE_2__ ops; struct dib7000p_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_6__ {scalar_t__ enMpegOutput; int output_mode; } ;
struct dib7000p_state {scalar_t__ version; TYPE_3__ cfg; scalar_t__ agc_state; int sfn_workaround_active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,struct dtv_frontend_properties*) ;
 int FUNC_4 (struct dib7000p_state*,int ) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dib7000p_state*,int ) ;
 int FUNC_7 (struct dib7000p_state*,int ) ;
 int FUNC_8 (struct dvb_frontend*,int ) ;
 int FUNC_9 (struct dvb_frontend*,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_13(struct dvb_frontend *VAR_9)
{
 struct dtv_frontend_properties *VAR_10 = &VAR_9->dtv_property_cache;
 struct dib7000p_state *VAR_11 = VAR_9->demodulator_priv;
 int VAR_12, VAR_13;

 if (VAR_11->version == VAR_6)
  FUNC_8(VAR_9, 0);
 else
  FUNC_4(VAR_11, VAR_4);


 VAR_11->sfn_workaround_active = VAR_8;

 if (VAR_9->ops.tuner_ops.set_params)
  VAR_9->ops.tuner_ops.set_params(VAR_9);


 VAR_11->agc_state = 0;
 do {
  VAR_12 = FUNC_0(VAR_9);
  if (VAR_12 != -1)
   FUNC_11(VAR_12);
 } while (VAR_12 != -1);

 if (VAR_10->transmission_mode == VAR_7 ||
  VAR_10->guard_interval == VAR_2 || VAR_10->modulation == VAR_5 || VAR_10->code_rate_HP == VAR_1) {
  int VAR_14 = 800, VAR_15;

  FUNC_2(VAR_9);
  do {
   FUNC_11(1);
   VAR_15 = FUNC_1(VAR_9);
  } while (VAR_15 == 0 && VAR_14--);

  FUNC_10("autosearch returns: %d\n", VAR_15);
  if (VAR_15 == 0 || VAR_15 == 1)
   return 0;

  FUNC_3(VAR_9, VAR_10);
 }

 VAR_13 = FUNC_5(VAR_9);


 if (VAR_11->version == VAR_6) {
  FUNC_9(VAR_9, VAR_11->cfg.output_mode);
  if (VAR_11->cfg.enMpegOutput == 0) {
   FUNC_6(VAR_11, VAR_3);
   FUNC_7(VAR_11, VAR_0);
  }
 } else
  FUNC_4(VAR_11, VAR_11->cfg.output_mode);

 return VAR_13;
}
