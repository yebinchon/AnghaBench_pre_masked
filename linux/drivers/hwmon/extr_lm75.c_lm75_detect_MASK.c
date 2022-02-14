
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
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_5,
         struct i2c_board_info *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;
 int VAR_8;
 int VAR_9, VAR_10, VAR_11;
 bool VAR_12 = 0;

 if (!FUNC_0(VAR_7, VAR_1 |
         VAR_2))
  return -VAR_0;
 VAR_9 = FUNC_1(VAR_5, 1);
 if (VAR_9 & 0xe0)
  return -VAR_0;


 if (FUNC_1(VAR_5, 7) == VAR_4) {


  if (FUNC_1(VAR_5, 4) != 0xff
   || FUNC_1(VAR_5, 5) != 0xff
   || FUNC_1(VAR_5, 6) != 0xff)
   return -VAR_0;
  VAR_12 = 1;
  VAR_10 = FUNC_1(VAR_5, 2);
  VAR_11 = FUNC_1(VAR_5, 3);
 } else {

  VAR_10 = FUNC_1(VAR_5, 2);
  if (FUNC_1(VAR_5, 4) != VAR_10
   || FUNC_1(VAR_5, 5) != VAR_10
   || FUNC_1(VAR_5, 6) != VAR_10
   || FUNC_1(VAR_5, 7) != VAR_10)
   return -VAR_0;
  VAR_11 = FUNC_1(VAR_5, 3);
  if (FUNC_1(VAR_5, 4) != VAR_11
   || FUNC_1(VAR_5, 5) != VAR_11
   || FUNC_1(VAR_5, 6) != VAR_11
   || FUNC_1(VAR_5, 7) != VAR_11)
   return -VAR_0;
 }




 if (VAR_10 == 0 && VAR_11 == 0)
  return -VAR_0;


 for (VAR_8 = 8; VAR_8 <= 248; VAR_8 += 40) {
  if (FUNC_1(VAR_5, VAR_8 + 1) != VAR_9
   || FUNC_1(VAR_5, VAR_8 + 2) != VAR_10
   || FUNC_1(VAR_5, VAR_8 + 3) != VAR_11)
   return -VAR_0;
  if (VAR_12 && FUNC_1(VAR_5, VAR_8 + 7)
    != VAR_4)
   return -VAR_0;
 }

 FUNC_2(VAR_6->type, VAR_12 ? "lm75a" : "lm75", VAR_3);

 return 0;
}
