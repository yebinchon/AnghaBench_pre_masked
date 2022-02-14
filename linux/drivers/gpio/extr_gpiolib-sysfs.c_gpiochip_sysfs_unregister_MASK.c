
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_device {struct gpio_desc* descs; int * mockdev; struct gpio_chip* chip; } ;
struct gpio_desc {int flags; } ;
struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct gpio_device *VAR_2)
{
 struct gpio_desc *VAR_3;
 struct gpio_chip *VAR_4 = VAR_2->chip;
 unsigned int VAR_5;

 if (!VAR_2->mockdev)
  return;

 FUNC_0(VAR_2->mockdev);


 FUNC_2(&VAR_1);
 VAR_2->mockdev = ((void*)0);
 FUNC_3(&VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_4->ngpio; VAR_5++) {
  VAR_3 = &VAR_2->descs[VAR_5];
  if (FUNC_4(VAR_0, &VAR_3->flags))
   FUNC_1(VAR_3);
 }
}
