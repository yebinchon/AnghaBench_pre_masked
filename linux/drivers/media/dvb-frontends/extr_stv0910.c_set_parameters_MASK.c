
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv {int symbol_rate; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int symbol_rate; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct stv* demodulator_priv; } ;


 int FUNC_0 (struct stv*,struct dtv_frontend_properties*) ;
 int FUNC_1 (struct stv*) ;
 int FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 int VAR_1 = 0;
 struct stv *VAR_2 = VAR_0->demodulator_priv;
 struct dtv_frontend_properties *VAR_3 = &VAR_0->dtv_property_cache;

 FUNC_1(VAR_2);
 if (VAR_0->ops.tuner_ops.set_params)
  VAR_0->ops.tuner_ops.set_params(VAR_0);
 VAR_2->symbol_rate = VAR_3->symbol_rate;
 VAR_1 = FUNC_0(VAR_2, VAR_3);
 return VAR_1;
}
