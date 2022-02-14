
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stv {int receive_mode; int first_time_lock; int tscfgh; int demod_bits; int berscale; int last_berdenominator; int mod_cod; scalar_t__ regoff; scalar_t__ is_vcm; int puncture_rate; scalar_t__ last_bernumerator; int demod_lock_time; } ;
struct TYPE_16__ {TYPE_7__* stat; } ;
struct TYPE_14__ {TYPE_5__* stat; } ;
struct TYPE_12__ {TYPE_3__* stat; } ;
struct TYPE_10__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_8__ pre_bit_count; TYPE_6__ pre_bit_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv* demodulator_priv; } ;
typedef enum receive_mode { ____Placeholder_receive_mode } receive_mode ;
typedef enum fe_stv0910_mod_cod { ____Placeholder_fe_stv0910_mod_cod } fe_stv0910_mod_cod ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_15__ {void* scale; } ;
struct TYPE_13__ {void* scale; } ;
struct TYPE_11__ {void* scale; } ;
struct TYPE_9__ {void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (struct stv*,int ) ;
 int FUNC_1 (struct stv*) ;
 int VAR_22 ;
 int FUNC_2 (struct stv*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct stv*,scalar_t__,int*) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct stv*) ;
 int FUNC_8 (struct stv*) ;
 int FUNC_9 (struct stv*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct stv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_12(struct dvb_frontend *VAR_23, enum fe_status *VAR_24)
{
 struct stv *VAR_25 = VAR_23->demodulator_priv;
 struct dtv_frontend_properties *VAR_26 = &VAR_23->dtv_property_cache;
 u8 VAR_27 = 0;
 u8 VAR_28 = 0;
 enum receive_mode VAR_29 = VAR_10;
 u32 VAR_30 = 0;

 *VAR_24 = 0;

 FUNC_4(VAR_25, VAR_13 + VAR_25->regoff, &VAR_27);

 if (VAR_27 & 0x40) {
  FUNC_4(VAR_25, VAR_14 + VAR_25->regoff, &VAR_28);
  if (VAR_28 & 0x08)
   VAR_29 = (VAR_27 & 0x20) ?
    VAR_8 : VAR_9;
 }
 if (VAR_29 == VAR_10) {
  FUNC_7(VAR_25);


  VAR_26->strength.stat[0].scale = VAR_7;
  VAR_26->cnr.stat[0].scale = VAR_7;
  VAR_26->pre_bit_error.stat[0].scale = VAR_7;
  VAR_26->pre_bit_count.stat[0].scale = VAR_7;

  return 0;
 }

 *VAR_24 |= (VAR_4
  | VAR_2
  | VAR_6
  | VAR_5);

 if (VAR_25->receive_mode == VAR_10) {
  VAR_25->receive_mode = VAR_29;
  VAR_25->demod_lock_time = VAR_22;
  VAR_25->first_time_lock = 1;

  FUNC_1(VAR_25);
  FUNC_9(VAR_25);

  FUNC_11(VAR_25, VAR_20 + VAR_25->regoff,
     VAR_25->tscfgh);
  FUNC_10(3000, 4000);
  FUNC_11(VAR_25, VAR_20 + VAR_25->regoff,
     VAR_25->tscfgh | 0x01);
  FUNC_11(VAR_25, VAR_20 + VAR_25->regoff,
     VAR_25->tscfgh);
 }
 if (VAR_27 & 0x40) {
  if (VAR_25->receive_mode == VAR_9) {
   u8 VAR_31;

   FUNC_4(VAR_25,
     VAR_19 + VAR_25->regoff,
     &VAR_31);
   VAR_30 = (VAR_31 & 0x02) != 0;
  } else {
   u8 VAR_32;

   FUNC_4(VAR_25,
     VAR_21 + VAR_25->regoff,
     &VAR_32);
   VAR_30 = (VAR_32 & 0x08) != 0;
  }
 }

 if (VAR_30) {
  *VAR_24 |= VAR_3;

  if (VAR_25->first_time_lock) {
   u8 VAR_33;

   VAR_25->first_time_lock = 0;

   FUNC_2(VAR_25);

   if (VAR_25->receive_mode == VAR_9) {




    VAR_25->demod_bits &= ~0x84;
    FUNC_11(VAR_25,
       VAR_11 + VAR_25->regoff,
       VAR_25->demod_bits);
    FUNC_4(VAR_25,
      VAR_18 + VAR_25->regoff,
      &VAR_33);

    VAR_33 |= 0x40;
    FUNC_11(VAR_25,
       VAR_18 + VAR_25->regoff,
       VAR_33);

    VAR_33 &= ~0x40;
    FUNC_11(VAR_25,
       VAR_18 + VAR_25->regoff,
       VAR_33);

    VAR_25->berscale = 2;
    VAR_25->last_bernumerator = 0;
    VAR_25->last_berdenominator = 1;

    FUNC_11(VAR_25,
       VAR_15 + VAR_25->regoff,
       VAR_1 | VAR_25->berscale);
   } else {
    VAR_25->berscale = 2;
    VAR_25->last_bernumerator = 0;
    VAR_25->last_berdenominator = 1;

    FUNC_11(VAR_25,
       VAR_15 + VAR_25->regoff,
       VAR_0 | VAR_25->berscale);
   }

   FUNC_11(VAR_25,
      VAR_17 + VAR_25->regoff, 0x00);




   FUNC_11(VAR_25,
      VAR_16 + VAR_25->regoff, 0xc1);

   FUNC_8(VAR_25);
   if (VAR_25->receive_mode == VAR_8)
    FUNC_0(VAR_25,
           VAR_25->puncture_rate);
  }


  if (VAR_25->is_vcm) {
   u8 VAR_34;
   enum fe_stv0910_mod_cod VAR_35;

   FUNC_4(VAR_25, VAR_12 + VAR_25->regoff,
     &VAR_34);
   VAR_35 = (enum fe_stv0910_mod_cod)((VAR_34 & 0x7c) >> 2);

   if (VAR_35 > VAR_25->mod_cod)
    VAR_25->mod_cod = VAR_35;
  }
 }




 FUNC_5(VAR_23);


 if (*VAR_24 & VAR_2)
  FUNC_6(VAR_23);
 else
  VAR_26->cnr.stat[0].scale = VAR_7;


 if (*VAR_24 & VAR_6) {
  FUNC_3(VAR_23);
 } else {
  VAR_26->pre_bit_error.stat[0].scale = VAR_7;
  VAR_26->pre_bit_count.stat[0].scale = VAR_7;
 }

 return 0;
}
