
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc90522_state {int dummy; } ;
struct dvb_frontend {struct tc90522_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tc90522_state*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_5, enum fe_status *VAR_6)
{
 struct tc90522_state *VAR_7;
 int VAR_8;
 u8 VAR_9;

 VAR_7 = VAR_5->demodulator_priv;
 VAR_8 = FUNC_0(VAR_7, 0xc3, &VAR_9, 1);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_6 = 0;
 if (VAR_9 & 0x80)
  return 0;
 *VAR_6 |= VAR_2;

 if (VAR_9 & 0x60)
  return 0;
 *VAR_6 |= VAR_0 | VAR_4 | VAR_3;

 if (VAR_9 & 0x10)
  return 0;
 if (FUNC_0(VAR_7, 0xc5, &VAR_9, 1) < 0 || !(VAR_9 & 0x03))
  return 0;
 *VAR_6 |= VAR_1;
 return 0;
}
