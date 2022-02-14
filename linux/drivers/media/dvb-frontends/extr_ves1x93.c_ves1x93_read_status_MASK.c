
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ves1x93_state {int dummy; } ;
struct dvb_frontend {struct ves1x93_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ves1x93_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5,
          enum fe_status *VAR_6)
{
 struct ves1x93_state* VAR_7 = VAR_5->demodulator_priv;

 u8 VAR_8 = FUNC_1 (VAR_7, 0x0e);
 int VAR_9 = 10;
 while ((VAR_8 & 0x03) != 0x03 && (VAR_8 & 0x0c) && VAR_9--) {
  FUNC_0(10);
  VAR_8 = FUNC_1 (VAR_7, 0x0e);
 }

 *VAR_6 = 0;

 if (VAR_8 & 1)
  *VAR_6 |= VAR_2;

 if (VAR_8 & 2)
  *VAR_6 |= VAR_0;

 if (VAR_8 & 4)
  *VAR_6 |= VAR_4;

 if (VAR_8 & 8)
  *VAR_6 |= VAR_3;

 if ((VAR_8 & 0x1f) == 0x1f)
  *VAR_6 |= VAR_1;

 return 0;
}
