
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct bcma_drv_cc {int dummy; } ;


 int FUNC_0 (struct bcma_drv_cc*,int,int) ;
 int FUNC_1 (struct bcma_drv_cc*,int,int) ;
 struct bcma_drv_cc* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1,
          int VAR_2)
{
 struct bcma_drv_cc *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_3, 1 << VAR_1, 1 << VAR_1);
 FUNC_0(VAR_3, 1 << VAR_1, VAR_2 ? 1 << VAR_1 : 0);
 return 0;
}
