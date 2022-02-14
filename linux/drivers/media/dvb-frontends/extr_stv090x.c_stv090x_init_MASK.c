
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {scalar_t__ device; int rolloff; int inversion; int demod_mode; TYPE_1__* internal; struct stv090x_config* config; } ;
struct stv090x_config {scalar_t__ (* tuner_init ) (struct dvb_frontend*) ;int clk_mode; scalar_t__ (* tuner_set_mode ) (struct dvb_frontend*,int ) ;int xtal; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct dvb_frontend*) ;
 scalar_t__ FUNC_6 (struct dvb_frontend*,int ) ;
 scalar_t__ FUNC_7 (struct dvb_frontend*) ;
 scalar_t__ FUNC_8 (struct stv090x_state*) ;
 scalar_t__ FUNC_9 (struct stv090x_state*) ;
 int FUNC_10 (struct stv090x_state*) ;
 scalar_t__ FUNC_11 (struct stv090x_state*,int) ;
 scalar_t__ FUNC_12 (struct stv090x_state*,int ) ;
 int FUNC_13 (struct stv090x_state*,int,int ) ;
 scalar_t__ FUNC_14 (struct dvb_frontend*) ;
 scalar_t__ FUNC_15 (struct stv090x_state*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct dvb_frontend *VAR_8)
{
 struct stv090x_state *VAR_9 = VAR_8->demodulator_priv;
 const struct stv090x_config *VAR_10 = VAR_9->config;
 u32 VAR_11;

 if (VAR_9->internal->mclk == 0) {



  if (FUNC_11(VAR_9, 1) < 0)
   goto err;

  if (VAR_10->tuner_init) {
   if (VAR_10->tuner_init(VAR_8) < 0)
    goto err_gateoff;
  }

  if (FUNC_11(VAR_9, 0) < 0)
   goto err;

  FUNC_13(VAR_9, 135000000, VAR_10->xtal);
  FUNC_4(5);
  if (FUNC_15(VAR_9, VAR_4,
          0x20 | VAR_10->clk_mode) < 0)
   goto err;
  FUNC_10(VAR_9);
 }

 if (FUNC_14(VAR_8) < 0) {
  FUNC_3(VAR_1, 1, "Error waking device");
  goto err;
 }

 if (FUNC_12(VAR_9, VAR_9->demod_mode) < 0)
  goto err;

 VAR_11 = FUNC_0(VAR_9, VAR_5);
 FUNC_1(VAR_11, VAR_7, VAR_9->inversion);
 if (FUNC_2(VAR_9, VAR_5, VAR_11) < 0)
  goto err;
 VAR_11 = FUNC_0(VAR_9, VAR_0);
 FUNC_1(VAR_11, VAR_2, VAR_9->rolloff);
 if (FUNC_2(VAR_9, VAR_0, VAR_11) < 0)
  goto err;

 if (FUNC_11(VAR_9, 1) < 0)
  goto err;

 if (VAR_10->tuner_set_mode) {
  if (VAR_10->tuner_set_mode(VAR_8, VAR_6) < 0)
   goto err_gateoff;
 }

 if (VAR_10->tuner_init) {
  if (VAR_10->tuner_init(VAR_8) < 0)
   goto err_gateoff;
 }

 if (FUNC_11(VAR_9, 0) < 0)
  goto err;

 if (VAR_9->device == VAR_3) {
  if (FUNC_8(VAR_9) < 0)
   goto err;
 } else {
  if (FUNC_9(VAR_9) < 0)
   goto err;
 }

 return 0;

err_gateoff:
 FUNC_11(VAR_9, 0);
err:
 FUNC_3(VAR_1, 1, "I/O error");
 return -1;
}
