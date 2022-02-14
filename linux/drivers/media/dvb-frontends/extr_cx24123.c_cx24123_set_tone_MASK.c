
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {int dummy; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;


 int VAR_0 ;


 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*) ;
 int FUNC_2 (struct cx24123_state*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1, enum fe_sec_tone_mode VAR_2)
{
 struct cx24123_state *VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4;


 FUNC_1(VAR_3);

 VAR_4 = FUNC_0(VAR_3, 0x29) & ~0x40;

 switch (VAR_2) {
 case 128:
  FUNC_3("setting tone on\n");
  return FUNC_2(VAR_3, 0x29, VAR_4 | 0x10);
 case 129:
  FUNC_3("setting tone off\n");
  return FUNC_2(VAR_3, 0x29, VAR_4 & 0xef);
 default:
  FUNC_4("CASE reached default with tone=%d\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
