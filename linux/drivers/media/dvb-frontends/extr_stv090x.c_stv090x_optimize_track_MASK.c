
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend {int dummy; } ;
struct stv090x_state {int delsys; scalar_t__ search_mode; int rolloff; scalar_t__ algo; int srate; int DemodTimeout; TYPE_2__* internal; scalar_t__ tuner_bw; TYPE_1__* config; int modulation; int demod_mode; int frame_len; int fec; struct dvb_frontend frontend; } ;
typedef int s32 ;
typedef enum stv090x_modcod { ____Placeholder_stv090x_modcod } stv090x_modcod ;
struct TYPE_4__ {int dev_ver; int mclk; } ;
struct TYPE_3__ {scalar_t__ (* tuner_set_bandwidth ) (struct dvb_frontend*,scalar_t__) ;} ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;




 int FUNC_0 (int,int ) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int FUNC_2 (int,int ,int) ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct dvb_frontend*,scalar_t__) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (struct stv090x_state*) ;
 int FUNC_9 (struct stv090x_state*,int) ;
 int FUNC_10 (struct stv090x_state*) ;
 int FUNC_11 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_12 (struct stv090x_state*,int) ;
 int FUNC_13 (struct stv090x_state*) ;
 scalar_t__ FUNC_14 (struct stv090x_state*,int) ;
 int FUNC_15 (struct stv090x_state*,int,int) ;
 int FUNC_16 (struct stv090x_state*) ;
 scalar_t__ FUNC_17 (struct stv090x_state*,int) ;
 int FUNC_18 (struct stv090x_state*) ;

__attribute__((used)) static int FUNC_19(struct stv090x_state *VAR_50)
{
 struct dvb_frontend *VAR_51 = &VAR_50->frontend;

 enum stv090x_modcod VAR_52;

 s32 VAR_53, VAR_54, VAR_55, VAR_56, VAR_57, VAR_58 = 0, VAR_59 = 0;
 u32 VAR_60;

 VAR_53 = FUNC_11(VAR_50, VAR_50->internal->mclk);
 VAR_53 += FUNC_12(VAR_50, VAR_53);

 switch (VAR_50->delsys) {
 case 130:
 case 131:
  if (VAR_50->search_mode == VAR_41) {
   VAR_60 = FUNC_1(VAR_50, VAR_17);
   FUNC_2(VAR_60, VAR_20, 1);
   FUNC_2(VAR_60, VAR_21, 0);
   if (FUNC_3(VAR_50, VAR_17, VAR_60) < 0)
    goto err;
  }
  VAR_60 = FUNC_1(VAR_50, VAR_14);
  FUNC_2(VAR_60, VAR_26, VAR_50->rolloff);
  FUNC_2(VAR_60, VAR_25, 0x01);
  if (FUNC_3(VAR_50, VAR_14, VAR_60) < 0)
   goto err;

  if (VAR_50->internal->dev_ver >= 0x30) {
   if (FUNC_13(VAR_50) < 0)
    goto err;

   if (VAR_50->fec == VAR_38) {
    if (FUNC_3(VAR_50, VAR_24, 0x98) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_8, 0x18) < 0)
     goto err;
   } else {
    if (FUNC_3(VAR_50, VAR_24, 0x18) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_8, 0x18) < 0)
     goto err;
   }
  }

  if (FUNC_3(VAR_50, VAR_22, 0x75) < 0)
   goto err;
  break;

 case 129:
  VAR_60 = FUNC_1(VAR_50, VAR_17);
  FUNC_2(VAR_60, VAR_20, 0);
  FUNC_2(VAR_60, VAR_21, 1);
  if (FUNC_3(VAR_50, VAR_17, VAR_60) < 0)
   goto err;
  if (VAR_50->internal->dev_ver >= 0x30) {
   if (FUNC_3(VAR_50, VAR_0, 0) < 0)
    goto err;
   if (FUNC_3(VAR_50, VAR_6, 0) < 0)
    goto err;
  }
  if (VAR_50->frame_len == VAR_37) {
   VAR_60 = FUNC_1(VAR_50, VAR_19);
   VAR_52 = FUNC_0(VAR_60, VAR_15);
   VAR_54 = FUNC_0(VAR_60, VAR_16) & 0x01;
   VAR_55 = FUNC_15(VAR_50, VAR_52, VAR_54);
   if (VAR_52 <= VAR_40) {
    FUNC_3(VAR_50, VAR_4, VAR_55);
   } else if (VAR_52 <= VAR_35) {
    if (FUNC_3(VAR_50, VAR_4, 0x2a) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_3, VAR_55) < 0)
     goto err;
   }
   if ((VAR_50->demod_mode == VAR_44) && (VAR_52 > VAR_35)) {
    if (VAR_52 <= VAR_32) {
     if (FUNC_3(VAR_50, VAR_4, 0x2a) < 0)
      goto err;
     if (FUNC_3(VAR_50, VAR_1, VAR_55) < 0)
      goto err;
    } else {
     if (FUNC_3(VAR_50, VAR_4, 0x2a) < 0)
      goto err;
     if (FUNC_3(VAR_50, VAR_2, VAR_55) < 0)
      goto err;
    }
   }
  } else {

   VAR_55 = FUNC_16(VAR_50);
   if (VAR_50->modulation == VAR_39) {
    if (FUNC_3(VAR_50, VAR_4, VAR_55) < 0)
     goto err;
   } else if (VAR_50->modulation == VAR_34) {
    if (FUNC_3(VAR_50, VAR_4, 0x2a) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_3, VAR_55) < 0)
     goto err;
   } else if (VAR_50->modulation == VAR_31) {
    if (FUNC_3(VAR_50, VAR_4, 0x2a) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_1, VAR_55) < 0)
     goto err;
   } else if (VAR_50->modulation == VAR_33) {
    if (FUNC_3(VAR_50, VAR_4, 0x2a) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_2, VAR_55) < 0)
     goto err;
   }
  }

  FUNC_3(VAR_50, VAR_22, 0x67);
  break;

 case 128:
 default:
  VAR_60 = FUNC_1(VAR_50, VAR_17);
  FUNC_2(VAR_60, VAR_20, 1);
  FUNC_2(VAR_60, VAR_21, 1);
  if (FUNC_3(VAR_50, VAR_17, VAR_60) < 0)
   goto err;
  break;
 }

 VAR_56 = FUNC_1(VAR_50, VAR_10);
 VAR_57 = FUNC_1(VAR_50, VAR_9);
 VAR_60 = FUNC_1(VAR_50, VAR_47);

 if (VAR_50->algo == VAR_36) {
  FUNC_3(VAR_50, VAR_29, 0x00);
  VAR_60 = FUNC_1(VAR_50, VAR_17);
  FUNC_2(VAR_60, VAR_27, 0x00);
  FUNC_2(VAR_60, VAR_13, 0x00);
  if (FUNC_3(VAR_50, VAR_17, VAR_60) < 0)
   goto err;
  if (FUNC_3(VAR_50, VAR_46, 0xc1) < 0)
   goto err;

  if (FUNC_17(VAR_50, VAR_53) < 0)
   goto err;
  VAR_59 = 1;

  if (FUNC_8(VAR_50) < 0)
   goto err;
 }

 if (VAR_50->internal->dev_ver >= 0x20) {
  if ((VAR_50->search_mode == VAR_43) ||
      (VAR_50->search_mode == VAR_42) ||
      (VAR_50->search_mode == VAR_41)) {

   if (FUNC_3(VAR_50, VAR_48, 0x0a) < 0)
    goto err;
   if (FUNC_3(VAR_50, VAR_49, 0x00) < 0)
    goto err;
  }
 }

 if (FUNC_3(VAR_50, VAR_5, 0x38) < 0)
  goto err;


 if (FUNC_3(VAR_50, VAR_30, 0x80) < 0)
  goto err;

 if (FUNC_3(VAR_50, VAR_28, 0x80) < 0)
  goto err;

 if ((VAR_50->internal->dev_ver >= 0x20) || (VAR_59 == 1) ||
     (VAR_50->srate < 10000000)) {

  if (FUNC_3(VAR_50, VAR_12, VAR_56) < 0)
   goto err;
  if (FUNC_3(VAR_50, VAR_11, VAR_57) < 0)
   goto err;
  VAR_50->tuner_bw = FUNC_7(VAR_53, VAR_50->rolloff) + 10000000;

  if ((VAR_50->internal->dev_ver >= 0x20) || (VAR_59 == 1)) {

   if (VAR_50->algo != VAR_45) {

    if (FUNC_14(VAR_50, 1) < 0)
     goto err;

    if (VAR_50->config->tuner_set_bandwidth) {
     if (VAR_50->config->tuner_set_bandwidth(VAR_51, VAR_50->tuner_bw) < 0)
      goto err_gateoff;
    }

    if (FUNC_14(VAR_50, 0) < 0)
     goto err;

   }
  }
  if ((VAR_50->algo == VAR_36) || (VAR_50->srate < 10000000))
   FUNC_5(50);
  else
   FUNC_5(5);

  FUNC_10(VAR_50);

  if (!(FUNC_9(VAR_50, (VAR_50->DemodTimeout / 2)))) {
   if (FUNC_3(VAR_50, VAR_18, 0x1f) < 0)
    goto err;
   if (FUNC_3(VAR_50, VAR_12, VAR_56) < 0)
    goto err;
   if (FUNC_3(VAR_50, VAR_11, VAR_57) < 0)
    goto err;
   if (FUNC_3(VAR_50, VAR_18, 0x18) < 0)
    goto err;

   VAR_58 = 0;

   while ((!(FUNC_9(VAR_50, (VAR_50->DemodTimeout / 2)))) && (VAR_58 <= 2)) {

    if (FUNC_3(VAR_50, VAR_18, 0x1f) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_12, VAR_56) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_11, VAR_57) < 0)
     goto err;
    if (FUNC_3(VAR_50, VAR_18, 0x18) < 0)
     goto err;
    VAR_58++;
   }
  }

 }

 if (VAR_50->internal->dev_ver >= 0x20) {
  if (FUNC_3(VAR_50, VAR_7, 0x49) < 0)
   goto err;
 }

 if ((VAR_50->delsys == 130) || (VAR_50->delsys == 131))
  FUNC_18(VAR_50);

 return 0;

err_gateoff:
 FUNC_14(VAR_50, 0);
err:
 FUNC_4(VAR_23, 1, "I/O error");
 return -1;
}
