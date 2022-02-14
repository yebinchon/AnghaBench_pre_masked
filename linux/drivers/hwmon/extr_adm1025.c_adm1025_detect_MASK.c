
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8,
     struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 const char *VAR_11;
 u8 VAR_12, VAR_13;

 if (!FUNC_1(VAR_10, VAR_6))
  return -VAR_5;


 if ((FUNC_2(VAR_8, VAR_1) & 0x80)
  || (FUNC_2(VAR_8, VAR_3) & 0xC0)
  || (FUNC_2(VAR_8, VAR_4) & 0xBC)) {
  FUNC_0(&VAR_10->dev, "ADM1025 detection failed at 0x%02x\n",
   VAR_8->addr);
  return -VAR_5;
 }


 VAR_13 = FUNC_2(VAR_8, VAR_0);
 if ((VAR_13 & 0xF0) != 0x20)
  return -VAR_5;

 VAR_12 = FUNC_2(VAR_8, VAR_2);
 if (VAR_12 == 0x41)
  VAR_11 = "adm1025";
 else if (VAR_12 == 0xA1 && VAR_8->addr != 0x2E)
  VAR_11 = "ne1619";
 else
  return -VAR_5;

 FUNC_3(VAR_9->type, VAR_11, VAR_7);

 return 0;
}
