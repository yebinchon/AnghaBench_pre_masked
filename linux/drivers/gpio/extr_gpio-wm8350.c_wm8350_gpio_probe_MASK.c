
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm8350_platform_data {int gpio_base; } ;
struct TYPE_6__ {int ngpio; int base; TYPE_2__* parent; } ;
struct wm8350_gpio_data {TYPE_1__ gpio_chip; struct wm8350* wm8350; } ;
struct wm8350 {int dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct wm8350* FUNC_1 (int ) ;
 struct wm8350_platform_data* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,struct wm8350_gpio_data*) ;
 struct wm8350_gpio_data* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct platform_device*,struct wm8350_gpio_data*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct wm8350 *VAR_4 = FUNC_1(VAR_3->dev.parent);
 struct wm8350_platform_data *VAR_5 = FUNC_2(VAR_4->dev);
 struct wm8350_gpio_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(&VAR_3->dev, sizeof(*VAR_6),
       VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->wm8350 = VAR_4;
 VAR_6->gpio_chip = VAR_2;
 VAR_6->gpio_chip.ngpio = 13;
 VAR_6->gpio_chip.parent = &VAR_3->dev;
 if (VAR_5 && VAR_5->gpio_base)
  VAR_6->gpio_chip.base = VAR_5->gpio_base;
 else
  VAR_6->gpio_chip.base = -1;

 VAR_7 = FUNC_3(&VAR_3->dev, &VAR_6->gpio_chip,
         VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_5(VAR_3, VAR_6);

 return VAR_7;
}
