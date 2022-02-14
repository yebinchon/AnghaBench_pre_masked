
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct arizona_pdata {int gpio_base; } ;
struct TYPE_9__ {int ngpio; int base; int of_node; TYPE_3__* parent; } ;
struct arizona_gpio {TYPE_2__ gpio_chip; struct arizona* arizona; } ;
struct arizona {int type; TYPE_1__* dev; struct arizona_pdata pdata; } ;
struct TYPE_8__ {int of_node; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (TYPE_3__*,char*,int) ;
 struct arizona* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,struct arizona_gpio*) ;
 struct arizona_gpio* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct arizona *VAR_5 = FUNC_1(VAR_4->dev.parent);
 struct arizona_pdata *VAR_6 = &VAR_5->pdata;
 struct arizona_gpio *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_4->dev, sizeof(*VAR_7),
        VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->arizona = VAR_5;
 VAR_7->gpio_chip = VAR_3;
 VAR_7->gpio_chip.parent = &VAR_4->dev;




 switch (VAR_5->type) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 134:
  VAR_7->gpio_chip.ngpio = 5;
  break;
 case 133:
 case 135:
  VAR_7->gpio_chip.ngpio = 2;
  break;
 default:
  FUNC_0(&VAR_4->dev, "Unknown chip variant %d\n",
   VAR_5->type);
  return -VAR_0;
 }

 if (VAR_6->gpio_base)
  VAR_7->gpio_chip.base = VAR_6->gpio_base;
 else
  VAR_7->gpio_chip.base = -1;

 FUNC_4(&VAR_4->dev);

 VAR_8 = FUNC_2(&VAR_4->dev, &VAR_7->gpio_chip,
         VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->dev, "Could not register gpiochip, %d\n",
   VAR_8);
  return VAR_8;
 }

 return 0;
}
