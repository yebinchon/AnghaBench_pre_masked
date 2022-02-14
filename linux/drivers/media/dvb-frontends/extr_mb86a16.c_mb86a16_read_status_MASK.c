
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct mb86a16_state*,int ,int*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_12, enum fe_status *VAR_13)
{
 u8 VAR_14, VAR_15;
 struct mb86a16_state *VAR_16 = VAR_12->demodulator_priv;

 *VAR_13 = 0;

 if (FUNC_1(VAR_16, VAR_8, &VAR_14) != 2)
  goto err;
 if (FUNC_1(VAR_16, VAR_9, &VAR_15) != 2)
  goto err;
 if ((VAR_14 > 25) && (VAR_15 > 25))
  *VAR_13 |= VAR_3;
 if ((VAR_14 > 45) && (VAR_15 > 45))
  *VAR_13 |= VAR_1;

 if (FUNC_1(VAR_16, VAR_10, &VAR_14) != 2)
  goto err;

 if (VAR_14 & 0x01)
  *VAR_13 |= VAR_4;
 if (VAR_14 & 0x01)
  *VAR_13 |= VAR_5;

 if (FUNC_1(VAR_16, VAR_7, &VAR_14) != 2)
  goto err;

 if ((VAR_14 & 0x0f) && (*VAR_13 & VAR_5))
  *VAR_13 |= VAR_2;

 return 0;

err:
 FUNC_0(VAR_11, VAR_6, 1, "I2C transfer error");
 return -VAR_0;
}
