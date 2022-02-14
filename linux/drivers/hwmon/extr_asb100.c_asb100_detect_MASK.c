
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
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
    struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 int VAR_9, VAR_10;

 if (!FUNC_0(VAR_8, VAR_4)) {
  FUNC_3("detect failed, smbus byte data not supported!\n");
  return -VAR_3;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_0);
 VAR_10 = FUNC_1(VAR_6, VAR_1);


 if ((!(VAR_9 & 0x07)) &&

   (((!(VAR_9 & 0x80)) && (VAR_10 != 0x94)) ||

   ((VAR_9 & 0x80) && (VAR_10 != 0x06)))) {
  FUNC_3("detect failed, bad chip id 0x%02x!\n", VAR_10);
  return -VAR_3;
 }


 FUNC_2(VAR_6, VAR_0,
  (FUNC_1(VAR_6, VAR_0) & 0x78)
  | 0x80);


 VAR_9 = FUNC_1(VAR_6, VAR_2);
 VAR_10 = FUNC_1(VAR_6, VAR_1);

 if (VAR_9 != 0x31 || VAR_10 != 0x06)
  return -VAR_3;

 FUNC_4(VAR_7->type, "asb100", VAR_5);

 return 0;
}
