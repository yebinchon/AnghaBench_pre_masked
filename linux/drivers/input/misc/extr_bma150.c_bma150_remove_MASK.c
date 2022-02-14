
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {scalar_t__ irq; int dev; } ;
struct bma150_data {int input_polled; int input; } ;


 int FUNC_0 (scalar_t__,struct bma150_data*) ;
 struct bma150_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bma150_data*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct bma150_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_6(&VAR_0->dev);

 if (VAR_0->irq > 0) {
  FUNC_0(VAR_0->irq, VAR_1);
  FUNC_3(VAR_1->input);
 } else {
  FUNC_4(VAR_1->input_polled);
  FUNC_2(VAR_1->input_polled);
 }

 FUNC_5(VAR_1);

 return 0;
}
