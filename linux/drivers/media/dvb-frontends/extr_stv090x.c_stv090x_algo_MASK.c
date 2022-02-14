
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend {int dummy; } ;
struct stv090x_state {int srate; scalar_t__ algo; int tuner_bw; int inversion; scalar_t__ delsys; int FecTimeout; TYPE_1__* internal; int DemodTimeout; TYPE_2__* config; int frequency; int rolloff; struct dvb_frontend frontend; } ;
typedef scalar_t__ s32 ;
typedef enum stv090x_signal_state { ____Placeholder_stv090x_signal_state } stv090x_signal_state ;
struct TYPE_4__ {scalar_t__ (* tuner_set_bbgain ) (struct dvb_frontend*,int) ;int tuner_bbgain; scalar_t__ (* tuner_set_frequency ) (struct dvb_frontend*,int ) ;scalar_t__ (* tuner_set_bandwidth ) (struct dvb_frontend*,int) ;scalar_t__ (* tuner_get_status ) (struct dvb_frontend*,int*) ;} ;
struct TYPE_3__ {int dev_ver; int mclk; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ VAR_30 ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct dvb_frontend*,int) ;
 scalar_t__ FUNC_7 (struct dvb_frontend*,int ) ;
 scalar_t__ FUNC_8 (struct dvb_frontend*,int) ;
 scalar_t__ FUNC_9 (struct dvb_frontend*,int*) ;
 int FUNC_10 (struct stv090x_state*) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct stv090x_state*) ;
 scalar_t__ FUNC_13 (struct stv090x_state*) ;
 scalar_t__ FUNC_14 (struct stv090x_state*) ;
 int FUNC_15 (struct stv090x_state*,int ) ;
 int FUNC_16 (struct stv090x_state*,int ) ;
 int FUNC_17 (struct stv090x_state*,int ,int ) ;
 int FUNC_18 (struct stv090x_state*) ;
 int FUNC_19 (struct stv090x_state*) ;
 scalar_t__ FUNC_20 (struct stv090x_state*,int) ;
 int FUNC_21 (struct stv090x_state*) ;
 scalar_t__ FUNC_22 (struct stv090x_state*,int ,int) ;
 scalar_t__ FUNC_23 (struct stv090x_state*,int ,int) ;
 int FUNC_24 (struct stv090x_state*) ;
 scalar_t__ FUNC_25 (struct stv090x_state*,int) ;
 scalar_t__ FUNC_26 (struct stv090x_state*) ;
 int FUNC_27 (struct stv090x_state*) ;

__attribute__((used)) static enum stv090x_signal_state FUNC_28(struct stv090x_state *VAR_34)
{
 struct dvb_frontend *VAR_35 = &VAR_34->frontend;
 enum stv090x_signal_state VAR_36 = VAR_27;
 u32 VAR_37;
 s32 VAR_38, VAR_39 = 0, VAR_40;
 int VAR_41 = 0, VAR_42 = 0;

 VAR_37 = FUNC_1(VAR_34, VAR_33);
 FUNC_2(VAR_37, VAR_20, 1);
 if (FUNC_3(VAR_34, VAR_33, VAR_37) < 0)
  goto err;

 if (FUNC_3(VAR_34, VAR_6, 0x5c) < 0)
  goto err;

 if (VAR_34->internal->dev_ver >= 0x20) {
  if (VAR_34->srate > 5000000) {
   if (FUNC_3(VAR_34, VAR_3, 0x9e) < 0)
    goto err;
  } else {
   if (FUNC_3(VAR_34, VAR_3, 0x82) < 0)
    goto err;
  }
 }

 FUNC_18(VAR_34);

 if (VAR_34->algo == VAR_22) {
  VAR_34->tuner_bw = 2 * 36000000;
  if (FUNC_3(VAR_34, VAR_32, 0xc0) < 0)
   goto err;
  if (FUNC_3(VAR_34, VAR_4, 0x70) < 0)
   goto err;
  if (FUNC_25(VAR_34, 1000000) < 0)
   goto err;
 } else {

  if (FUNC_3(VAR_34, VAR_7, 0x20) < 0)
   goto err;
  if (FUNC_3(VAR_34, VAR_31, 0xd2) < 0)
   goto err;

  if (VAR_34->srate < 2000000) {

   if (FUNC_3(VAR_34, VAR_4, 0x63) < 0)
    goto err;
  } else {

   if (FUNC_3(VAR_34, VAR_4, 0x70) < 0)
    goto err;
  }

  if (FUNC_3(VAR_34, VAR_0, 0x38) < 0)
   goto err;

  if (VAR_34->internal->dev_ver >= 0x20) {
   if (FUNC_3(VAR_34, VAR_13, 0x5a) < 0)
    goto err;
   if (VAR_34->algo == VAR_23)
    VAR_34->tuner_bw = (15 * (FUNC_11(VAR_34->srate, VAR_34->rolloff) + 10000000)) / 10;
   else if (VAR_34->algo == VAR_30)
    VAR_34->tuner_bw = FUNC_11(VAR_34->srate, VAR_34->rolloff) + 10000000;
  }




  if (FUNC_3(VAR_34, VAR_32, 0xc1) < 0)
   goto err;

  if (FUNC_25(VAR_34, VAR_34->srate) < 0)
   goto err;

  if (FUNC_22(VAR_34, VAR_34->internal->mclk,
       VAR_34->srate) < 0)
   goto err;
  if (FUNC_23(VAR_34, VAR_34->internal->mclk,
       VAR_34->srate) < 0)
   goto err;

  if (VAR_34->srate >= 10000000)
   VAR_42 = 0;
  else
   VAR_42 = 1;
 }


 if (FUNC_20(VAR_34, 1) < 0)
  goto err;

 if (VAR_34->config->tuner_set_bbgain) {
  VAR_37 = VAR_34->config->tuner_bbgain;
  if (VAR_37 == 0)
   VAR_37 = 10;
  if (VAR_34->config->tuner_set_bbgain(VAR_35, VAR_37) < 0)
   goto err_gateoff;
 }

 if (VAR_34->config->tuner_set_frequency) {
  if (VAR_34->config->tuner_set_frequency(VAR_35, VAR_34->frequency) < 0)
   goto err_gateoff;
 }

 if (VAR_34->config->tuner_set_bandwidth) {
  if (VAR_34->config->tuner_set_bandwidth(VAR_35, VAR_34->tuner_bw) < 0)
   goto err_gateoff;
 }

 if (FUNC_20(VAR_34, 0) < 0)
  goto err;

 FUNC_5(50);

 if (VAR_34->config->tuner_get_status) {
  if (FUNC_20(VAR_34, 1) < 0)
   goto err;
  if (VAR_34->config->tuner_get_status(VAR_35, &VAR_37) < 0)
   goto err_gateoff;
  if (FUNC_20(VAR_34, 0) < 0)
   goto err;

  if (VAR_37)
   FUNC_4(VAR_11, 1, "Tuner phase locked");
  else {
   FUNC_4(VAR_11, 1, "Tuner unlocked");
   return VAR_27;
  }
 }

 FUNC_5(10);
 VAR_38 = FUNC_0(FUNC_1(VAR_34, VAR_2),
    FUNC_1(VAR_34, VAR_1));

 if (VAR_38 == 0) {



  for (VAR_40 = 0; VAR_40 < 5; VAR_40++) {
   VAR_39 += (FUNC_1(VAR_34, VAR_17) +
         FUNC_1(VAR_34, VAR_18)) >> 1;
  }
  VAR_39 /= 5;
 }

 if ((VAR_38 == 0) && (VAR_39 < VAR_25)) {
  FUNC_4(VAR_12, 1, "No Signal: POWER_IQ=0x%02x", VAR_39);
  VAR_41 = 0;
  VAR_36 = VAR_26;
 } else {
  VAR_37 = FUNC_1(VAR_34, VAR_5);
  FUNC_2(VAR_37, VAR_21, VAR_34->inversion);

  if (VAR_34->internal->dev_ver <= 0x20) {

   FUNC_2(VAR_37, VAR_15, 1);
  } else {

   FUNC_2(VAR_37, VAR_14, 1);
  }
  if (FUNC_3(VAR_34, VAR_5, VAR_37) < 0)
   goto err;

  if (FUNC_14(VAR_34) < 0)
   goto err;

  if (VAR_34->algo != VAR_22) {
   if (FUNC_26(VAR_34) < 0)
    goto err;
  }
 }

 if (VAR_36 == VAR_26)
  return VAR_36;

 if (VAR_34->algo == VAR_22)
  VAR_41 = FUNC_10(VAR_34);

 else if (VAR_34->algo == VAR_23)
  VAR_41 = FUNC_15(VAR_34, VAR_34->DemodTimeout);

 else if (VAR_34->algo == VAR_30)
  VAR_41 = FUNC_16(VAR_34, VAR_34->DemodTimeout);

 if ((!VAR_41) && (VAR_34->algo == VAR_23)) {
  if (!VAR_42) {
   if (FUNC_13(VAR_34))
    VAR_41 = FUNC_27(VAR_34);
  }
 }

 if (VAR_41)
  VAR_36 = FUNC_19(VAR_34);

 if ((VAR_41) && (VAR_36 == VAR_29)) {
  FUNC_21(VAR_34);

  if (VAR_34->internal->dev_ver >= 0x20) {



   VAR_37 = FUNC_1(VAR_34, VAR_33);
   FUNC_2(VAR_37, VAR_20, 0);
   if (FUNC_3(VAR_34, VAR_33, VAR_37) < 0)
    goto err;

   FUNC_5(3);

   FUNC_2(VAR_37, VAR_20, 1);
   if (FUNC_3(VAR_34, VAR_33, VAR_37) < 0)
    goto err;

   FUNC_2(VAR_37, VAR_20, 0);
   if (FUNC_3(VAR_34, VAR_33, VAR_37) < 0)
    goto err;
  }

  VAR_41 = FUNC_17(VAR_34, VAR_34->FecTimeout,
    VAR_34->FecTimeout);
  if (VAR_41) {
   if (VAR_34->delsys == VAR_24) {
    FUNC_24(VAR_34);

    VAR_37 = FUNC_1(VAR_34, VAR_16);
    FUNC_2(VAR_37, VAR_19, 1);
    if (FUNC_3(VAR_34, VAR_16, VAR_37) < 0)
     goto err;

    VAR_37 = FUNC_1(VAR_34, VAR_16);
    FUNC_2(VAR_37, VAR_19, 0);
    if (FUNC_3(VAR_34, VAR_16, VAR_37) < 0)
     goto err;

    if (FUNC_3(VAR_34, VAR_8, 0x67) < 0)
     goto err;
   } else {
    if (FUNC_3(VAR_34, VAR_8, 0x75) < 0)
     goto err;
   }

   if (FUNC_3(VAR_34, VAR_10, 0x00) < 0)
    goto err;

   if (FUNC_3(VAR_34, VAR_9, 0xc1) < 0)
    goto err;
  } else {
   VAR_36 = VAR_28;
   FUNC_12(VAR_34);
  }
 }
 return VAR_36;

err_gateoff:
 FUNC_20(VAR_34, 0);
err:
 FUNC_4(VAR_12, 1, "I/O error");
 return -1;
}
