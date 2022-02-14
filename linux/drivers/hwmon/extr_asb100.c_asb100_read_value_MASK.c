
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct asb100_data {int lock; struct i2c_client** lm75; } ;


 int VAR_0 ;
 struct asb100_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1, u16 VAR_2)
{
 struct asb100_data *VAR_3 = FUNC_0(VAR_1);
 struct i2c_client *VAR_4;
 int VAR_5, VAR_6;

 FUNC_4(&VAR_3->lock);

 VAR_6 = (VAR_2 >> 8) & 0x0f;
 if (VAR_6 > 2)

  FUNC_3(VAR_1, VAR_0, VAR_6);

 if (VAR_6 == 0 || VAR_6 > 2) {
  VAR_5 = FUNC_1(VAR_1, VAR_2 & 0xff);
 } else {

  VAR_4 = VAR_3->lm75[VAR_6 - 1];


  switch (VAR_2 & 0xff) {
  case 0x50:
   VAR_5 = FUNC_2(VAR_4, 0);
   break;
  case 0x52:
   VAR_5 = FUNC_1(VAR_4, 1);
   break;
  case 0x53:
   VAR_5 = FUNC_2(VAR_4, 2);
   break;
  case 0x55:
  default:
   VAR_5 = FUNC_2(VAR_4, 3);
   break;
  }
 }

 if (VAR_6 > 2)
  FUNC_3(VAR_1, VAR_0, 0);

 FUNC_5(&VAR_3->lock);

 return VAR_5;
}
