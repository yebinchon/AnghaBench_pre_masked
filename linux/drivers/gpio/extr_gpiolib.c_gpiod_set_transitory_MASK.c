
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {TYPE_1__* gdev; int flags; } ;
struct gpio_chip {int (* set_config ) (struct gpio_chip*,int,unsigned long) ;} ;
struct TYPE_2__ {int dev; struct gpio_chip* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct gpio_desc*) ;
 unsigned long FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct gpio_chip*,int,unsigned long) ;

int FUNC_7(struct gpio_desc *VAR_3, bool VAR_4)
{
 struct gpio_chip *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_3);




 if (VAR_4)
  FUNC_5(VAR_1, &VAR_3->flags);
 else
  FUNC_1(VAR_1, &VAR_3->flags);


 VAR_5 = VAR_3->gdev->chip;
 if (!VAR_5->set_config)
  return 0;

 VAR_6 = FUNC_4(VAR_2,
       !VAR_4);
 VAR_7 = FUNC_3(VAR_3);
 VAR_8 = VAR_5->set_config(VAR_5, VAR_7, VAR_6);
 if (VAR_8 == -VAR_0) {
  FUNC_2(&VAR_3->gdev->dev, "Persistence not supported for GPIO %d\n",
    VAR_7);
  return 0;
 }

 return VAR_8;
}
