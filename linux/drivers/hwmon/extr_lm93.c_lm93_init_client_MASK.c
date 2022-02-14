
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_8)
{
 int VAR_9;
 u8 VAR_10;


 VAR_10 = FUNC_1(VAR_8, VAR_1);
 FUNC_2(VAR_8, VAR_1,
   VAR_10 | (VAR_7 ? 0x03 : 0x00));

 if (VAR_5) {

  VAR_10 = FUNC_1(VAR_8, VAR_0);
  FUNC_2(VAR_8, VAR_0, VAR_10 | 0x08);


  VAR_10 = FUNC_1(VAR_8, VAR_4);
  FUNC_2(VAR_8, VAR_4, VAR_10 | 0x02);


  FUNC_2(VAR_8, VAR_3, 0);


  VAR_10 = FUNC_1(VAR_8, VAR_2);
  VAR_10 &= ~0x03;
  VAR_10 &= ~(VAR_6[0] ? 0x10 : 0);
  VAR_10 &= ~(VAR_6[1] ? 0x20 : 0);
  FUNC_2(VAR_8, VAR_2, VAR_10);
 }


 VAR_10 = FUNC_1(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_0, VAR_10 | 0x01);


 for (VAR_9 = 0; VAR_9 < 20; VAR_9++) {
  FUNC_3(10);
  if ((FUNC_1(VAR_8, VAR_0) & 0x80) == 0x80)
   return;
 }

 FUNC_0(&VAR_8->dev,
   "timed out waiting for sensor chip to signal ready!\n");
}
