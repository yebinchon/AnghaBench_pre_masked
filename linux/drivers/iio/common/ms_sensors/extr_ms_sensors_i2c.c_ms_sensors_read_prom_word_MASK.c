
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int) ;

int FUNC_2(void *VAR_0, int VAR_1, u16 *VAR_2)
{
 int VAR_3;
 struct i2c_client *VAR_4 = VAR_0;

 VAR_3 = FUNC_1(VAR_4, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_4->dev, "Failed to read prom word\n");
  return VAR_3;
 }
 *VAR_2 = VAR_3;

 return 0;
}
