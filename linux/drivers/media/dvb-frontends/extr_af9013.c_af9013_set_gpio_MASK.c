
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct af9013_state {int regmap; struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct af9013_state *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1->client;
 int VAR_5;
 u8 VAR_6;
 u16 VAR_7;

 FUNC_0(&VAR_4->dev, "gpio %u, gpioval %02x\n", VAR_2, VAR_3);






 switch (VAR_2) {
 case 0:
 case 1:
  VAR_7 = 0xd735;
  break;
 case 2:
 case 3:
  VAR_7 = 0xd736;
  break;

 default:
  VAR_5 = -VAR_0;
  goto err;
 }

 switch (VAR_2) {
 case 0:
 case 2:
  VAR_6 = 0;
  break;
 case 1:
 case 3:
 default:
  VAR_6 = 4;
  break;
 }

 VAR_5 = FUNC_1(VAR_1->regmap, VAR_7, 0x0f << VAR_6,
     VAR_3 << VAR_6);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed %d\n", VAR_5);
 return VAR_5;
}
