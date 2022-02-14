
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* get_frequency ) (struct dvb_frontend*,int*) ;} ;
struct TYPE_6__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct dib7000p_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_8__ {int (* agc_control ) (int *,int) ;} ;
struct dib7000p_state {int agc_state; int demod; TYPE_4__ cfg; TYPE_3__* current_agc; int version; } ;
typedef int s32 ;
struct TYPE_7__ {int wbd_sel; int wbd_alpha; int setup; int perform_agc_softsplit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dib7000p_state*) ;
 int FUNC_2 (struct dib7000p_state*,int) ;
 int FUNC_3 (struct dib7000p_state*) ;
 int FUNC_4 (struct dib7000p_state*,int ) ;
 int FUNC_5 (struct dib7000p_state*,int ) ;
 int FUNC_6 (struct dib7000p_state*,int) ;
 int FUNC_7 (struct dib7000p_state*,int ) ;
 int FUNC_8 (struct dib7000p_state*) ;
 int FUNC_9 (struct dib7000p_state*,int,int) ;
 int FUNC_10 (char*,struct dvb_frontend*,int) ;
 int FUNC_11 (struct dvb_frontend*,int*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct dib7000p_state *VAR_5 = VAR_3->demodulator_priv;
 int VAR_6 = -1;
 u8 *VAR_7 = &VAR_5->agc_state;
 u8 VAR_8;
 u16 VAR_9;
 u32 VAR_10 = 0x1000;
 s32 VAR_11 = 0;

 switch (VAR_5->agc_state) {
 case 0:
  FUNC_7(VAR_5, VAR_0);
  if (VAR_5->version == VAR_2) {
   VAR_9 = FUNC_2(VAR_5, 0x79b) & 0xff00;
   FUNC_9(VAR_5, 0x79a, VAR_10 & 0xFFFF);
   FUNC_9(VAR_5, 0x79b, VAR_9 | (1 << 14) | ((VAR_10 >> 16) & 0xFF));


   VAR_9 = FUNC_2(VAR_5, 0x780);
   FUNC_9(VAR_5, 0x780, (VAR_9 | (0x3)) & (~(1 << 7)));
  } else {
   FUNC_4(VAR_5, VAR_1);
   FUNC_1(VAR_5);
  }

  if (FUNC_5(VAR_5, FUNC_0(VAR_4->frequency / 1000)) != 0)
   return -1;

  if (VAR_3->ops.tuner_ops.get_frequency) {
   u32 VAR_12;

   VAR_3->ops.tuner_ops.get_frequency(VAR_3, &VAR_12);
   VAR_11 = (s32)VAR_12 / 1000 - VAR_4->frequency / 1000;
  }

  if (FUNC_6(VAR_5, VAR_11) < 0)
   return -1;

  VAR_6 = 7;
  (*VAR_7)++;
  break;

 case 1:
  if (VAR_5->cfg.agc_control)
   VAR_5->cfg.agc_control(&VAR_5->demod, 1);

  FUNC_9(VAR_5, 78, 32768);
  if (!VAR_5->current_agc->perform_agc_softsplit) {


   FUNC_9(VAR_5, 106, (VAR_5->current_agc->wbd_sel << 13) | (VAR_5->current_agc->wbd_alpha << 9) | (1 << 8));
   (*VAR_7)++;
   VAR_6 = 5;
  } else {

   (*VAR_7) = 4;

   VAR_6 = 7;
  }

  FUNC_3(VAR_5);
  break;

 case 2:
  FUNC_9(VAR_5, 75, VAR_5->current_agc->setup | (1 << 4));
  FUNC_9(VAR_5, 106, (VAR_5->current_agc->wbd_sel << 13) | (2 << 9) | (0 << 8));
  (*VAR_7)++;
  VAR_6 = 14;
  break;

 case 3:
  VAR_8 = (u8) FUNC_2(VAR_5, 396);
  FUNC_9(VAR_5, 78, FUNC_2(VAR_5, 394));

  FUNC_9(VAR_5, 75, VAR_5->current_agc->setup);
  FUNC_9(VAR_5, 106, (VAR_5->current_agc->wbd_sel << 13) | (VAR_5->current_agc->wbd_alpha << 9) | VAR_8);

  FUNC_3(VAR_5);

  FUNC_10("SPLIT %p: %hd\n", VAR_3, VAR_8);

  (*VAR_7)++;
  VAR_6 = 5;
  break;

 case 4:
  VAR_6 = 7;

  if (FUNC_8(VAR_5))
   VAR_6 = 5;
  else
   (*VAR_7)++;
  break;

 case 5:
  if (VAR_5->cfg.agc_control)
   VAR_5->cfg.agc_control(&VAR_5->demod, 0);
  (*VAR_7)++;
  break;
 default:
  break;
 }
 return VAR_6;
}
