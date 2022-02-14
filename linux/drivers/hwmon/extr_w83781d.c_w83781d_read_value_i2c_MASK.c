
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83781d_data {struct i2c_client** lm75; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct w83781d_data *VAR_1, u16 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_1->client;
 int VAR_4, VAR_5;
 struct i2c_client *VAR_6;

 VAR_5 = (VAR_2 >> 8) & 0x0f;
 if (VAR_5 > 2)

  FUNC_2(VAR_3, VAR_0,
       VAR_5);
 if (VAR_5 == 0 || VAR_5 > 2) {
  VAR_4 = FUNC_0(VAR_3, VAR_2 & 0xff);
 } else {

  VAR_6 = VAR_1->lm75[VAR_5 - 1];

  switch (VAR_2 & 0xff) {
  case 0x50:
   VAR_4 = FUNC_1(VAR_6, 0);
   break;
  case 0x52:
   VAR_4 = FUNC_0(VAR_6, 1);
   break;
  case 0x53:
   VAR_4 = FUNC_1(VAR_6, 2);
   break;
  case 0x55:
  default:
   VAR_4 = FUNC_1(VAR_6, 3);
   break;
  }
 }
 if (VAR_5 > 2)
  FUNC_2(VAR_3, VAR_0, 0);

 return VAR_4;
}
