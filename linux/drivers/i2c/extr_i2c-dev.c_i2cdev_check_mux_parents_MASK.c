
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; } ;


 int FUNC_0 (int *,int*,int ) ;
 struct i2c_adapter* FUNC_1 (struct i2c_adapter*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1, int VAR_2)
{
 struct i2c_adapter *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1->dev, &VAR_2, VAR_0);
 if (!VAR_4 && VAR_3)
  VAR_4 = FUNC_2(VAR_3, VAR_2);

 return VAR_4;
}
