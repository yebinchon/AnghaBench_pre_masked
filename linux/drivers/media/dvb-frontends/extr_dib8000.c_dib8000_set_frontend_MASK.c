
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t u8 ;
struct dvb_frontend {int dtv_property_cache; struct dib8000_state* demodulator_priv; } ;
struct dtv_frontend_properties {scalar_t__ frequency; int bandwidth_hz; TYPE_3__* layer; int isdbt_partial_reception; int guard_interval; int transmission_mode; int inversion; int isdbt_sb_mode; int delivery_system; } ;
struct TYPE_20__ {scalar_t__ enMpegOutput; int output_mode; } ;
struct dib8000_state {int revision; int channel_parameters_set; TYPE_4__ cfg; TYPE_5__** fe; } ;
struct TYPE_17__ {int (* set_params ) (TYPE_5__*) ;} ;
struct TYPE_18__ {TYPE_1__ tuner_ops; } ;
struct TYPE_21__ {struct dtv_frontend_properties dtv_property_cache; TYPE_2__ ops; } ;
struct TYPE_19__ {int modulation; int fec; int interleaving; int segment_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,struct dtv_frontend_properties*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 unsigned long FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct dib8000_state*,int ) ;
 int FUNC_10 (struct dib8000_state*,int ) ;
 int FUNC_11 (TYPE_5__*,int) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (char*,...) ;
 unsigned long VAR_15 ;
 int FUNC_14 (struct dtv_frontend_properties*,int *,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_5__*) ;
 scalar_t__ FUNC_17 (unsigned long,unsigned long) ;
 unsigned long FUNC_18 (int) ;
 int FUNC_19 (int,int) ;

__attribute__((used)) static int FUNC_20(struct dvb_frontend *VAR_16)
{
 struct dib8000_state *VAR_17 = VAR_16->demodulator_priv;
 struct dtv_frontend_properties *VAR_18 = &VAR_17->fe[0]->dtv_property_cache;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 u8 VAR_24, VAR_25;
 unsigned long VAR_26, VAR_27;

 if (VAR_18->frequency == 0) {
  FUNC_13("dib8000: must at least specify frequency\n");
  return 0;
 }

 if (VAR_18->bandwidth_hz == 0) {
  FUNC_13("dib8000: no bandwidth specified, set to default\n");
  VAR_18->bandwidth_hz = 6000000;
 }

 for (VAR_25 = 0; (VAR_25 < VAR_10) && (VAR_17->fe[VAR_25] != ((void*)0)); VAR_25++) {

  VAR_17->fe[VAR_25]->dtv_property_cache.delivery_system = VAR_14;
  FUNC_14(&VAR_17->fe[VAR_25]->dtv_property_cache, &VAR_16->dtv_property_cache, sizeof(struct dtv_frontend_properties));


  if (VAR_17->revision != 0x8090) {
   FUNC_4(VAR_17->fe[VAR_25], 1);
   if (VAR_25 != 0)
    FUNC_5(VAR_17->fe[VAR_25],
      VAR_12);
   else
    FUNC_5(VAR_17->fe[0], VAR_13);
  } else {
   FUNC_11(VAR_17->fe[VAR_25], 1);
   if (VAR_25 != 0)
    FUNC_12(VAR_17->fe[VAR_25],
      VAR_12);
   else
    FUNC_12(VAR_17->fe[0], VAR_13);
  }


  if (VAR_17->fe[VAR_25]->ops.tuner_ops.set_params)
   VAR_17->fe[VAR_25]->ops.tuner_ops.set_params(VAR_17->fe[VAR_25]);

  FUNC_6(VAR_17->fe[VAR_25], VAR_0);
 }


 if (VAR_17->revision != 0x8090)
  FUNC_4(VAR_17->fe[VAR_25 - 1], 0);
 else
  FUNC_11(VAR_17->fe[VAR_25 - 1], 0);


 do {
  VAR_22 = FUNC_0(VAR_17->fe[0]);
  for (VAR_25 = 1; (VAR_25 < VAR_10) && (VAR_17->fe[VAR_25] != ((void*)0)); VAR_25++) {
   VAR_23 = FUNC_0(VAR_17->fe[VAR_25]);
   if (VAR_22 == 0)
    VAR_22 = VAR_23;
   else if ((VAR_23 != 0) && (VAR_23 > VAR_22))
    VAR_22 = VAR_23;
  }
  if (VAR_22 == 0)
   break;
  VAR_22 = 10 * (VAR_22 + 99)/100;
  FUNC_19(VAR_22 * 1000, (VAR_22 + 1) * 1000);
  VAR_24 = 1;
  for (VAR_25 = 0; (VAR_25 < VAR_10) && (VAR_17->fe[VAR_25] != ((void*)0)); VAR_25++) {
   if (FUNC_3(VAR_17->fe[VAR_25]) != VAR_1) {
    VAR_24 = 0;
    break;
   }
  }
 } while (VAR_24 == 0);

 for (VAR_25 = 0; (VAR_25 < VAR_10) && (VAR_17->fe[VAR_25] != ((void*)0)); VAR_25++)
  FUNC_6(VAR_17->fe[VAR_25], VAR_2);

 VAR_21 = 1;
 do {
  VAR_27 = 0;
  for (VAR_25 = 0; (VAR_25 < VAR_10) && (VAR_17->fe[VAR_25] != ((void*)0)); VAR_25++) {
   VAR_26 = FUNC_7(VAR_17->fe[VAR_25]);
   if (VAR_26 != 0) {
    VAR_26 = VAR_15 + FUNC_18(100 * VAR_26);
    if (!VAR_27 || VAR_26 < VAR_27)
     VAR_27 = VAR_26;
   }


   if (VAR_17->channel_parameters_set == 0) {
    if ((FUNC_2(VAR_17->fe[VAR_25]) == VAR_6) || (FUNC_2(VAR_17->fe[VAR_25]) == VAR_7)) {
     FUNC_13("autosearch succeeded on fe%i\n", VAR_25);
     FUNC_1(VAR_17->fe[VAR_25], VAR_18);
     VAR_17->channel_parameters_set = 1;

     for (VAR_19 = 0; (VAR_19 < VAR_10) && (VAR_17->fe[VAR_19] != ((void*)0)); VAR_19++) {
      if (VAR_19 != VAR_25) {
       FUNC_13("Restarting frontend %d\n", VAR_19);
       FUNC_8(VAR_17->fe[VAR_19]);

       VAR_17->fe[VAR_19]->dtv_property_cache.isdbt_sb_mode = VAR_17->fe[VAR_25]->dtv_property_cache.isdbt_sb_mode;
       VAR_17->fe[VAR_19]->dtv_property_cache.inversion = VAR_17->fe[VAR_25]->dtv_property_cache.inversion;
       VAR_17->fe[VAR_19]->dtv_property_cache.transmission_mode = VAR_17->fe[VAR_25]->dtv_property_cache.transmission_mode;
       VAR_17->fe[VAR_19]->dtv_property_cache.guard_interval = VAR_17->fe[VAR_25]->dtv_property_cache.guard_interval;
       VAR_17->fe[VAR_19]->dtv_property_cache.isdbt_partial_reception = VAR_17->fe[VAR_25]->dtv_property_cache.isdbt_partial_reception;
       for (VAR_20 = 0; VAR_20 < 3; VAR_20++) {
        VAR_17->fe[VAR_19]->dtv_property_cache.layer[VAR_20].segment_count = VAR_17->fe[VAR_25]->dtv_property_cache.layer[VAR_20].segment_count;
        VAR_17->fe[VAR_19]->dtv_property_cache.layer[VAR_20].interleaving = VAR_17->fe[VAR_25]->dtv_property_cache.layer[VAR_20].interleaving;
        VAR_17->fe[VAR_19]->dtv_property_cache.layer[VAR_20].fec = VAR_17->fe[VAR_25]->dtv_property_cache.layer[VAR_20].fec;
        VAR_17->fe[VAR_19]->dtv_property_cache.layer[VAR_20].modulation = VAR_17->fe[VAR_25]->dtv_property_cache.layer[VAR_20].modulation;
       }

      }
     }
    }
   }
  }

  if (FUNC_2(VAR_17->fe[0]) == VAR_9 ||
    FUNC_2(VAR_17->fe[0]) == VAR_8 ||
    FUNC_2(VAR_17->fe[0]) == VAR_5) {
   VAR_21 = 0;

   for (VAR_25 = 0; (VAR_25 < VAR_10) && (VAR_17->fe[VAR_25] != ((void*)0)); VAR_25++) {
    if (FUNC_3(VAR_17->fe[VAR_25]) != VAR_3)
     VAR_21 = 1;
   }
   if (VAR_21 == 0)
    FUNC_13("tuning done with status %d\n", FUNC_2(VAR_17->fe[0]));
  }

  if ((VAR_21 == 1) && (VAR_27 == 0)) {
   FUNC_13("strange callback time something went wrong\n");
   VAR_21 = 0;
  }

  while ((VAR_21 == 1) && (FUNC_17(VAR_15, VAR_27)))
   FUNC_15(100);
 } while (VAR_21);


 if (VAR_17->revision != 0x8090)
  FUNC_5(VAR_17->fe[0], VAR_17->cfg.output_mode);
 else {
  FUNC_12(VAR_17->fe[0], VAR_17->cfg.output_mode);
  if (VAR_17->cfg.enMpegOutput == 0) {
   FUNC_9(VAR_17, VAR_11);
   FUNC_10(VAR_17, VAR_4);
  }
 }

 return 0;
}
