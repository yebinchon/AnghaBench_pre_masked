
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dvb_frontend {int dummy; } ;
struct stv090x_state {int srate; int search_range; int frequency; TYPE_1__* config; scalar_t__ tuner_bw; int rolloff; struct dvb_frontend frontend; } ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ (* tuner_set_frequency ) (struct dvb_frontend*,int) ;scalar_t__ (* tuner_set_bandwidth ) (struct dvb_frontend*,scalar_t__) ;scalar_t__ (* tuner_get_status ) (struct dvb_frontend*,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct stv090x_state*,int ,int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct dvb_frontend*,int) ;
 scalar_t__ FUNC_4 (struct dvb_frontend*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct dvb_frontend*,scalar_t__*) ;
 scalar_t__ FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (struct stv090x_state*) ;
 int FUNC_8 (struct stv090x_state*,int) ;
 scalar_t__ FUNC_9 (struct stv090x_state*,int) ;

__attribute__((used)) static int FUNC_10(struct stv090x_state *VAR_5, s32 VAR_6)
{
 struct dvb_frontend *VAR_7 = &VAR_5->frontend;

 u32 VAR_8;
 s32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 if (VAR_5->srate >= 10000000)
  VAR_14 = VAR_6 / 3;
 else
  VAR_14 = VAR_6 / 2;

 VAR_15 = FUNC_8(VAR_5, VAR_14);
 if (VAR_15)
  return VAR_15;

 if (VAR_5->srate >= 10000000) {
  if (FUNC_7(VAR_5)) {
   if (FUNC_0(VAR_5, VAR_2, 0x1f) < 0)
    goto err;
   if (FUNC_0(VAR_5, VAR_2, 0x15) < 0)
    goto err;
   return FUNC_8(VAR_5, VAR_6);
  }
  return 0;
 }

 if (VAR_5->srate <= 4000000)
  VAR_9 = 1000;
 else if (VAR_5->srate <= 7000000)
  VAR_9 = 2000;
 else if (VAR_5->srate <= 10000000)
  VAR_9 = 3000;
 else
  VAR_9 = 5000;

 VAR_10 = (VAR_5->search_range / 1000) / VAR_9;
 VAR_10 /= 2;
 VAR_10 = 2 * (VAR_10 + 1);
 if (VAR_10 < 0)
  VAR_10 = 2;
 else if (VAR_10 > 12)
  VAR_10 = 12;

 VAR_11 = 1;
 VAR_12 = 1;

 VAR_13 = VAR_5->frequency;
 VAR_5->tuner_bw = FUNC_6(VAR_5->srate, VAR_5->rolloff) + VAR_5->srate;
 while ((VAR_11 <= VAR_10) && (!VAR_15)) {
  if (VAR_12 > 0)
   VAR_13 += VAR_11 * VAR_9;
  else
   VAR_13 -= VAR_11 * VAR_9;


  if (FUNC_9(VAR_5, 1) < 0)
   goto err;

  if (VAR_5->config->tuner_set_frequency) {
   if (VAR_5->config->tuner_set_frequency(VAR_7, VAR_13) < 0)
    goto err_gateoff;
  }

  if (VAR_5->config->tuner_set_bandwidth) {
   if (VAR_5->config->tuner_set_bandwidth(VAR_7, VAR_5->tuner_bw) < 0)
    goto err_gateoff;
  }

  if (FUNC_9(VAR_5, 0) < 0)
   goto err;

  FUNC_2(50);

  if (FUNC_9(VAR_5, 1) < 0)
   goto err;

  if (VAR_5->config->tuner_get_status) {
   if (VAR_5->config->tuner_get_status(VAR_7, &VAR_8) < 0)
    goto err_gateoff;
   if (VAR_8)
    FUNC_1(VAR_3, 1, "Tuner phase locked");
   else
    FUNC_1(VAR_3, 1, "Tuner unlocked");
  }

  if (FUNC_9(VAR_5, 0) < 0)
   goto err;

  FUNC_0(VAR_5, VAR_2, 0x1c);
  if (FUNC_0(VAR_5, VAR_1, 0x00) < 0)
   goto err;
  if (FUNC_0(VAR_5, VAR_0, 0x00) < 0)
   goto err;
  if (FUNC_0(VAR_5, VAR_2, 0x1f) < 0)
   goto err;
  if (FUNC_0(VAR_5, VAR_2, 0x15) < 0)
   goto err;
  VAR_15 = FUNC_8(VAR_5, (VAR_6 / 3));

  VAR_12 *= -1;
  VAR_11++;
 }

 return VAR_15;

err_gateoff:
 FUNC_9(VAR_5, 0);
err:
 FUNC_1(VAR_4, 1, "I/O error");
 return -1;
}
