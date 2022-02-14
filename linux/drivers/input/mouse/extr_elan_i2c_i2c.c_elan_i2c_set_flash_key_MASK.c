
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0,
       VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "cannot set flash key: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
