
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend {int dummy; } ;
struct stv090x_state {int srate; int search_range; int frequency; TYPE_1__* internal; TYPE_2__* config; int tuner_bw; struct dvb_frontend frontend; } ;
typedef int s32 ;
struct TYPE_4__ {scalar_t__ (* tuner_set_frequency ) (struct dvb_frontend*,int) ;scalar_t__ (* tuner_set_bandwidth ) (struct dvb_frontend*,int ) ;scalar_t__ (* tuner_get_status ) (struct dvb_frontend*,int*) ;} ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct stv090x_state*,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct dvb_frontend*,int) ;
 scalar_t__ FUNC_7 (struct dvb_frontend*,int ) ;
 scalar_t__ FUNC_8 (struct dvb_frontend*,int*) ;
 int FUNC_9 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_10 (struct stv090x_state*,int) ;

__attribute__((used)) static u32 FUNC_11(struct stv090x_state *VAR_27)
{
 struct dvb_frontend *VAR_28 = &VAR_27->frontend;

 int VAR_29 = 0, VAR_30;
 s32 VAR_31 = 0, VAR_32 = 1, VAR_33, VAR_34 = 0, VAR_35;
 u32 VAR_36 = 0, VAR_37 = 0, VAR_38 = 1200, VAR_39;
 u32 VAR_40;

 if (VAR_27->internal->dev_ver >= 0x30)
  VAR_40 = 0x2e00;
 else
  VAR_40 = 0x1f00;

 VAR_39 = FUNC_1(VAR_27, VAR_8);
 FUNC_2(VAR_39, VAR_13, 0x1f);
 if (FUNC_3(VAR_27, VAR_8, VAR_39) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_22, 0x12) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_23, 0xc0) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_26, 0xf0) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_25, 0xe0) < 0)
  goto err;
 VAR_39 = FUNC_1(VAR_27, VAR_7);
 FUNC_2(VAR_39, VAR_14, 1);
 FUNC_2(VAR_39, VAR_6, 0);
 if (FUNC_3(VAR_27, VAR_7, VAR_39) < 0)
  goto err;

 if (FUNC_3(VAR_27, VAR_21, 0x83) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_20, 0xc0) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_18, 0x82) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_17, 0xa0) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_9, 0x00) < 0)
  goto err;
 if (FUNC_3(VAR_27, VAR_2, 0x50) < 0)
  goto err;

 if (VAR_27->internal->dev_ver >= 0x30) {
  if (FUNC_3(VAR_27, VAR_3, 0x99) < 0)
   goto err;
  if (FUNC_3(VAR_27, VAR_19, 0x98) < 0)
   goto err;

 } else if (VAR_27->internal->dev_ver >= 0x20) {
  if (FUNC_3(VAR_27, VAR_3, 0x6a) < 0)
   goto err;
  if (FUNC_3(VAR_27, VAR_19, 0x95) < 0)
   goto err;
 }

 if (VAR_27->srate <= 2000000)
  VAR_38 = 1000;
 else if (VAR_27->srate <= 5000000)
  VAR_38 = 2000;
 else if (VAR_27->srate <= 12000000)
  VAR_38 = 3000;
 else
  VAR_38 = 5000;

 VAR_33 = -1 + ((VAR_27->search_range / 1000) / VAR_38);
 VAR_33 /= 2;
 VAR_33 = (2 * VAR_33) + 1;
 if (VAR_33 < 0)
  VAR_33 = 1;
 else if (VAR_33 > 10) {
  VAR_33 = 11;
  VAR_38 = (VAR_27->search_range / 1000) / 10;
 }
 VAR_34 = 0;
 VAR_32 = 1;
 VAR_35 = VAR_27->frequency;

 while ((!VAR_29) && (VAR_34 < VAR_33)) {
  if (FUNC_3(VAR_27, VAR_8, 0x5f) < 0)
   goto err;
  if (FUNC_3(VAR_27, VAR_5, 0x00) < 0)
   goto err;
  if (FUNC_3(VAR_27, VAR_4, 0x00) < 0)
   goto err;
  if (FUNC_3(VAR_27, VAR_16, 0x00) < 0)
   goto err;
  if (FUNC_3(VAR_27, VAR_15, 0x00) < 0)
   goto err;

  if (FUNC_3(VAR_27, VAR_8, 0x40) < 0)
   goto err;
  FUNC_5(50);
  for (VAR_30 = 0; VAR_30 < 10; VAR_30++) {
   VAR_39 = FUNC_1(VAR_27, VAR_10);
   if (FUNC_0(VAR_39, VAR_24) >= 2)
    VAR_31++;
   VAR_37 += (FUNC_1(VAR_27, VAR_1) << 8) |
    FUNC_1(VAR_27, VAR_0);
  }
  VAR_37 /= 10;
  VAR_36 = FUNC_9(VAR_27, VAR_27->internal->mclk);
  VAR_34++;
  VAR_32 *= -1;
  if ((VAR_31 >= 5) && (VAR_37 < VAR_40) &&
      (VAR_36 < 50000000) && (VAR_36 > 850000))
   VAR_29 = 1;
  else if (VAR_34 < VAR_33) {
   if (VAR_32 > 0)
    VAR_35 += VAR_34 * VAR_38;
   else
    VAR_35 -= VAR_34 * VAR_38;


   if (FUNC_10(VAR_27, 1) < 0)
    goto err;

   if (VAR_27->config->tuner_set_frequency) {
    if (VAR_27->config->tuner_set_frequency(VAR_28, VAR_35) < 0)
     goto err_gateoff;
   }

   if (VAR_27->config->tuner_set_bandwidth) {
    if (VAR_27->config->tuner_set_bandwidth(VAR_28, VAR_27->tuner_bw) < 0)
     goto err_gateoff;
   }

   if (FUNC_10(VAR_27, 0) < 0)
    goto err;

   FUNC_5(50);

   if (FUNC_10(VAR_27, 1) < 0)
    goto err;

   if (VAR_27->config->tuner_get_status) {
    if (VAR_27->config->tuner_get_status(VAR_28, &VAR_39) < 0)
     goto err_gateoff;
   }

   if (VAR_39)
    FUNC_4(VAR_11, 1, "Tuner phase locked");
   else
    FUNC_4(VAR_11, 1, "Tuner unlocked");

   if (FUNC_10(VAR_27, 0) < 0)
    goto err;

  }
 }
 if (!VAR_29)
  VAR_36 = 0;
 else
  VAR_36 = FUNC_9(VAR_27, VAR_27->internal->mclk);

 return VAR_36;

err_gateoff:
 FUNC_10(VAR_27, 0);
err:
 FUNC_4(VAR_12, 1, "I/O error");
 return -1;
}
