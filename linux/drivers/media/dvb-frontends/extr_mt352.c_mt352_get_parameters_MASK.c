
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mt352_state {int dummy; } ;
struct dvb_frontend {struct mt352_state* demodulator_priv; } ;
struct dtv_frontend_properties {int code_rate_HP; int code_rate_LP; int frequency; int bandwidth_hz; int inversion; int hierarchy; int guard_interval; int transmission_mode; int modulation; } ;


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
 int FUNC_0 (struct mt352_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_26,
    struct dtv_frontend_properties *VAR_27)
{
 struct mt352_state* VAR_28 = VAR_26->demodulator_priv;
 u16 VAR_29;
 u16 VAR_30;
 u8 VAR_31;
 static const u8 VAR_32[8] =
 {
  133,
  132,
  131,
  130,
  129,
  128,
  128,
  128
 };

 if ( (FUNC_0(VAR_28,0x00) & 0xC0) != 0xC0 )
  return -VAR_2;




 VAR_29 = (FUNC_0(VAR_28, VAR_22) << 8) | FUNC_0(VAR_28, VAR_21);
 VAR_30 = (FUNC_0(VAR_28, VAR_1) << 8) | FUNC_0(VAR_28, VAR_0);
 VAR_31 = FUNC_0(VAR_28, VAR_25);

 VAR_27->code_rate_HP = VAR_32[(VAR_29 >> 7) & 7];
 VAR_27->code_rate_LP = VAR_32[(VAR_29 >> 4) & 7];

 switch ( (VAR_29 >> 13) & 3)
 {
  case 0:
   VAR_27->modulation = VAR_19;
   break;
  case 1:
   VAR_27->modulation = VAR_16;
   break;
  case 2:
   VAR_27->modulation = VAR_17;
   break;
  default:
   VAR_27->modulation = VAR_18;
   break;
 }

 VAR_27->transmission_mode = (VAR_29 & 0x01) ? VAR_24 : VAR_23;

 switch ( (VAR_29 >> 2) & 3)
 {
  case 0:
   VAR_27->guard_interval = VAR_4;
   break;
  case 1:
   VAR_27->guard_interval = VAR_3;
   break;
  case 2:
   VAR_27->guard_interval = VAR_6;
   break;
  case 3:
   VAR_27->guard_interval = VAR_5;
   break;
  default:
   VAR_27->guard_interval = VAR_7;
   break;
 }

 switch ( (VAR_29 >> 10) & 7)
 {
  case 0:
   VAR_27->hierarchy = VAR_12;
   break;
  case 1:
   VAR_27->hierarchy = VAR_8;
   break;
  case 2:
   VAR_27->hierarchy = VAR_9;
   break;
  case 3:
   VAR_27->hierarchy = VAR_10;
   break;
  default:
   VAR_27->hierarchy = VAR_11;
   break;
 }

 VAR_27->frequency = (500 * (VAR_30 - VAR_13)) / 3 * 1000;

 if (VAR_31 == 0x72)
  VAR_27->bandwidth_hz = 8000000;
 else if (VAR_31 == 0x64)
  VAR_27->bandwidth_hz = 7000000;
 else
  VAR_27->bandwidth_hz = 6000000;


 if (FUNC_0(VAR_28, VAR_20) & 0x02)
  VAR_27->inversion = VAR_14;
 else
  VAR_27->inversion = VAR_15;

 return 0;
}
