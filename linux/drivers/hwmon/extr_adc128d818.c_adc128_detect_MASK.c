
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int adapter; } ;
struct i2c_board_info {int type; } ;


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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_12, struct i2c_board_info *VAR_13)
{
 int VAR_14, VAR_15;

 if (!FUNC_0(VAR_12->adapter,
         VAR_9 |
         VAR_10))
  return -VAR_8;

 VAR_14 = FUNC_1(VAR_12, VAR_5);
 VAR_15 = FUNC_1(VAR_12, VAR_4);
 if (VAR_14 != 0x01 || VAR_15 != 0x09)
  return -VAR_8;


 if (FUNC_1(VAR_12, VAR_1) & 0xf4)
  return -VAR_8;
 if (FUNC_1(VAR_12, VAR_3) & 0xfe)
  return -VAR_8;
 if (FUNC_1(VAR_12, VAR_6) & 0xfe)
  return -VAR_8;
 if (FUNC_1(VAR_12, VAR_7) & 0xfe)
  return -VAR_8;
 if (FUNC_1(VAR_12, VAR_2) & 0xf8)
  return -VAR_8;
 if (FUNC_1(VAR_12, VAR_0) & 0xfc)
  return -VAR_8;

 FUNC_2(VAR_13->type, "adc128d818", VAR_11);

 return 0;
}
