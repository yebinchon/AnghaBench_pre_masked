
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct i2c_board_info {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_5,
   struct i2c_board_info *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_4);
 if (VAR_7 != 0x5d)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_2);
 switch (VAR_7) {
 case 0x20:
  FUNC_1(VAR_6->type, "emc1402", VAR_1);
  break;
 case 0x21:
  FUNC_1(VAR_6->type, "emc1403", VAR_1);
  break;
 case 0x22:
  FUNC_1(VAR_6->type, "emc1422", VAR_1);
  break;
 case 0x23:
  FUNC_1(VAR_6->type, "emc1423", VAR_1);
  break;
 case 0x25:
  FUNC_1(VAR_6->type, "emc1404", VAR_1);
  break;
 case 0x27:
  FUNC_1(VAR_6->type, "emc1424", VAR_1);
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_3);
 if (VAR_7 < 0x01 || VAR_7 > 0x04)
  return -VAR_0;

 return 0;
}
