
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_state {scalar_t__ frequency; int srate; int search_range; int fec; int algo; int search_mode; int delsys; } ;
struct dtv_frontend_properties {scalar_t__ frequency; int delivery_system; int symbol_rate; int stream_id; int scrambling_sequence_index; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv090x_state* demodulator_priv; } ;
typedef enum dvbfe_search { ____Placeholder_dvbfe_search } dvbfe_search ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (int ,int,char*) ;
 scalar_t__ FUNC_1 (struct stv090x_state*) ;
 int FUNC_2 (struct stv090x_state*,int ) ;
 int FUNC_3 (struct stv090x_state*,int ) ;

__attribute__((used)) static enum dvbfe_search FUNC_4(struct dvb_frontend *VAR_12)
{
 struct stv090x_state *VAR_13 = VAR_12->demodulator_priv;
 struct dtv_frontend_properties *VAR_14 = &VAR_12->dtv_property_cache;

 if (VAR_14->frequency == 0)
  return VAR_2;

 switch (VAR_14->delivery_system) {
 case 130:
  VAR_13->delsys = VAR_6;
  break;
 case 129:
  VAR_13->delsys = VAR_7;
  break;
 case 128:
  VAR_13->delsys = VAR_8;
  break;
 default:
  return VAR_2;
 }

 VAR_13->frequency = VAR_14->frequency;
 VAR_13->srate = VAR_14->symbol_rate;
 VAR_13->search_mode = VAR_11;
 VAR_13->algo = VAR_5;
 VAR_13->fec = VAR_9;
 if (VAR_13->srate > 10000000) {
  FUNC_0(VAR_4, 1, "Search range: 10 MHz");
  VAR_13->search_range = 10000000;
 } else {
  FUNC_0(VAR_4, 1, "Search range: 5 MHz");
  VAR_13->search_range = 5000000;
 }

 FUNC_3(VAR_13, VAR_14->scrambling_sequence_index);
 FUNC_2(VAR_13, VAR_14->stream_id);

 if (FUNC_1(VAR_13) == VAR_10) {
  FUNC_0(VAR_4, 1, "Search success!");
  return VAR_3;
 } else {
  FUNC_0(VAR_4, 1, "Search failed!");
  return VAR_1;
 }

 return VAR_0;
}
