
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, u8 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev,
   "couldn't send request. Returned %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->dev,
   "couldn't read register. Returned %d\n", VAR_2);
  return VAR_2;
 }

 return VAR_2;
}
