
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stv090x_state {scalar_t__ device; int demod; TYPE_2__* internal; TYPE_1__* config; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
struct TYPE_4__ {int demod_lock; } ;
struct TYPE_3__ {scalar_t__ (* tuner_sleep ) (struct dvb_frontend*) ;} ;


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
 scalar_t__ VAR_17 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int ,int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct dvb_frontend*) ;
 scalar_t__ FUNC_6 (struct stv090x_state*,int) ;
 int FUNC_7 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_8 (struct stv090x_state*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_25)
{
 struct stv090x_state *VAR_26 = VAR_25->demodulator_priv;
 u32 VAR_27;
 u8 VAR_28 = 0;

 if (FUNC_6(VAR_26, 1) < 0)
  goto err;

 if (VAR_26->config->tuner_sleep) {
  if (VAR_26->config->tuner_sleep(VAR_25) < 0)
   goto err_gateoff;
 }

 if (FUNC_6(VAR_26, 0) < 0)
  goto err;

 FUNC_2(VAR_4, 1, "Set %s(%d) to sleep",
  VAR_26->device == VAR_17 ? "STV0900" : "STV0903",
  VAR_26->demod);

 FUNC_3(&VAR_26->internal->demod_lock);

 switch (VAR_26->demod) {
 case 129:

  VAR_27 = FUNC_7(VAR_26, VAR_21);
  FUNC_1(VAR_27, VAR_0, 0);
  if (FUNC_8(VAR_26, VAR_21, VAR_27) < 0)
   goto err_unlock;

  VAR_27 = FUNC_7(VAR_26, VAR_22);
  FUNC_1(VAR_27, VAR_2, 0);
  if (FUNC_8(VAR_26, VAR_22, VAR_27) < 0)
   goto err_unlock;



  VAR_27 = FUNC_7(VAR_26, VAR_23);
  if (FUNC_0(VAR_27, VAR_1) == 0)
   VAR_28 = 1;


  VAR_27 = FUNC_7(VAR_26, VAR_18);

  FUNC_1(VAR_27, VAR_10, 1);

  FUNC_1(VAR_27, VAR_7, 1);


  if (VAR_28)
   FUNC_1(VAR_27, VAR_9, 1);
  if (FUNC_8(VAR_26, VAR_18, VAR_27) < 0)
   goto err_unlock;
  VAR_27 = FUNC_7(VAR_26, VAR_19);

  FUNC_1(VAR_27, VAR_12, 1);

  FUNC_1(VAR_27, VAR_15, 1);


  if (VAR_28)
   FUNC_1(VAR_27, VAR_14, 1);
  if (FUNC_8(VAR_26, VAR_19, VAR_27) < 0)
   goto err_unlock;
  break;

 case 128:

  VAR_27 = FUNC_7(VAR_26, VAR_23);
  FUNC_1(VAR_27, VAR_1, 0);
  if (FUNC_8(VAR_26, VAR_23, VAR_27) < 0)
   goto err_unlock;

  VAR_27 = FUNC_7(VAR_26, VAR_24);
  FUNC_1(VAR_27, VAR_3, 0);
  if (FUNC_8(VAR_26, VAR_24, VAR_27) < 0)
   goto err_unlock;



  VAR_27 = FUNC_7(VAR_26, VAR_21);
  if (FUNC_0(VAR_27, VAR_0) == 0)
   VAR_28 = 1;


  VAR_27 = FUNC_7(VAR_26, VAR_18);

  FUNC_1(VAR_27, VAR_11, 1);

  FUNC_1(VAR_27, VAR_8, 1);


  if (VAR_28)
   FUNC_1(VAR_27, VAR_9, 1);
  if (FUNC_8(VAR_26, VAR_18, VAR_27) < 0)
   goto err_unlock;
  VAR_27 = FUNC_7(VAR_26, VAR_19);

  FUNC_1(VAR_27, VAR_13, 1);

  FUNC_1(VAR_27, VAR_16, 1);


  if (VAR_28)
   FUNC_1(VAR_27, VAR_14, 1);
  if (FUNC_8(VAR_26, VAR_19, VAR_27) < 0)
   goto err_unlock;
  break;

 default:
  FUNC_2(VAR_5, 1, "Wrong demodulator!");
  break;
 }

 if (VAR_28) {

  VAR_27 = FUNC_7(VAR_26, VAR_20);
  FUNC_1(VAR_27, VAR_6, 0x01);
  if (FUNC_8(VAR_26, VAR_20, VAR_27) < 0)
   goto err_unlock;
 }

 FUNC_4(&VAR_26->internal->demod_lock);
 return 0;

err_gateoff:
 FUNC_6(VAR_26, 0);
 goto err;
err_unlock:
 FUNC_4(&VAR_26->internal->demod_lock);
err:
 FUNC_2(VAR_5, 1, "I/O error");
 return -1;
}
