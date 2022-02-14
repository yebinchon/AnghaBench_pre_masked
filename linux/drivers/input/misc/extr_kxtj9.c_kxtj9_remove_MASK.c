
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* exit ) () ;} ;
struct kxtj9_data {TYPE_2__ pdata; int input_dev; } ;
struct TYPE_3__ {int kobj; } ;
struct i2c_client {scalar_t__ irq; TYPE_1__ dev; } ;


 int FUNC_0 (scalar_t__,struct kxtj9_data*) ;
 struct kxtj9_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kxtj9_data*) ;
 int VAR_0 ;
 int FUNC_4 (struct kxtj9_data*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct kxtj9_data *VAR_2 = FUNC_1(VAR_1);

 if (VAR_1->irq) {
  FUNC_6(&VAR_1->dev.kobj, &VAR_0);
  FUNC_0(VAR_1->irq, VAR_2);
  FUNC_2(VAR_2->input_dev);
 } else {
  FUNC_4(VAR_2);
 }

 if (VAR_2->pdata.exit)
  VAR_2->pdata.exit();

 FUNC_3(VAR_2);

 return 0;
}
