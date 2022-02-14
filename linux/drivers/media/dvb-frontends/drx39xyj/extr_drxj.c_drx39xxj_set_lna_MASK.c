
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtv_frontend_properties {scalar_t__ lna; } ;
struct dvb_frontend {struct drx39xxj_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct drxj_data {int has_lna; } ;
struct drx_demod_instance {struct drxj_data* my_ext_attr; } ;
struct drx39xxj_state {struct drx_demod_instance* demod; } ;


 int VAR_0 ;
 int FUNC_0 (struct drx_demod_instance*,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct drx39xxj_state *VAR_3 = VAR_1->demodulator_priv;
 struct drx_demod_instance *VAR_4 = VAR_3->demod;
 struct drxj_data *VAR_5 = VAR_4->my_ext_attr;

 if (VAR_2->lna) {
  if (!VAR_5->has_lna) {
   FUNC_1("LNA is not supported on this device!\n");
   return -VAR_0;

  }
 }

 return FUNC_0(VAR_4, VAR_2->lna);
}
