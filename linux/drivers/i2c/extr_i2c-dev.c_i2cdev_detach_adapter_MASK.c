
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_dev {int cdev; } ;
struct i2c_adapter {int name; int nr; } ;
struct device {int * type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_dev* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct i2c_dev*) ;
 struct i2c_adapter* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, void *VAR_4)
{
 struct i2c_adapter *VAR_5;
 struct i2c_dev *VAR_6;

 if (VAR_3->type != &VAR_1)
  return 0;
 VAR_5 = FUNC_6(VAR_3);

 VAR_6 = FUNC_3(VAR_5->nr);
 if (!VAR_6)
  return 0;

 FUNC_1(&VAR_6->cdev);
 FUNC_5(VAR_6);
 FUNC_2(VAR_2, FUNC_0(VAR_0, VAR_5->nr));

 FUNC_4("i2c-dev: adapter [%s] unregistered\n", VAR_5->name);
 return 0;
}
