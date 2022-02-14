
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (unsigned int,unsigned int) ;

int FUNC_3(void *VAR_0, u8 VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct i2c_client *VAR_4 = VAR_0;

 VAR_3 = FUNC_1(VAR_4, VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_4->dev, "Failed to reset device\n");
  return VAR_3;
 }
 FUNC_2(VAR_2, VAR_2 + 1000);

 return 0;
}
