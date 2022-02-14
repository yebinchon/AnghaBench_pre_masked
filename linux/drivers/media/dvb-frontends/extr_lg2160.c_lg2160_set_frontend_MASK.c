
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lg216x_state {TYPE_3__* cfg; int current_frequency; } ;
struct dtv_frontend_properties {int atscmh_rs_frame_ensemble; int atscmh_parade_id; int frequency; } ;
struct TYPE_4__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; TYPE_2__ ops; struct lg216x_state* demodulator_priv; } ;
struct TYPE_6__ {int lg_chip; int spectral_inversion; } ;




 int FUNC_0 (struct lg216x_state*,int ,int ) ;
 int FUNC_1 (struct lg216x_state*,int ,int ) ;
 int FUNC_2 (struct lg216x_state*) ;
 int FUNC_3 (struct lg216x_state*,int ) ;
 int FUNC_4 (struct lg216x_state*,int ) ;
 int FUNC_5 (struct lg216x_state*,int) ;
 int FUNC_6 (struct lg216x_state*) ;
 int FUNC_7 (struct lg216x_state*,int) ;
 int FUNC_8 (struct dvb_frontend*,struct dtv_frontend_properties*) ;
 int FUNC_9 (struct lg216x_state*) ;
 int FUNC_10 (struct lg216x_state*,int ) ;
 int FUNC_11 (struct lg216x_state*) ;
 int FUNC_12 (struct lg216x_state*,int ) ;
 int FUNC_13 (struct lg216x_state*) ;
 int FUNC_14 (char*,int ) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct dvb_frontend*) ;
 int FUNC_17 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_18(struct dvb_frontend *VAR_0)
{
 struct lg216x_state *VAR_1 = VAR_0->demodulator_priv;
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;
 int VAR_3;

 FUNC_14("(%d)\n", VAR_0->dtv_property_cache.frequency);

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_3 = VAR_0->ops.tuner_ops.set_params(VAR_0);
  if (VAR_0->ops.i2c_gate_ctrl)
   VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
  if (FUNC_15(VAR_3))
   goto fail;
  VAR_1->current_frequency = VAR_0->dtv_property_cache.frequency;
 }

 VAR_3 = FUNC_0(VAR_1, 0, 0);
 if (FUNC_15(VAR_3))
  goto fail;
 VAR_3 = FUNC_1(VAR_1, 0, 0);
 if (FUNC_15(VAR_3))
  goto fail;
 VAR_3 = FUNC_5(VAR_1, 1);
 if (FUNC_15(VAR_3))
  goto fail;
 VAR_3 = FUNC_11(VAR_1);
 if (FUNC_15(VAR_3))
  goto fail;
 VAR_3 = FUNC_3(VAR_1, VAR_1->cfg->spectral_inversion);
 if (FUNC_15(VAR_3))
  goto fail;


 VAR_3 = FUNC_13(VAR_1);
 if (FUNC_15(VAR_3))
  goto fail;

 VAR_3 = FUNC_4(VAR_1, 0);
 if (FUNC_15(VAR_3))
  goto fail;

 switch (VAR_1->cfg->lg_chip) {
 case 129:
  VAR_3 = FUNC_2(VAR_1);
  if (FUNC_15(VAR_3))
   goto fail;
  break;
 case 128:
  VAR_3 = FUNC_6(VAR_1);
  if (FUNC_15(VAR_3))
   goto fail;
  break;
 }

 VAR_3 = FUNC_12(VAR_1, VAR_0->dtv_property_cache.atscmh_parade_id);
 if (FUNC_15(VAR_3))
  goto fail;

 VAR_3 = FUNC_10(VAR_1,
   VAR_0->dtv_property_cache.atscmh_rs_frame_ensemble);
 if (FUNC_15(VAR_3))
  goto fail;

 VAR_3 = FUNC_9(VAR_1);
 if (FUNC_15(VAR_3))
  goto fail;

 VAR_3 = FUNC_7(VAR_1, 1);
 FUNC_15(VAR_3);

 FUNC_8(VAR_0, VAR_2);
fail:
 return VAR_3;
}
