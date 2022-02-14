
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client*,int ,int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 u8 VAR_4;

 while (VAR_2++ < 2) {
  VAR_3 = FUNC_1(VAR_1, VAR_0,
     &VAR_4, 1);
  if (!VAR_3)
   return 0;

  FUNC_0(&VAR_1->dev, "i2c test failed attempt %d: %d\n",
   VAR_2, VAR_3);
  FUNC_2(20);
 }

 return VAR_3;
}
