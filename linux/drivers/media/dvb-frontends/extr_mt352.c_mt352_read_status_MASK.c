
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt352_state {int dummy; } ;
struct dvb_frontend {struct mt352_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mt352_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_9, enum fe_status *VAR_10)
{
 struct mt352_state* VAR_11 = VAR_9->demodulator_priv;
 int VAR_12, VAR_13, VAR_14;
 if ((VAR_12 = FUNC_0(VAR_11, VAR_6)) < 0)
  return -VAR_0;
 if ((VAR_13 = FUNC_0(VAR_11, VAR_7)) < 0)
  return -VAR_0;
 if ((VAR_14 = FUNC_0(VAR_11, VAR_8)) < 0)
  return -VAR_0;

 *VAR_10 = 0;
 if (VAR_12 & (1 << 4))
  *VAR_10 |= VAR_1;
 if (VAR_12 & (1 << 1))
  *VAR_10 |= VAR_5;
 if (VAR_12 & (1 << 5))
  *VAR_10 |= VAR_2;
 if (VAR_13 & (1 << 1))
  *VAR_10 |= VAR_4;
 if (VAR_14 & (1 << 6))
  *VAR_10 |= VAR_3;

 if ((*VAR_10 & (VAR_1 | VAR_5 | VAR_4)) !=
        (VAR_1 | VAR_5 | VAR_4))
  *VAR_10 &= ~VAR_2;

 return 0;
}
