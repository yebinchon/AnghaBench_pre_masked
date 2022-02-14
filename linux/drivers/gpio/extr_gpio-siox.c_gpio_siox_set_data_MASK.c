
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct siox_device {int dev; } ;
struct gpio_siox_ddata {int lock; int * setdata; } ;


 struct gpio_siox_ddata* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct siox_device *VAR_0, u8 VAR_1, u8 VAR_2[])
{
 struct gpio_siox_ddata *VAR_3 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_3->lock);
 VAR_2[0] = VAR_3->setdata[0];
 FUNC_2(&VAR_3->lock);

 return 0;
}
