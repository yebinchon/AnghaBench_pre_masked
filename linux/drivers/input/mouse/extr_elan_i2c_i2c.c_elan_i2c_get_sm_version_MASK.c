
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i2c_client*,int*) ;
 int FUNC_3 (struct i2c_client*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
       u16 *VAR_4, u8 *VAR_5,
       u8 *VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 u8 VAR_9[3];

 VAR_7 = FUNC_2(VAR_3, &VAR_8);
 if (VAR_7) {
  FUNC_1(&VAR_3->dev, "failed to get pattern version\n");
  return VAR_7;
 }

 if (VAR_8 == 0x01) {
  VAR_7 = FUNC_3(VAR_3, VAR_0, VAR_9);
  if (VAR_7) {
   FUNC_1(&VAR_3->dev, "failed to get ic type: %d\n",
    VAR_7);
   return VAR_7;
  }
  *VAR_4 = FUNC_0((__be16 *)VAR_9);

  VAR_7 = FUNC_3(VAR_3, VAR_1,
       VAR_9);
  if (VAR_7) {
   FUNC_1(&VAR_3->dev, "failed to get SM version: %d\n",
    VAR_7);
   return VAR_7;
  }
  *VAR_5 = VAR_9[1];
  *VAR_6 = VAR_9[0] & 0x10;
 } else {
  VAR_7 = FUNC_3(VAR_3, VAR_2, VAR_9);
  if (VAR_7) {
   FUNC_1(&VAR_3->dev, "failed to get SM version: %d\n",
    VAR_7);
   return VAR_7;
  }
  *VAR_5 = VAR_9[0];
  *VAR_4 = VAR_9[1];

  VAR_7 = FUNC_3(VAR_3, VAR_1,
       VAR_9);
  if (VAR_7) {
   FUNC_1(&VAR_3->dev, "failed to get SM version: %d\n",
    VAR_7);
   return VAR_7;
  }
  *VAR_6 = VAR_9[0] & 0x10;
 }

 return 0;
}
