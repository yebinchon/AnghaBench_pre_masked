
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {scalar_t__* srch_algo; TYPE_1__* result; int mclk; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef int s32 ;
typedef enum fe_stv0900_signal_type { ____Placeholder_fe_stv0900_signal_type } fe_stv0900_signal_type ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;
struct TYPE_2__ {void* locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (struct stv0900_internal*,int ) ;
 int FUNC_1 (int*,int*,int,int ) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct stv0900_internal*,int ,int) ;
 scalar_t__ FUNC_4 (struct stv0900_internal*,int,int) ;
 int FUNC_5 (struct stv0900_internal*,int ) ;
 int FUNC_6 (struct stv0900_internal*,int ,int,int) ;
 int FUNC_7 (struct dvb_frontend*) ;
 scalar_t__ FUNC_8 (struct stv0900_internal*,int,int,int) ;
 int FUNC_9 (struct stv0900_internal*,int ,int ) ;
 int FUNC_10 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static enum
fe_stv0900_signal_type FUNC_11(struct dvb_frontend *VAR_16)
{
 struct stv0900_state *VAR_17 = VAR_16->demodulator_priv;
 struct stv0900_internal *VAR_18 = VAR_17->internal;
 enum fe_stv0900_demod_num VAR_19 = VAR_17->demod;
 enum fe_stv0900_signal_type VAR_20 = VAR_13;

 s32 VAR_21,
  VAR_22,
  VAR_23,
  VAR_24,
  VAR_25;

 VAR_18->result[VAR_19].locked = VAR_6;

 if (FUNC_0(VAR_18, VAR_7) == VAR_10) {
  VAR_21 = FUNC_3(VAR_18, VAR_18->mclk, VAR_19);
  VAR_21 += FUNC_4(VAR_18, VAR_21, VAR_19);
  if (VAR_18->srch_algo[VAR_19] == VAR_9)
   FUNC_6(VAR_18, VAR_18->mclk, VAR_21, VAR_19);

  FUNC_1(&VAR_22, &VAR_23,
     VAR_21, VAR_14);
  VAR_24 = FUNC_5(VAR_18, VAR_1);
  VAR_25 = FUNC_5(VAR_18, VAR_0);
  FUNC_9(VAR_18, VAR_4, 0);
  FUNC_9(VAR_18, VAR_8,
     VAR_12);
  FUNC_10(VAR_18, VAR_5, 0x1c);
  FUNC_10(VAR_18, VAR_3, VAR_24);
  FUNC_10(VAR_18, VAR_2, VAR_25);
  FUNC_10(VAR_18, VAR_5, 0x18);
  if (FUNC_8(VAR_18, VAR_19,
    VAR_22, VAR_23) == VAR_15) {
   VAR_18->result[VAR_19].locked = VAR_15;
   VAR_20 = FUNC_2(VAR_16);
   FUNC_7(VAR_16);
  } else {
   FUNC_9(VAR_18, VAR_8,
     VAR_11);
   FUNC_10(VAR_18, VAR_5, 0x1c);
   FUNC_10(VAR_18, VAR_3, VAR_24);
   FUNC_10(VAR_18, VAR_2, VAR_25);
   FUNC_10(VAR_18, VAR_5, 0x18);
   if (FUNC_8(VAR_18, VAR_19,
     VAR_22, VAR_23) == VAR_15) {
    VAR_18->result[VAR_19].locked = VAR_15;
    VAR_20 = FUNC_2(VAR_16);
    FUNC_7(VAR_16);
   }

  }

 } else
  VAR_18->result[VAR_19].locked = VAR_6;

 return VAR_20;
}
