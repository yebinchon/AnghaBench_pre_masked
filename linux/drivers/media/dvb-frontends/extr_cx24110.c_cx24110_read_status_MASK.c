
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int dummy; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx24110_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_5,
          enum fe_status *VAR_6)
{
 struct cx24110_state *VAR_7 = VAR_5->demodulator_priv;

 int VAR_8 = FUNC_0 (VAR_7, 0x55);

 *VAR_6 = 0;

 if (VAR_8 & 0x10)
  *VAR_6 |= VAR_2;

 if (VAR_8 & 0x08)
  *VAR_6 |= VAR_0;

 VAR_8 = FUNC_0 (VAR_7, 0x08);

 if (VAR_8 & 0x40)
  *VAR_6 |= VAR_4;

 if (VAR_8 & 0x20)
  *VAR_6 |= VAR_3;

 if ((VAR_8 & 0x60) == 0x60)
  *VAR_6 |= VAR_1;

 return 0;
}
