
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_state {int currentfreq; } ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {struct s921_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;
 struct s921_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 FUNC_0("\n");



 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->currentfreq = VAR_1->frequency;

 return 0;
}
