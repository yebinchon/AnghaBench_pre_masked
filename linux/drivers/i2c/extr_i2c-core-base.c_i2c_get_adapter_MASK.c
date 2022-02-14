
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct i2c_adapter* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

struct i2c_adapter *FUNC_5(int VAR_2)
{
 struct i2c_adapter *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_1(&VAR_1, VAR_2);
 if (!VAR_3)
  goto exit;

 if (FUNC_4(VAR_3->owner))
  FUNC_0(&VAR_3->dev);
 else
  VAR_3 = ((void*)0);

 exit:
 FUNC_3(&VAR_0);
 return VAR_3;
}
