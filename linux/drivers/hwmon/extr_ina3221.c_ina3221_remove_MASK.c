
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina3221_data {int lock; int pm_dev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 struct ina3221_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct ina3221_data *VAR_2 = FUNC_0(&VAR_1->dev);
 int VAR_3;

 FUNC_2(VAR_2->pm_dev);
 FUNC_4(VAR_2->pm_dev);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(VAR_2->pm_dev);

 FUNC_1(&VAR_2->lock);

 return 0;
}
