
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_device {unsigned int ngpio; int dev; int chrdev; struct gpio_desc* descs; int * data; int * chip; } ;
struct gpio_desc {int flags; } ;
struct gpio_chip {struct gpio_device* gpiodev; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (struct gpio_chip*) ;
 int FUNC_6 (struct gpio_chip*) ;
 int FUNC_7 (struct gpio_device*) ;
 int FUNC_8 (struct gpio_chip*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ,int *) ;

void FUNC_13(struct gpio_chip *VAR_2)
{
 struct gpio_device *VAR_3 = VAR_2->gpiodev;
 struct gpio_desc *VAR_4;
 unsigned long VAR_5;
 unsigned VAR_6;
 bool VAR_7 = 0;


 FUNC_7(VAR_3);
 FUNC_3(VAR_2);

 VAR_3->chip = ((void*)0);
 FUNC_5(VAR_2);
 FUNC_0(VAR_2);
 FUNC_6(VAR_2);
 FUNC_8(VAR_2);
 FUNC_4(VAR_2);




 VAR_3->data = ((void*)0);

 FUNC_10(&VAR_1, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_3->ngpio; VAR_6++) {
  VAR_4 = &VAR_3->descs[VAR_6];
  if (FUNC_12(VAR_0, &VAR_4->flags))
   VAR_7 = 1;
 }
 FUNC_11(&VAR_1, VAR_5);

 if (VAR_7)
  FUNC_2(&VAR_3->dev,
    "REMOVING GPIOCHIP WITH GPIOS STILL REQUESTED\n");







 FUNC_1(&VAR_3->chrdev, &VAR_3->dev);
 FUNC_9(&VAR_3->dev);
}
