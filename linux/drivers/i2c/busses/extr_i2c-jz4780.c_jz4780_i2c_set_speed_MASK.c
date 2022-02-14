
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct jz4780_i2c {int speed; TYPE_1__ adap; int clk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (struct jz4780_i2c*) ;
 int FUNC_7 (struct jz4780_i2c*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct jz4780_i2c *VAR_13)
{
 int VAR_14 = FUNC_4(VAR_13->clk) / 1000;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 unsigned short VAR_20 = 0;
 int VAR_21 = VAR_13->speed;

 if (FUNC_6(VAR_13))
  FUNC_5(&VAR_13->adap.dev, "i2c not disabled\n");






 VAR_17 = VAR_14 / VAR_21;

 if (VAR_21 <= 100)
  VAR_15 = (VAR_17 * 4000) / (4700 + 4000);
 else
  VAR_15 = (VAR_17 * 600) / (1300 + 600);

 VAR_16 = VAR_17 - VAR_15;
 if (VAR_21 <= 100) {
  VAR_20 = VAR_5 | VAR_2
        | VAR_3 | VAR_1;
  FUNC_7(VAR_13, VAR_0, VAR_20);

  FUNC_7(VAR_13, VAR_11,
      FUNC_2(VAR_15));
  FUNC_7(VAR_13, VAR_12,
      FUNC_3(VAR_16));
 } else {
  VAR_20 = VAR_4 | VAR_2
        | VAR_3 | VAR_1;
  FUNC_7(VAR_13, VAR_0, VAR_20);

  FUNC_7(VAR_13, VAR_6,
      FUNC_0(VAR_15));
  FUNC_7(VAR_13, VAR_7,
      FUNC_1(VAR_16));
 }
 if (VAR_21 <= 100) {
  VAR_18 = 300;
  VAR_19 = 400;
 } else {
  VAR_18 = 450;
  VAR_19 = 450;
 }

 VAR_19 = ((VAR_19 * VAR_14) / 1000000) - 1;
 VAR_18 = ((VAR_18 * VAR_14) / 1000000) + 1;

 if (VAR_18 > 255)
  VAR_18 = 255;

 if (VAR_18 <= 0)
  VAR_18 = 1;

 FUNC_7(VAR_13, VAR_10, VAR_18);

 if (VAR_19 > 255)
  VAR_19 = 255;

 if (VAR_19 >= 0) {

  VAR_19 |= VAR_9;
  FUNC_7(VAR_13, VAR_8, VAR_19);
 } else {

  FUNC_7(VAR_13, VAR_8, 0);
 }

 return 0;
}
