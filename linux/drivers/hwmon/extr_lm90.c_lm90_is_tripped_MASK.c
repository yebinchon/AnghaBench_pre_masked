
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lm90_data {scalar_t__ kind; } ;
struct i2c_client {int dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,int) ;
 struct lm90_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static bool FUNC_3(struct i2c_client *VAR_17, u16 *VAR_18)
{
 struct lm90_data *VAR_19 = FUNC_1(VAR_17);
 int VAR_20, VAR_21 = 0;

 VAR_20 = FUNC_2(VAR_17, VAR_0);
 if (VAR_20 < 0)
  return 0;

 if (VAR_19->kind == VAR_16) {
  VAR_21 = FUNC_2(VAR_17, VAR_8);
  if (VAR_21 < 0)
   return 0;
 }

 *VAR_18 = VAR_20 | (VAR_21 << 8);

 if ((VAR_20 & 0x7f) == 0 && (VAR_21 & 0xfe) == 0)
  return 0;

 if ((VAR_20 & (VAR_2 | VAR_1 | VAR_3)) ||
     (VAR_21 & VAR_9))
  FUNC_0(&VAR_17->dev,
    "temp%d out of range, please check!\n", 1);
 if ((VAR_20 & (VAR_5 | VAR_4 | VAR_7)) ||
     (VAR_21 & VAR_15))
  FUNC_0(&VAR_17->dev,
    "temp%d out of range, please check!\n", 2);
 if (VAR_20 & VAR_6)
  FUNC_0(&VAR_17->dev,
    "temp%d diode open, please check!\n", 2);
 if (VAR_21 & (VAR_11 | VAR_10 |
     VAR_14 | VAR_13))
  FUNC_0(&VAR_17->dev,
    "temp%d out of range, please check!\n", 3);
 if (VAR_21 & VAR_12)
  FUNC_0(&VAR_17->dev,
    "temp%d diode open, please check!\n", 3);

 return 1;
}
