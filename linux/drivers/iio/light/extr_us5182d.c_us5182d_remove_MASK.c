
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 struct us5182d_data* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct us5182d_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct us5182d_data *VAR_2 = FUNC_2(FUNC_0(VAR_1));

 FUNC_1(FUNC_0(VAR_1));

 FUNC_3(&VAR_1->dev);
 FUNC_4(&VAR_1->dev);

 return FUNC_5(VAR_2, VAR_0);
}
