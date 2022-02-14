
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wm831x_pdata {int gpio_base; } ;
struct TYPE_8__ {int base; int of_node; TYPE_3__* parent; int ngpio; } ;
struct wm831x_gpio {TYPE_2__ gpio_chip; struct wm831x* wm831x; } ;
struct wm831x {TYPE_1__* dev; int num_gpio; struct wm831x_pdata pdata; } ;
struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_7__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 struct wm831x* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,struct wm831x_gpio*) ;
 struct wm831x_gpio* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct wm831x_gpio*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct wm831x *VAR_4 = FUNC_1(VAR_3->dev.parent);
 struct wm831x_pdata *VAR_5 = &VAR_4->pdata;
 struct wm831x_gpio *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(&VAR_3->dev, sizeof(*VAR_6),
       VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->wm831x = VAR_4;
 VAR_6->gpio_chip = VAR_2;
 VAR_6->gpio_chip.ngpio = VAR_4->num_gpio;
 VAR_6->gpio_chip.parent = &VAR_3->dev;
 if (VAR_5 && VAR_5->gpio_base)
  VAR_6->gpio_chip.base = VAR_5->gpio_base;
 else
  VAR_6->gpio_chip.base = -1;




 VAR_7 = FUNC_2(&VAR_3->dev, &VAR_6->gpio_chip,
         VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_4(VAR_3, VAR_6);

 return VAR_7;
}
