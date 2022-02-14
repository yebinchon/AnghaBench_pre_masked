
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 int VAR_2;
 u8 VAR_3[4] = { 0x00, 0x0B, 0x00, 0x5A };

 VAR_2 = FUNC_1(VAR_1, VAR_0,
        sizeof(VAR_3), VAR_3);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "cannot set flash key: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
