
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm8994_pdata {int gpio_base; } ;
struct TYPE_6__ {int base; TYPE_2__* parent; int ngpio; } ;
struct wm8994_gpio {TYPE_1__ gpio_chip; struct wm8994* wm8994; } ;
struct wm8994 {int dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct wm8994* FUNC_1 (int ) ;
 struct wm8994_pdata* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,struct wm8994_gpio*) ;
 struct wm8994_gpio* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct platform_device*,struct wm8994_gpio*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct wm8994 *VAR_5 = FUNC_1(VAR_4->dev.parent);
 struct wm8994_pdata *VAR_6 = FUNC_2(VAR_5->dev);
 struct wm8994_gpio *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(&VAR_4->dev, sizeof(*VAR_7),
       VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->wm8994 = VAR_5;
 VAR_7->gpio_chip = VAR_3;
 VAR_7->gpio_chip.ngpio = VAR_2;
 VAR_7->gpio_chip.parent = &VAR_4->dev;
 if (VAR_6 && VAR_6->gpio_base)
  VAR_7->gpio_chip.base = VAR_6->gpio_base;
 else
  VAR_7->gpio_chip.base = -1;

 VAR_8 = FUNC_3(&VAR_4->dev, &VAR_7->gpio_chip,
         VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->dev, "Could not register gpiochip, %d\n",
   VAR_8);
  return VAR_8;
 }

 FUNC_5(VAR_4, VAR_7);

 return VAR_8;
}
