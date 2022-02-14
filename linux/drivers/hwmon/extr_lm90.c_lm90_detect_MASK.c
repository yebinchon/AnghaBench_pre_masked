
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; int flags; } ;
struct i2c_adapter {int dev; } ;


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
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_13,
         struct i2c_board_info *VAR_14)
{
 struct i2c_adapter *VAR_15 = VAR_13->adapter;
 int VAR_16 = VAR_13->addr;
 const char *VAR_17 = ((void*)0);
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 if (!FUNC_2(VAR_15, VAR_3))
  return -VAR_0;


 VAR_18 = FUNC_3(VAR_13, VAR_9);
 VAR_19 = FUNC_3(VAR_13, VAR_5);
 VAR_20 = FUNC_3(VAR_13, VAR_6);
 VAR_22 = FUNC_3(VAR_13, VAR_8);
 if (VAR_18 < 0 || VAR_19 < 0 || VAR_20 < 0 || VAR_22 < 0)
  return -VAR_0;

 if (VAR_18 == 0x01 || VAR_18 == 0x5C || VAR_18 == 0x41) {
  VAR_21 = FUNC_3(VAR_13, VAR_7);
  if (VAR_21 < 0)
   return -VAR_0;
 } else
  VAR_21 = 0;

 if ((VAR_16 == 0x4C || VAR_16 == 0x4D)
  && VAR_18 == 0x01) {
  if ((VAR_20 & 0x2A) == 0x00
   && (VAR_21 & 0xF8) == 0x00
   && VAR_22 <= 0x09) {
   if (VAR_16 == 0x4C
    && (VAR_19 & 0xF0) == 0x20) {
    VAR_17 = "lm90";
   } else
   if ((VAR_19 & 0xF0) == 0x30) {
    VAR_17 = "lm99";
    FUNC_1(&VAR_15->dev,
      "Assuming LM99 chip at 0x%02x\n",
      VAR_16);
    FUNC_1(&VAR_15->dev,
      "If it is an LM89, instantiate it "
      "with the new_device sysfs "
      "interface\n");
   } else
   if (VAR_16 == 0x4C
    && (VAR_19 & 0xF0) == 0x10) {
    VAR_17 = "lm86";
   }
  }
 } else
 if ((VAR_16 == 0x4C || VAR_16 == 0x4D)
  && VAR_18 == 0x41) {
  if ((VAR_19 & 0xF0) == 0x40
   && (VAR_20 & 0x3F) == 0x00
   && VAR_22 <= 0x0A) {
   VAR_17 = "adm1032";




   if (FUNC_2(VAR_15,
          VAR_2))
    VAR_14->flags |= VAR_1;
  } else
  if (VAR_19 == 0x51
   && (VAR_20 & 0x1B) == 0x00
   && VAR_22 <= 0x0A) {
   VAR_17 = "adt7461";
  } else
  if (VAR_19 == 0x57
   && (VAR_20 & 0x1B) == 0x00
   && VAR_22 <= 0x0A) {
   VAR_17 = "adt7461a";
  }
 } else
 if (VAR_18 == 0x4D) {
  int VAR_23, VAR_24, VAR_25;







  VAR_23 = FUNC_3(VAR_13,
       VAR_10);
  VAR_18 = FUNC_3(VAR_13,
        VAR_9);
  VAR_24 = FUNC_3(VAR_13,
        VAR_10);
  VAR_25 = FUNC_3(VAR_13,
         VAR_11);
  if (VAR_23 < 0 || VAR_18 < 0 || VAR_24 < 0 || VAR_25 < 0)
   return -VAR_0;
  if (VAR_19 == VAR_18
   && (VAR_16 == 0x4C || VAR_16 == 0x4D || VAR_16 == 0x4E)
   && (VAR_20 & 0x1F) == (VAR_18 & 0x0F)
   && VAR_22 <= 0x09) {
   if (VAR_16 == 0x4C)
    VAR_17 = "max6657";
   else
    VAR_17 = "max6659";
  } else
  if (VAR_19 == 0x01
   && (VAR_20 & 0x10) == 0x00
   && (VAR_25 & 0x01) == 0x00
   && VAR_23 == VAR_24
   && VAR_22 <= 0x07) {
   VAR_17 = "max6696";
  } else






  if (VAR_19 == 0x01
   && (VAR_20 & 0x03) == 0x00
   && VAR_22 <= 0x07) {
   VAR_17 = "max6680";
  } else





  if (VAR_19 == 0x59
   && (VAR_20 & 0x3f) == 0x00
   && VAR_22 <= 0x07) {
   VAR_17 = "max6646";
  }
 } else
 if (VAR_16 == 0x4C
  && VAR_18 == 0x5C) {
  if ((VAR_20 & 0x2A) == 0x00
   && (VAR_21 & 0xF8) == 0x00) {
   if (VAR_19 == 0x01
    && VAR_22 <= 0x09) {
    VAR_17 = "w83l771";
   } else
   if ((VAR_19 & 0xFE) == 0x10
    && VAR_22 <= 0x08) {
    VAR_17 = "w83l771";
   }
  }
 } else
 if (VAR_16 >= 0x48 && VAR_16 <= 0x4F
  && VAR_18 == 0xA1) {
  if (VAR_19 == 0x00
   && (VAR_20 & 0x2A) == 0x00
   && (VAR_21 & 0xFE) == 0x00
   && VAR_22 <= 0x09) {
   VAR_17 = "sa56004";
  }
 } else
 if ((VAR_16 == 0x4C || VAR_16 == 0x4D)
  && VAR_18 == 0x47) {
  if (VAR_19 == 0x01
   && (VAR_20 & 0x3F) == 0x00
   && VAR_22 <= 0x08)
   VAR_17 = "g781";
 } else
 if (VAR_16 == 0x4C
  && VAR_18 == 0x55) {
  int VAR_26;

  VAR_26 = FUNC_3(VAR_13,
           VAR_12);

  if (VAR_19 == 0x00
   && (VAR_20 & 0x1B) == 0x00
   && VAR_22 <= 0x09
   && (VAR_26 & 0x0F) == 0x00)
   VAR_17 = "tmp451";
 }

 if (!VAR_17) {
  FUNC_0(&VAR_15->dev,
   "Unsupported chip at 0x%02x (man_id=0x%02X, "
   "chip_id=0x%02X)\n", VAR_16, VAR_18, VAR_19);
  return -VAR_0;
 }

 FUNC_4(VAR_14->type, VAR_17, VAR_4);

 return 0;
}
