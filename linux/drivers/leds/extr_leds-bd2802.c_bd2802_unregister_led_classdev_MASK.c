
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd2802_led {int cdev_led1r; int cdev_led1g; int cdev_led1b; int cdev_led2r; int cdev_led2g; int cdev_led2b; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bd2802_led *VAR_0)
{
 FUNC_0(&VAR_0->cdev_led2b);
 FUNC_0(&VAR_0->cdev_led2g);
 FUNC_0(&VAR_0->cdev_led2r);
 FUNC_0(&VAR_0->cdev_led1b);
 FUNC_0(&VAR_0->cdev_led1g);
 FUNC_0(&VAR_0->cdev_led1r);
}
