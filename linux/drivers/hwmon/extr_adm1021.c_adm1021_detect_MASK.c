
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_8,
     struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 const char *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 if (!FUNC_4(VAR_10, VAR_6)) {
  FUNC_6("detect failed, smbus byte data not supported!\n");
  return -VAR_5;
 }

 VAR_13 = FUNC_5(VAR_8, VAR_4);
 VAR_12 = FUNC_5(VAR_8,
          VAR_1);
 VAR_14 = FUNC_5(VAR_8, VAR_0);


 if ((VAR_13 & 0x03) || (VAR_14 & 0x3F) || (VAR_12 & 0xF8)) {
  FUNC_6("detect failed, chip not detected!\n");
  return -VAR_5;
 }


 VAR_15 = FUNC_5(VAR_8, VAR_3);
 VAR_16 = FUNC_5(VAR_8, VAR_2);

 if (VAR_15 < 0 || VAR_16 < 0)
  return -VAR_5;

 if (VAR_15 == 0x4d && VAR_16 == 0x01)
  VAR_11 = "max1617a";
 else if (VAR_15 == 0x41) {
  if ((VAR_16 & 0xF0) == 0x30)
   VAR_11 = "adm1023";
  else if ((VAR_16 & 0xF0) == 0x00)
   VAR_11 = "adm1021";
  else
   return -VAR_5;
 } else if (VAR_15 == 0x49)
  VAR_11 = "thmc10";
 else if (VAR_15 == 0x23)
  VAR_11 = "gl523sm";
 else if (VAR_15 == 0x54)
  VAR_11 = "mc1066";
 else {
  int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;



  VAR_21 = FUNC_5(VAR_8, FUNC_1(0));
  VAR_22 = FUNC_5(VAR_8, FUNC_1(1));


  if (VAR_21 < 0 || VAR_22 < 0)
   return -VAR_5;

  VAR_17 = FUNC_5(VAR_8, FUNC_0(0));
  VAR_18 = FUNC_5(VAR_8, FUNC_0(1));
  VAR_19 = FUNC_5(VAR_8, FUNC_2(0));
  VAR_20 = FUNC_5(VAR_8, FUNC_2(1));





  if ((s8)VAR_17 < 0 || (s8)VAR_18 < 0 || (s8)VAR_19 < 0 || (s8)VAR_20 < 0)
   return -VAR_5;


  if (VAR_17 == VAR_18 && VAR_17 == VAR_19 && VAR_17 == VAR_20 && VAR_17 == VAR_21
      && VAR_17 == VAR_22)
   return -VAR_5;





  if (VAR_12 == 0x00
      && (VAR_14 & 0x7F) == 0x00
      && (VAR_13 & 0xAB) == 0x00) {
   VAR_11 = "lm84";
  } else {

   if ((s8)VAR_21 > VAR_19 || (s8)VAR_22 > VAR_20)
    return -VAR_5;
   VAR_11 = "max1617";
  }
 }

 FUNC_6("Detected chip %s at adapter %d, address 0x%02x.\n",
   VAR_11, FUNC_3(VAR_10), VAR_8->addr);
 FUNC_7(VAR_9->type, VAR_11, VAR_7);

 return 0;
}
