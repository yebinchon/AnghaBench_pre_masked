
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pixcir_i2c_ts_data {int running; scalar_t__ gpio_enable; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct pixcir_i2c_ts_data*,int) ;
 int FUNC_5 (struct pixcir_i2c_ts_data*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pixcir_i2c_ts_data *VAR_1)
{
 struct device *VAR_2 = &VAR_1->client->dev;
 int VAR_3;

 if (VAR_1->gpio_enable) {
  FUNC_1(VAR_1->gpio_enable, 1);
  FUNC_3(100);
 }


 VAR_3 = FUNC_5(VAR_1, VAR_0, 0);
 if (VAR_3) {
  FUNC_0(VAR_2, "Failed to set interrupt mode: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_1->running = 1;
 FUNC_2();


 VAR_3 = FUNC_4(VAR_1, 1);
 if (VAR_3) {
  FUNC_0(VAR_2, "Failed to enable interrupt generation: %d\n",
   VAR_3);
  return VAR_3;
 }

 return 0;
}
