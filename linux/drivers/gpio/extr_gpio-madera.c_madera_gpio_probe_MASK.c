
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct madera_pdata {int gpio_base; } ;
struct TYPE_8__ {int base; int ngpio; int parent; } ;
struct madera_gpio {TYPE_1__ gpio_chip; struct madera* madera; } ;
struct madera {int type; struct madera_pdata pdata; } ;




 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 struct madera* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,struct madera_gpio*) ;
 struct madera_gpio* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ,int ) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_9)
{
 struct madera *VAR_10 = FUNC_2(VAR_9->dev.parent);
 struct madera_pdata *VAR_11 = &VAR_10->pdata;
 struct madera_gpio *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(&VAR_9->dev, sizeof(*VAR_12),
       VAR_7);
 if (!VAR_12)
  return -VAR_6;

 VAR_12->madera = VAR_10;


 VAR_12->gpio_chip = VAR_8;
 VAR_12->gpio_chip.parent = VAR_9->dev.parent;

 switch (VAR_10->type) {
 case 135:
  VAR_12->gpio_chip.ngpio = VAR_0;
  break;
 case 134:
  VAR_12->gpio_chip.ngpio = VAR_1;
  break;
 case 133:
 case 128:
  VAR_12->gpio_chip.ngpio = VAR_2;
  break;
 case 132:
 case 131:
  VAR_12->gpio_chip.ngpio = VAR_3;
  break;
 case 136:
 case 130:
 case 129:
  VAR_12->gpio_chip.ngpio = VAR_4;
  break;
 default:
  FUNC_1(&VAR_9->dev, "Unknown chip variant %d\n", VAR_10->type);
  return -VAR_5;
 }


 if (VAR_11->gpio_base)
  VAR_12->gpio_chip.base = VAR_11->gpio_base;
 else
  VAR_12->gpio_chip.base = -1;

 VAR_13 = FUNC_3(&VAR_9->dev,
         &VAR_12->gpio_chip,
         VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->dev, "Could not register gpiochip, %d\n", VAR_13);
  return VAR_13;
 }
 VAR_13 = FUNC_5(&VAR_12->gpio_chip, "madera-pinctrl",
         0, 0, VAR_12->gpio_chip.ngpio);
 if (VAR_13) {
  FUNC_0(&VAR_9->dev, "Failed to add pin range (%d)\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
