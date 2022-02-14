
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_16)
{
 int VAR_17;
 int VAR_18 = -VAR_13;

 if (VAR_14) {
  VAR_17 = FUNC_2(VAR_16, VAR_12);

  if (VAR_17 < 0) {
    FUNC_0(&VAR_16->dev,
   "Error reading configuration register, aborting.\n");
    return VAR_18;
  }

  VAR_17 |= VAR_8;

  if (FUNC_3(VAR_16, VAR_12,
    VAR_17)) {
   FUNC_0(&VAR_16->dev,
   "Configuration register write error, aborting.\n");
   return VAR_18;
  }

  VAR_17 = FUNC_2(VAR_16, VAR_11);

  if (VAR_17 < 0) {
   FUNC_0(&VAR_16->dev,
   "Error reading configuration register, aborting.\n");
   return VAR_18;
  }

  FUNC_1(&VAR_16->dev, "Revision %d\n", VAR_17 & 0x0f);

  VAR_17 &= ~VAR_7;

  if (FUNC_3(VAR_16, VAR_11,
    VAR_17)) {
   FUNC_0(&VAR_16->dev,
   "Configuration register write error, aborting.\n");
   return VAR_18;
  }

  VAR_17 = FUNC_2(VAR_16, VAR_10);

  if (VAR_17 < 0) {
   FUNC_0(&VAR_16->dev,
   "Error reading configuration register, aborting.\n");
   return VAR_18;
  }

  VAR_17 &= ~VAR_5;
  VAR_17 &= ~VAR_4;
  VAR_17 &= ~VAR_6;
  if (FUNC_3(VAR_16,
    VAR_10, VAR_17)) {
   FUNC_0(&VAR_16->dev,
   "Configuration register write error, aborting.\n");
   return VAR_18;
  }

  VAR_17 = FUNC_2(VAR_16, VAR_9);

  if (VAR_17 < 0) {
   FUNC_0(&VAR_16->dev,
   "Error reading configuration register, aborting.\n");
   return VAR_18;
  }

  VAR_17 &= ~VAR_3;
  VAR_17 &= ~VAR_0;
  VAR_17 |= VAR_2;
  if (VAR_15)
   VAR_17 |= VAR_1;
  else
   VAR_17 &= ~VAR_1;

  if (FUNC_3(
    VAR_16, VAR_9, VAR_17)) {
   FUNC_0(&VAR_16->dev,
   "Configuration register write error, aborting.\n");
   return VAR_18;
  }
 }
 return 0;
}
