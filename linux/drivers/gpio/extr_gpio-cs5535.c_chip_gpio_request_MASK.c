
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct cs5535_gpio_chip {int lock; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cs5535_gpio_chip*,unsigned int,int ) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 struct cs5535_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_5, unsigned VAR_6)
{
 struct cs5535_gpio_chip *VAR_7 = FUNC_2(VAR_5);
 unsigned long VAR_8;

 FUNC_3(&VAR_7->lock, VAR_8);


 if ((VAR_4 & (1 << VAR_6)) == 0) {
  FUNC_1(&VAR_7->pdev->dev,
   "pin %u is not available (check mask)\n", VAR_6);
  FUNC_4(&VAR_7->lock, VAR_8);
  return -VAR_0;
 }


 FUNC_0(VAR_7, VAR_6, VAR_2);
 FUNC_0(VAR_7, VAR_6, VAR_3);


 FUNC_0(VAR_7, VAR_6, VAR_1);

 FUNC_4(&VAR_7->lock, VAR_8);

 return 0;
}
