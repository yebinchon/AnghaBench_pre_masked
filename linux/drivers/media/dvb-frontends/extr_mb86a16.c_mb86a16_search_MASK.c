
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int frequency; int srate; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef enum dvbfe_search { ____Placeholder_dvbfe_search } dvbfe_search ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct mb86a16_state*) ;
 int VAR_3 ;

__attribute__((used)) static enum dvbfe_search FUNC_2(struct dvb_frontend *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_4->dtv_property_cache;
 struct mb86a16_state *VAR_6 = VAR_4->demodulator_priv;

 VAR_6->frequency = VAR_5->frequency / 1000;
 VAR_6->srate = VAR_5->symbol_rate / 1000;

 if (!FUNC_1(VAR_6)) {
  FUNC_0(VAR_3, VAR_2, 1, "Successfully acquired LOCK");
  return VAR_1;
 }

 FUNC_0(VAR_3, VAR_2, 1, "Lock acquisition failed!");
 return VAR_0;
}
