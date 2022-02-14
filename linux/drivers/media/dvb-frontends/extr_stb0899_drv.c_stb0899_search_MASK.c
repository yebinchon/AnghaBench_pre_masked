
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int srate; int srch_range; int derot_percent; int lock; int tuner_bw; int freq; } ;
struct stb0899_params {int srate; int freq; } ;
struct stb0899_state {int delsys; int verbose; int frontend; struct stb0899_config* config; struct stb0899_internal internal; struct stb0899_params params; } ;
struct stb0899_config {int (* tuner_get_bandwidth ) (struct dvb_frontend*,int *) ;int (* tuner_set_bandwidth ) (struct dvb_frontend*,int) ;int hi_clk; int lo_clk; int (* tuner_set_rfsiggain ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int symbol_rate; int delivery_system; int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stb0899_state* demodulator_priv; } ;
typedef enum dvbfe_search { ____Placeholder_dvbfe_search } dvbfe_search ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_1 (int ,int ,int,char*,...) ;
 int FUNC_2 (struct stb0899_state*) ;
 int FUNC_3 (struct stb0899_state*) ;
 int FUNC_4 (struct stb0899_state*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct stb0899_state*) ;
 int FUNC_7 (struct stb0899_state*) ;
 int FUNC_8 (struct stb0899_state*,int ) ;
 int FUNC_9 (struct stb0899_state*,int ,int) ;
 int FUNC_10 (struct dvb_frontend*,int) ;
 int FUNC_11 (struct dvb_frontend*,int) ;
 int FUNC_12 (struct dvb_frontend*,int *) ;
 int FUNC_13 (struct dvb_frontend*,int) ;
 int FUNC_14 (struct dvb_frontend*,int *) ;

__attribute__((used)) static enum dvbfe_search FUNC_15(struct dvb_frontend *VAR_9)
{
 struct stb0899_state *VAR_10 = VAR_9->demodulator_priv;
 struct stb0899_params *VAR_11 = &VAR_10->params;
 struct stb0899_internal *VAR_12 = &VAR_10->internal;
 struct stb0899_config *VAR_13 = VAR_10->config;
 struct dtv_frontend_properties *VAR_14 = &VAR_9->dtv_property_cache;

 u32 VAR_15, VAR_16;

 VAR_11->freq = VAR_14->frequency;
 VAR_11->srate = VAR_14->symbol_rate;
 VAR_10->delsys = VAR_14->delivery_system;
 FUNC_1(VAR_10->verbose, VAR_5, 1, "delivery system=%d", VAR_10->delsys);

 VAR_15 = 10000000;
 FUNC_1(VAR_10->verbose, VAR_5, 1, "Frequency=%d, Srate=%d", VAR_11->freq, VAR_11->srate);

 if (FUNC_0(VAR_11->srate, 1000000, 45000000)) {
  FUNC_1(VAR_10->verbose, VAR_5, 1, "Parameters IN RANGE");
  FUNC_6(VAR_10);

  if (VAR_10->config->tuner_set_rfsiggain) {
   if (VAR_12->srate > 15000000)
    VAR_16 = 8;
   else if (VAR_12->srate > 5000000)
    VAR_16 = 12;
   else
    VAR_16 = 14;
   VAR_10->config->tuner_set_rfsiggain(VAR_9, VAR_16);
  }

  if (VAR_11->srate <= 5000000)
   FUNC_8(VAR_10, VAR_13->lo_clk);
  else
   FUNC_8(VAR_10, VAR_13->hi_clk);

  switch (VAR_10->delsys) {
  case 129:
  case 130:
   FUNC_1(VAR_10->verbose, VAR_5, 1, "DVB-S delivery system");
   VAR_12->freq = VAR_11->freq;
   VAR_12->srate = VAR_11->srate;






   VAR_12->srch_range = VAR_15 + 1500000 + (VAR_11->srate / 5);
   VAR_12->derot_percent = 30;



   FUNC_5(&VAR_10->frontend, 1);

   if (VAR_10->config->tuner_set_bandwidth)
    VAR_10->config->tuner_set_bandwidth(VAR_9, (13 * (FUNC_2(VAR_10) + VAR_15)) / 10);
   if (VAR_10->config->tuner_get_bandwidth)
    VAR_10->config->tuner_get_bandwidth(VAR_9, &VAR_12->tuner_bw);


   FUNC_5(&VAR_10->frontend, 0);


   FUNC_9(VAR_10, VAR_8, 0x11);


   FUNC_1(VAR_10->verbose, VAR_5, 1, "running DVB-S search algo ..");
   if (FUNC_4(VAR_10) == VAR_7) {
    VAR_12->lock = 1;
    FUNC_1(VAR_10->verbose, VAR_5, 1,
     "-------------------------------------> DVB-S LOCK !");







    return VAR_3;
   } else {
    VAR_12->lock = 0;

    return VAR_1;
   }
   break;
  case 128:
   VAR_12->freq = VAR_11->freq;
   VAR_12->srate = VAR_11->srate;
   VAR_12->srch_range = VAR_15;


   FUNC_5(&VAR_10->frontend, 1);

   if (VAR_10->config->tuner_set_bandwidth)
    VAR_10->config->tuner_set_bandwidth(VAR_9, (FUNC_2(VAR_10) + VAR_15));
   if (VAR_10->config->tuner_get_bandwidth)
    VAR_10->config->tuner_get_bandwidth(VAR_9, &VAR_12->tuner_bw);


   FUNC_5(&VAR_10->frontend, 0);




   FUNC_9(VAR_10, VAR_8, 0x1c);


   FUNC_7(VAR_10);


   FUNC_1(VAR_10->verbose, VAR_5, 1, "running DVB-S2 search algo ..");
   if (FUNC_3(VAR_10) == VAR_4) {
    VAR_12->lock = 1;
    FUNC_1(VAR_10->verbose, VAR_5, 1,
     "-------------------------------------> DVB-S2 LOCK !");





    return VAR_3;
   } else {
    VAR_12->lock = 0;

    return VAR_1;
   }
   break;
  default:
   FUNC_1(VAR_10->verbose, VAR_6, 1, "Unsupported delivery system");
   return VAR_2;
  }
 }

 return VAR_0;
}
