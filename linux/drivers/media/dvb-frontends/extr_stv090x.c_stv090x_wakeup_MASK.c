
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {scalar_t__ device; int demod; TYPE_1__* internal; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
struct TYPE_2__ {int demod_lock; } ;


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


 int FUNC_0 (int ,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,int,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_5 (struct stv090x_state*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_25)
{
 struct stv090x_state *VAR_26 = VAR_25->demodulator_priv;
 u32 VAR_27;

 FUNC_1(VAR_4, 1, "Wake %s(%d) from standby",
  VAR_26->device == VAR_17 ? "STV0900" : "STV0903",
  VAR_26->demod);

 FUNC_2(&VAR_26->internal->demod_lock);


 VAR_27 = FUNC_4(VAR_26, VAR_20);
 FUNC_0(VAR_27, VAR_6, 0x00);
 if (FUNC_5(VAR_26, VAR_20, VAR_27) < 0)
  goto err;

 switch (VAR_26->demod) {
 case 129:

  VAR_27 = FUNC_4(VAR_26, VAR_21);
  FUNC_0(VAR_27, VAR_0, 1);
  if (FUNC_5(VAR_26, VAR_21, VAR_27) < 0)
   goto err;

  VAR_27 = FUNC_4(VAR_26, VAR_22);
  FUNC_0(VAR_27, VAR_2, 1);
  if (FUNC_5(VAR_26, VAR_22, VAR_27) < 0)
   goto err;


  VAR_27 = FUNC_4(VAR_26, VAR_18);

  FUNC_0(VAR_27, VAR_10, 0);

  FUNC_0(VAR_27, VAR_7, 0);

  FUNC_0(VAR_27, VAR_9, 0);
  if (FUNC_5(VAR_26, VAR_18, VAR_27) < 0)
   goto err;
  VAR_27 = FUNC_4(VAR_26, VAR_19);

  FUNC_0(VAR_27, VAR_12, 0);

  FUNC_0(VAR_27, VAR_15, 0);

  FUNC_0(VAR_27, VAR_14, 0);
  if (FUNC_5(VAR_26, VAR_19, VAR_27) < 0)
   goto err;
  break;

 case 128:

  VAR_27 = FUNC_4(VAR_26, VAR_23);
  FUNC_0(VAR_27, VAR_1, 1);
  if (FUNC_5(VAR_26, VAR_23, VAR_27) < 0)
   goto err;

  VAR_27 = FUNC_4(VAR_26, VAR_24);
  FUNC_0(VAR_27, VAR_3, 1);
  if (FUNC_5(VAR_26, VAR_24, VAR_27) < 0)
   goto err;


  VAR_27 = FUNC_4(VAR_26, VAR_18);

  FUNC_0(VAR_27, VAR_11, 0);

  FUNC_0(VAR_27, VAR_8, 0);

  FUNC_0(VAR_27, VAR_9, 0);
  if (FUNC_5(VAR_26, VAR_18, VAR_27) < 0)
   goto err;
  VAR_27 = FUNC_4(VAR_26, VAR_19);

  FUNC_0(VAR_27, VAR_13, 0);

  FUNC_0(VAR_27, VAR_16, 0);

  FUNC_0(VAR_27, VAR_14, 0);
  if (FUNC_5(VAR_26, VAR_19, VAR_27) < 0)
   goto err;
  break;

 default:
  FUNC_1(VAR_5, 1, "Wrong demodulator!");
  break;
 }

 FUNC_3(&VAR_26->internal->demod_lock);
 return 0;
err:
 FUNC_3(&VAR_26->internal->demod_lock);
 FUNC_1(VAR_5, 1, "I/O error");
 return -1;
}
