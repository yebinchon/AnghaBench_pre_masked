
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {unsigned short addr; struct i2c_adapter* adapter; } ;
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
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8,
     struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 int VAR_11, VAR_12;
 unsigned short VAR_13 = VAR_8->addr;

 if (!FUNC_0(VAR_10, VAR_1))
  return -VAR_0;

 if (FUNC_2(VAR_8, VAR_5) & 0x80)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_8, VAR_3);
 VAR_12 = FUNC_2(VAR_8, VAR_4);

 if (!(VAR_11 & 0x07)) {
  if ((!(VAR_11 & 0x80) && VAR_12 != 0xa3) ||
      ((VAR_11 & 0x80) && VAR_12 != 0x5c)) {
   return -VAR_0;
  }
 }




 if (FUNC_2(VAR_8, VAR_6) != VAR_13)
  return -VAR_0;


 VAR_11 = FUNC_2(VAR_8, VAR_3) & 0x78;
 FUNC_3(VAR_8, VAR_3, VAR_11 | 0x80);


 VAR_11 = FUNC_2(VAR_8, VAR_7);
 VAR_12 = FUNC_2(VAR_8, VAR_4);
 if (VAR_11 != 0x71 || VAR_12 != 0x5c)
  return -VAR_0;

 FUNC_1(VAR_9->type, "w83791d", VAR_2);

 return 0;
}
