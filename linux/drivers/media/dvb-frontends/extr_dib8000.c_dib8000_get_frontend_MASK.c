
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dtv_frontend_properties {int bandwidth_hz; int isdbt_sb_mode; int inversion; int isdbt_partial_reception; TYPE_4__* layer; int guard_interval; int transmission_mode; } ;
struct dib8000_state {int revision; TYPE_5__** fe; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_9__ {int isdbt_sb_mode; int inversion; int isdbt_partial_reception; TYPE_2__* layer; int guard_interval; int transmission_mode; } ;
struct TYPE_7__ {int (* get_frontend ) (TYPE_5__*,struct dtv_frontend_properties*) ;int (* read_status ) (TYPE_5__*,int*) ;} ;
struct TYPE_11__ {TYPE_3__ dtv_property_cache; TYPE_1__ ops; } ;
struct TYPE_10__ {int segment_count; int interleaving; int modulation; int fec; } ;
struct TYPE_8__ {int segment_count; int interleaving; int modulation; int fec; } ;


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
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_5__*,int*) ;
 int FUNC_4 (TYPE_5__*,struct dtv_frontend_properties*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_18,
    struct dtv_frontend_properties *VAR_19)
{
 struct dib8000_state *VAR_20 = VAR_18->demodulator_priv;
 u16 VAR_21, VAR_22 = 0;
 enum fe_status VAR_23 = 0;
 u8 VAR_24, VAR_25;

 VAR_19->bandwidth_hz = 6000000;






 FUNC_0(VAR_18, &VAR_23);
 if (!(VAR_23 & VAR_6))
  return 0;

 FUNC_2("dib8000_get_frontend: TMCC lock\n");
 for (VAR_24 = 1; (VAR_24 < VAR_11) && (VAR_20->fe[VAR_24] != ((void*)0)); VAR_24++) {
  VAR_20->fe[VAR_24]->ops.read_status(VAR_20->fe[VAR_24], &VAR_23);
  if (VAR_23&VAR_6) {
   FUNC_2("TMCC lock on the slave%i\n", VAR_24);

   VAR_20->fe[VAR_24]->ops.get_frontend(VAR_20->fe[VAR_24], VAR_19);
   for (VAR_25 = 0; (VAR_25 < VAR_11) && (VAR_20->fe[VAR_25] != ((void*)0)); VAR_25++) {
    if (VAR_25 != VAR_24) {
     VAR_20->fe[VAR_25]->dtv_property_cache.isdbt_sb_mode = VAR_20->fe[VAR_24]->dtv_property_cache.isdbt_sb_mode;
     VAR_20->fe[VAR_25]->dtv_property_cache.inversion = VAR_20->fe[VAR_24]->dtv_property_cache.inversion;
     VAR_20->fe[VAR_25]->dtv_property_cache.transmission_mode = VAR_20->fe[VAR_24]->dtv_property_cache.transmission_mode;
     VAR_20->fe[VAR_25]->dtv_property_cache.guard_interval = VAR_20->fe[VAR_24]->dtv_property_cache.guard_interval;
     VAR_20->fe[VAR_25]->dtv_property_cache.isdbt_partial_reception = VAR_20->fe[VAR_24]->dtv_property_cache.isdbt_partial_reception;
     for (VAR_21 = 0; VAR_21 < 3; VAR_21++) {
      VAR_20->fe[VAR_25]->dtv_property_cache.layer[VAR_21].segment_count = VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].segment_count;
      VAR_20->fe[VAR_25]->dtv_property_cache.layer[VAR_21].interleaving = VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].interleaving;
      VAR_20->fe[VAR_25]->dtv_property_cache.layer[VAR_21].fec = VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].fec;
      VAR_20->fe[VAR_25]->dtv_property_cache.layer[VAR_21].modulation = VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].modulation;
     }
    }
   }
   return 0;
  }
 }

 VAR_19->isdbt_sb_mode = FUNC_1(VAR_20, 508) & 0x1;

 if (VAR_20->revision == 0x8090)
  VAR_22 = FUNC_1(VAR_20, 572);
 else
  VAR_22 = FUNC_1(VAR_20, 570);
 VAR_19->inversion = (VAR_22 & 0x40) >> 6;
 switch ((VAR_22 & 0x30) >> 4) {
 case 1:
  VAR_19->transmission_mode = VAR_15;
  FUNC_2("dib8000_get_frontend: transmission mode 2K\n");
  break;
 case 2:
  VAR_19->transmission_mode = VAR_16;
  FUNC_2("dib8000_get_frontend: transmission mode 4K\n");
  break;
 case 3:
 default:
  VAR_19->transmission_mode = VAR_17;
  FUNC_2("dib8000_get_frontend: transmission mode 8K\n");
  break;
 }

 switch (VAR_22 & 0x3) {
 case 0:
  VAR_19->guard_interval = VAR_8;
  FUNC_2("dib8000_get_frontend: Guard Interval = 1/32\n");
  break;
 case 1:
  VAR_19->guard_interval = VAR_7;
  FUNC_2("dib8000_get_frontend: Guard Interval = 1/16\n");
  break;
 case 2:
  FUNC_2("dib8000_get_frontend: Guard Interval = 1/8\n");
  VAR_19->guard_interval = VAR_10;
  break;
 case 3:
  FUNC_2("dib8000_get_frontend: Guard Interval = 1/4\n");
  VAR_19->guard_interval = VAR_9;
  break;
 }

 VAR_22 = FUNC_1(VAR_20, 505);
 VAR_19->isdbt_partial_reception = VAR_22 & 1;
 FUNC_2("dib8000_get_frontend: partial_reception = %d\n", VAR_19->isdbt_partial_reception);

 for (VAR_21 = 0; VAR_21 < 3; VAR_21++) {
  int VAR_26;

  VAR_22 = FUNC_1(VAR_20, 493 + VAR_21) & 0x0f;
  VAR_19->layer[VAR_21].segment_count = VAR_22;

  if (VAR_22 == 0 || VAR_22 > 13)
   VAR_26 = 0;
  else
   VAR_26 = 1;

  if (VAR_26)
   FUNC_2("dib8000_get_frontend: Layer %d segments = %d\n",
    VAR_21, VAR_19->layer[VAR_21].segment_count);

  VAR_22 = FUNC_1(VAR_20, 499 + VAR_21) & 0x3;

  if (VAR_22 == 3)
   VAR_22 = 4;
  VAR_19->layer[VAR_21].interleaving = VAR_22;
  if (VAR_26)
   FUNC_2("dib8000_get_frontend: Layer %d time_intlv = %d\n",
    VAR_21, VAR_19->layer[VAR_21].interleaving);

  VAR_22 = FUNC_1(VAR_20, 481 + VAR_21);
  switch (VAR_22 & 0x7) {
  case 1:
   VAR_19->layer[VAR_21].fec = VAR_1;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d Code Rate = 1/2\n", VAR_21);
   break;
  case 2:
   VAR_19->layer[VAR_21].fec = VAR_2;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d Code Rate = 2/3\n", VAR_21);
   break;
  case 3:
   VAR_19->layer[VAR_21].fec = VAR_3;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d Code Rate = 3/4\n", VAR_21);
   break;
  case 5:
   VAR_19->layer[VAR_21].fec = VAR_4;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d Code Rate = 5/6\n", VAR_21);
   break;
  default:
   VAR_19->layer[VAR_21].fec = VAR_5;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d Code Rate = 7/8\n", VAR_21);
   break;
  }

  VAR_22 = FUNC_1(VAR_20, 487 + VAR_21);
  switch (VAR_22 & 0x3) {
  case 0:
   VAR_19->layer[VAR_21].modulation = VAR_0;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d DQPSK\n", VAR_21);
   break;
  case 1:
   VAR_19->layer[VAR_21].modulation = VAR_14;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d QPSK\n", VAR_21);
   break;
  case 2:
   VAR_19->layer[VAR_21].modulation = VAR_12;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d QAM16\n", VAR_21);
   break;
  case 3:
  default:
   VAR_19->layer[VAR_21].modulation = VAR_13;
   if (VAR_26)
    FUNC_2("dib8000_get_frontend: Layer %d QAM64\n", VAR_21);
   break;
  }
 }


 for (VAR_24 = 1; (VAR_24 < VAR_11) && (VAR_20->fe[VAR_24] != ((void*)0)); VAR_24++) {
  VAR_20->fe[VAR_24]->dtv_property_cache.isdbt_sb_mode = VAR_19->isdbt_sb_mode;
  VAR_20->fe[VAR_24]->dtv_property_cache.inversion = VAR_19->inversion;
  VAR_20->fe[VAR_24]->dtv_property_cache.transmission_mode = VAR_19->transmission_mode;
  VAR_20->fe[VAR_24]->dtv_property_cache.guard_interval = VAR_19->guard_interval;
  VAR_20->fe[VAR_24]->dtv_property_cache.isdbt_partial_reception = VAR_19->isdbt_partial_reception;
  for (VAR_21 = 0; VAR_21 < 3; VAR_21++) {
   VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].segment_count = VAR_19->layer[VAR_21].segment_count;
   VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].interleaving = VAR_19->layer[VAR_21].interleaving;
   VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].fec = VAR_19->layer[VAR_21].fec;
   VAR_20->fe[VAR_24]->dtv_property_cache.layer[VAR_21].modulation = VAR_19->layer[VAR_21].modulation;
  }
 }
 return 0;
}
