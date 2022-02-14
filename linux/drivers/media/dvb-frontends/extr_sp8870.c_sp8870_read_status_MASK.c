
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp8870_state {int dummy; } ;
struct dvb_frontend {struct sp8870_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sp8870_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_6,
         enum fe_status *VAR_7)
{
 struct sp8870_state* VAR_8 = VAR_6->demodulator_priv;
 int VAR_9;
 int VAR_10;

 *VAR_7 = 0;

 VAR_9 = FUNC_0 (VAR_8, 0x0200);
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_10 = FUNC_0 (VAR_8, 0x0303);
 if (VAR_10 < 0)
  return -VAR_0;

 if (VAR_10 > 0x0F)
  *VAR_7 |= VAR_3;
 if (VAR_9 & 0x08)
  *VAR_7 |= VAR_4;
 if (VAR_9 & 0x04)
  *VAR_7 |= VAR_2 | VAR_1 | VAR_5;

 return 0;
}
