
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int owner; } ;
struct i2c_dev {TYPE_1__ cdev; struct i2c_dev* dev; } ;
struct i2c_adapter {int nr; int name; int dev; } ;
struct device {int * type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_dev*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_dev*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 struct i2c_dev* FUNC_6 (int ,int *,int ,int *,char*,int ) ;
 struct i2c_dev* FUNC_7 (struct i2c_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct i2c_dev*) ;
 struct i2c_adapter* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_5, void *VAR_6)
{
 struct i2c_adapter *VAR_7;
 struct i2c_dev *VAR_8;
 int VAR_9;

 if (VAR_5->type != &VAR_2)
  return 0;
 VAR_7 = FUNC_10(VAR_5);

 VAR_8 = FUNC_7(VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_2(VAR_8);

 FUNC_5(&VAR_8->cdev, &VAR_4);
 VAR_8->cdev.owner = VAR_1;
 VAR_9 = FUNC_3(&VAR_8->cdev, FUNC_1(VAR_0, VAR_7->nr), 1);
 if (VAR_9)
  goto error_cdev;


 VAR_8->dev = FUNC_6(VAR_3, &VAR_7->dev,
         FUNC_1(VAR_0, VAR_7->nr), ((void*)0),
         "i2c-%d", VAR_7->nr);
 if (FUNC_0(VAR_8->dev)) {
  VAR_9 = FUNC_2(VAR_8->dev);
  goto error;
 }

 FUNC_8("i2c-dev: adapter [%s] registered as minor %d\n",
   VAR_7->name, VAR_7->nr);
 return 0;
error:
 FUNC_4(&VAR_8->cdev);
error_cdev:
 FUNC_9(VAR_8);
 return VAR_9;
}
