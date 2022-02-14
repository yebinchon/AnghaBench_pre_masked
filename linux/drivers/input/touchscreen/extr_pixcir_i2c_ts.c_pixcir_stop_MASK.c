
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pixcir_i2c_ts_data {int running; scalar_t__ gpio_enable; TYPE_1__* client; } ;
struct TYPE_2__ {int irq; int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pixcir_i2c_ts_data*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pixcir_i2c_ts_data *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_3(VAR_0, 0);
 if (VAR_1) {
  FUNC_0(&VAR_0->client->dev,
   "Failed to disable interrupt generation: %d\n",
   VAR_1);
  return VAR_1;
 }


 VAR_0->running = 0;
 FUNC_2();


 FUNC_4(VAR_0->client->irq);

 if (VAR_0->gpio_enable)
  FUNC_1(VAR_0->gpio_enable, 0);

 return 0;
}
