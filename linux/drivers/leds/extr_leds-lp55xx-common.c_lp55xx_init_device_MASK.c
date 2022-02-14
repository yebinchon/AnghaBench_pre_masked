
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_platform_data {int enable_gpio; } ;
struct lp55xx_device_config {int dummy; } ;
struct lp55xx_chip {struct lp55xx_device_config* cfg; struct lp55xx_platform_data* pdata; TYPE_1__* cl; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct lp55xx_chip*) ;
 int FUNC_6 (struct lp55xx_chip*) ;
 int FUNC_7 (struct lp55xx_chip*) ;
 int FUNC_8 (struct lp55xx_chip*) ;
 int FUNC_9 (int,int) ;

int FUNC_10(struct lp55xx_chip *VAR_2)
{
 struct lp55xx_platform_data *VAR_3;
 struct lp55xx_device_config *VAR_4;
 struct device *VAR_5 = &VAR_2->cl->dev;
 int VAR_6 = 0;

 FUNC_0(!VAR_2);

 VAR_3 = VAR_2->pdata;
 VAR_4 = VAR_2->cfg;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 if (FUNC_3(VAR_3->enable_gpio)) {
  VAR_6 = FUNC_2(VAR_5, VAR_3->enable_gpio,
         VAR_1, "lp5523_enable");
  if (VAR_6 < 0) {
   FUNC_1(VAR_5, "could not acquire enable gpio (err=%d)\n",
    VAR_6);
   goto err;
  }

  FUNC_4(VAR_3->enable_gpio, 0);
  FUNC_9(1000, 2000);
  FUNC_4(VAR_3->enable_gpio, 1);
  FUNC_9(1000, 2000);
 }

 FUNC_8(VAR_2);





 FUNC_9(10000, 20000);

 VAR_6 = FUNC_6(VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_5, "device detection err: %d\n", VAR_6);
  goto err;
 }


 VAR_6 = FUNC_7(VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_5, "post init device err: %d\n", VAR_6);
  goto err_post_init;
 }

 return 0;

err_post_init:
 FUNC_5(VAR_2);
err:
 return VAR_6;
}
