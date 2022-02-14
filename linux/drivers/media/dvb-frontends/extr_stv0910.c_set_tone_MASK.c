
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct stv {scalar_t__ nr; } ;
struct dvb_frontend {struct stv* demodulator_priv; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct stv*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, enum fe_sec_tone_mode VAR_3)
{
 struct stv *VAR_4 = VAR_2->demodulator_priv;
 u16 VAR_5 = VAR_4->nr ? 0x40 : 0;

 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_4, VAR_1 + VAR_5, 0x38);
 case 129:
  return FUNC_0(VAR_4, VAR_1 + VAR_5, 0x3a);
 default:
  break;
 }
 return -VAR_0;
}
