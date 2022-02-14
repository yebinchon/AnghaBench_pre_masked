
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (struct mb86a16_state*,int ,int*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_9, u32 *VAR_10)
{
 u8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18;

 struct mb86a16_state *VAR_19 = VAR_9->demodulator_priv;

 *VAR_10 = 0;
 if (FUNC_1(VAR_19, VAR_3, &VAR_11) != 2)
  goto err;
 if (FUNC_1(VAR_19, VAR_5, &VAR_12) != 2)
  goto err;
 if (FUNC_1(VAR_19, VAR_1, &VAR_13) != 2)
  goto err;
 if (FUNC_1(VAR_19, VAR_2, &VAR_14) != 2)
  goto err;
 if (FUNC_1(VAR_19, VAR_4, &VAR_15) != 2)
  goto err;

 if (VAR_11 & 0x04) {

  *VAR_10 = VAR_12 & 0x1f;
  FUNC_0(VAR_8, VAR_6, 1, "BER coarse=[0x%02x]", *VAR_10);
  if (VAR_11 & 0x01) {






   VAR_17 = (VAR_11 >> 3) & 0x03;
   *VAR_10 = (((VAR_15 << 8) | VAR_14) << 8) | VAR_13;
   if (VAR_17 == 0)
    VAR_18 = 12500000;
   else if (VAR_17 == 1)
    VAR_18 = 25000000;
   else if (VAR_17 == 2)
    VAR_18 = 50000000;
   else
    VAR_18 = 100000000;

   *VAR_10 /= VAR_18;
   FUNC_0(VAR_8, VAR_6, 1, "BER fine=[0x%02x]", *VAR_10);
  } else {






   VAR_16 = (VAR_11 >> 1) & 0x01;
   *VAR_10 = (((VAR_15 << 8) | VAR_14) << 8) | VAR_13;
   if (VAR_16 == 0)
    VAR_18 = 16;
   else
    VAR_18 = 24;

   *VAR_10 /= 2 ^ VAR_18;
   FUNC_0(VAR_8, VAR_6, 1, "BER fine=[0x%02x]", *VAR_10);
  }
 }
 return 0;
err:
 FUNC_0(VAR_8, VAR_7, 1, "I2C transfer error");
 return -VAR_0;
}
