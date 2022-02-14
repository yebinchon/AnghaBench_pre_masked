
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8, struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 const char *VAR_15 = ((void*)0);

 if (!FUNC_0(VAR_10, VAR_1))
  return -VAR_0;


 if ((FUNC_2(VAR_8, VAR_3) & 0xc0)
  || (FUNC_2(VAR_8, VAR_4) & 0x80))
  return -VAR_0;






 VAR_13 = FUNC_2(VAR_8, VAR_7);
 VAR_14 = FUNC_2(VAR_8, VAR_6);
 if (VAR_13 == 0x01 && VAR_14 == 0x08) {

  if (FUNC_2(VAR_8, VAR_5) & 0xfe)
   return -VAR_0;

  VAR_15 = "lm96080";
 } else {

  for (VAR_11 = 0x2a; VAR_11 <= 0x3d; VAR_11++) {
   VAR_12 = FUNC_1(VAR_8, VAR_11);
   if ((FUNC_1(VAR_8, VAR_11 + 0x40) != VAR_12)
    || (FUNC_1(VAR_8, VAR_11 + 0x80) != VAR_12)
    || (FUNC_1(VAR_8, VAR_11 + 0xc0) != VAR_12))
    return -VAR_0;
  }

  VAR_15 = "lm80";
 }

 FUNC_3(VAR_9->type, VAR_15, VAR_2);

 return 0;
}
