
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; int dev; } ;
struct ak8975_data {int eoc_irq; int eoc_gpio; int flags; int data_ready_queue; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int,int ,struct ak8975_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ak8975_data *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;
 int VAR_6;

 FUNC_5(&VAR_3->data_ready_queue);
 FUNC_0(0, &VAR_3->flags);
 if (VAR_4->irq)
  VAR_6 = VAR_4->irq;
 else
  VAR_6 = FUNC_4(VAR_3->eoc_gpio);

 VAR_5 = FUNC_3(&VAR_4->dev, VAR_6, VAR_2,
         VAR_1 | VAR_0,
         FUNC_2(&VAR_4->dev), VAR_3);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_4->dev,
   "irq %d request failed, (gpio %d): %d\n",
   VAR_6, VAR_3->eoc_gpio, VAR_5);
  return VAR_5;
 }

 VAR_3->eoc_irq = VAR_6;

 return VAR_5;
}
