
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0367ter_state {scalar_t__ hierarchy; } ;
struct stv0367_state {struct stv0367ter_state* ter_state; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;
struct dtv_frontend_properties {void* guard_interval; int transmission_mode; int code_rate_HP; int hierarchy; void* inversion; int modulation; scalar_t__ frequency; } ;
typedef enum stv0367_ter_mode { ____Placeholder_stv0367_ter_mode } stv0367_ter_mode ;


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
 scalar_t__ VAR_13 ;


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
 scalar_t__ FUNC_0 (struct dvb_frontend*) ;
 void* FUNC_1 (struct stv0367_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_25,
       struct dtv_frontend_properties *VAR_26)
{
 struct stv0367_state *VAR_27 = VAR_25->demodulator_priv;
 struct stv0367ter_state *VAR_28 = VAR_27->ter_state;
 enum stv0367_ter_mode VAR_29;
 int VAR_30 = 0, VAR_31 = 0;

 VAR_26->frequency = FUNC_0(VAR_25);
 if ((int)VAR_26->frequency < 0)
  VAR_26->frequency = -VAR_26->frequency;

 VAR_30 = FUNC_1(VAR_27, VAR_3);
 if (VAR_30 == 0)
  VAR_26->modulation = VAR_21;
 else if (VAR_30 == 1)
  VAR_26->modulation = VAR_19;
 else
  VAR_26->modulation = VAR_20;

 VAR_26->inversion = FUNC_1(VAR_27, VAR_0);


 VAR_31 = FUNC_1(VAR_27, VAR_4);

 switch (VAR_31) {
 case 0:
  VAR_26->hierarchy = VAR_18;
  break;
 case 1:
  VAR_26->hierarchy = VAR_14;
  break;
 case 2:
  VAR_26->hierarchy = VAR_15;
  break;
 case 3:
  VAR_26->hierarchy = VAR_16;
  break;
 default:
  VAR_26->hierarchy = VAR_17;
  break;
 }


 if (VAR_28->hierarchy == VAR_13)
  VAR_31 = FUNC_1(VAR_27, VAR_6);
 else
  VAR_31 = FUNC_1(VAR_27, VAR_5);

 switch (VAR_31) {
 case 0:
  VAR_26->code_rate_HP = VAR_7;
  break;
 case 1:
  VAR_26->code_rate_HP = VAR_8;
  break;
 case 2:
  VAR_26->code_rate_HP = VAR_9;
  break;
 case 3:
  VAR_26->code_rate_HP = VAR_10;
  break;
 case 4:
  VAR_26->code_rate_HP = VAR_11;
  break;
 default:
  VAR_26->code_rate_HP = VAR_12;
  break;
 }

 VAR_29 = FUNC_1(VAR_27, VAR_2);

 switch (VAR_29) {
 case 129:
  VAR_26->transmission_mode = VAR_22;
  break;



 case 128:
  VAR_26->transmission_mode = VAR_23;
  break;
 default:
  VAR_26->transmission_mode = VAR_24;
 }

 VAR_26->guard_interval = FUNC_1(VAR_27, VAR_1);

 return 0;
}
