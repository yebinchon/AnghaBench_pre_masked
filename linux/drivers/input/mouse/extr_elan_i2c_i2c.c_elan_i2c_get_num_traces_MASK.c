
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3)
{
 int VAR_4;
 u8 VAR_5[3];

 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_5);
 if (VAR_4) {
  FUNC_0(&VAR_1->dev, "failed to get trace info: %d\n", VAR_4);
  return VAR_4;
 }

 *VAR_2 = VAR_5[0];
 *VAR_3 = VAR_5[1];

 return 0;
}
