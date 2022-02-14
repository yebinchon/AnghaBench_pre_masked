
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int *,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
          u8 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (VAR_3) {
  FUNC_1(&VAR_1->dev, "Unable to read config register");
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2, 1);
 if (VAR_3 < 0) {
  FUNC_1(&VAR_1->dev, "Unable to read config register");
  return VAR_3;
 }
 FUNC_0(&VAR_1->dev, "Config register :%x\n", *VAR_2);

 return 0;
}
