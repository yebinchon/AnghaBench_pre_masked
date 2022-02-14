
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->dev, "resetting device now\n");

 VAR_3 = FUNC_3(VAR_2, VAR_0, 0);
 if (VAR_3) {
  FUNC_1(&VAR_2->dev, "reset failed\n");
  return VAR_3;
 }


 FUNC_2(VAR_1);

 return 0;
}
