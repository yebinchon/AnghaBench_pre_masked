
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct lp8788_led_platform_data {scalar_t__ name; } ;
struct TYPE_4__ {scalar_t__ name; int brightness_set_blocking; int max_brightness; } ;
struct lp8788_led {TYPE_2__ led_dev; int lock; struct lp8788* lp; } ;
struct lp8788 {TYPE_1__* pdata; } ;
struct TYPE_3__ {struct lp8788_led_platform_data* led_pdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct lp8788* FUNC_1 (int ) ;
 struct lp8788_led* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_4 (struct lp8788_led*,struct lp8788_led_platform_data*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct lp8788 *VAR_6 = FUNC_1(VAR_5->dev.parent);
 struct lp8788_led_platform_data *VAR_7;
 struct lp8788_led *VAR_8;
 struct device *VAR_9 = &VAR_5->dev;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_9, sizeof(struct lp8788_led), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->lp = VAR_6;
 VAR_8->led_dev.max_brightness = VAR_3;
 VAR_8->led_dev.brightness_set_blocking = VAR_4;

 VAR_7 = VAR_6->pdata ? VAR_6->pdata->led_pdata : ((void*)0);

 if (!VAR_7 || !VAR_7->name)
  VAR_8->led_dev.name = VAR_0;
 else
  VAR_8->led_dev.name = VAR_7->name;

 FUNC_5(&VAR_8->lock);

 VAR_10 = FUNC_4(VAR_8, VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_9, "led init device err: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_9, &VAR_8->led_dev);
 if (VAR_10) {
  FUNC_0(VAR_9, "led register err: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
