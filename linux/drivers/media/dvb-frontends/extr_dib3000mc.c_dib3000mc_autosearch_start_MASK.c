
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dtv_frontend_properties {scalar_t__ hierarchy; void* code_rate_LP; void* code_rate_HP; int modulation; int guard_interval; int transmission_mode; } ;
struct dvb_frontend {struct dib3000mc_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct dib3000mc_state {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (struct dib3000mc_state*,struct dtv_frontend_properties*,int) ;
 int FUNC_2 (struct dib3000mc_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_4->dtv_property_cache;
 struct dib3000mc_state *VAR_6 = VAR_4->demodulator_priv;
 u16 VAR_7;

 struct dtv_frontend_properties VAR_8;

 VAR_8 = *VAR_5;




 VAR_8.transmission_mode = VAR_3;
 VAR_8.guard_interval = VAR_1;
 VAR_8.modulation = VAR_2;
 VAR_8.code_rate_HP = VAR_0;
 VAR_8.code_rate_LP = VAR_0;
 VAR_8.hierarchy = 0;

 FUNC_1(VAR_6, &VAR_8, 11);

 VAR_7 = FUNC_0(VAR_6, 0);
 FUNC_2(VAR_6, 0, VAR_7 | (1 << 8));
 FUNC_0(VAR_6, 511);
 FUNC_2(VAR_6, 0, VAR_7);

 return 0;
}
