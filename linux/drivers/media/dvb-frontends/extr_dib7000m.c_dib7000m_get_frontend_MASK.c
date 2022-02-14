
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dtv_frontend_properties {void* code_rate_LP; void* code_rate_HP; int hierarchy; int modulation; int guard_interval; int transmission_mode; int bandwidth_hz; int inversion; } ;
struct dib7000m_state {int current_bandwidth; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 int FUNC_1 (struct dib7000m_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_16,
     struct dtv_frontend_properties *VAR_17)
{
 struct dib7000m_state *VAR_18 = VAR_16->demodulator_priv;
 u16 VAR_19 = FUNC_1(VAR_18,480);

 VAR_17->inversion = VAR_10;

 VAR_17->bandwidth_hz = FUNC_0(VAR_18->current_bandwidth);

 switch ((VAR_19 >> 8) & 0x3) {
  case 0: VAR_17->transmission_mode = VAR_14; break;
  case 1: VAR_17->transmission_mode = VAR_15; break;

 }

 switch (VAR_19 & 0x3) {
  case 0: VAR_17->guard_interval = VAR_6; break;
  case 1: VAR_17->guard_interval = VAR_5; break;
  case 2: VAR_17->guard_interval = VAR_8; break;
  case 3: VAR_17->guard_interval = VAR_7; break;
 }

 switch ((VAR_19 >> 14) & 0x3) {
  case 0: VAR_17->modulation = VAR_13; break;
  case 1: VAR_17->modulation = VAR_11; break;
  case 2:
  default: VAR_17->modulation = VAR_12; break;
 }




 VAR_17->hierarchy = VAR_9;
 switch ((VAR_19 >> 5) & 0x7) {
  case 1: VAR_17->code_rate_HP = VAR_0; break;
  case 2: VAR_17->code_rate_HP = VAR_1; break;
  case 3: VAR_17->code_rate_HP = VAR_2; break;
  case 5: VAR_17->code_rate_HP = VAR_3; break;
  case 7:
  default: VAR_17->code_rate_HP = VAR_4; break;

 }

 switch ((VAR_19 >> 2) & 0x7) {
  case 1: VAR_17->code_rate_LP = VAR_0; break;
  case 2: VAR_17->code_rate_LP = VAR_1; break;
  case 3: VAR_17->code_rate_LP = VAR_2; break;
  case 5: VAR_17->code_rate_LP = VAR_3; break;
  case 7:
  default: VAR_17->code_rate_LP = VAR_4; break;
 }



 return 0;
}
