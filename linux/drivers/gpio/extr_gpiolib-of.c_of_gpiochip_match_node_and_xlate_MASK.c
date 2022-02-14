
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_phandle_args {scalar_t__ np; } ;
struct gpio_chip {scalar_t__ (* of_xlate ) (struct gpio_chip*,struct of_phandle_args*,int *) ;TYPE_2__* gpiodev; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (struct gpio_chip*,struct of_phandle_args*,int *) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, void *VAR_1)
{
 struct of_phandle_args *VAR_2 = VAR_1;

 return VAR_0->gpiodev->dev.of_node == VAR_2->np &&
    VAR_0->of_xlate &&
    VAR_0->of_xlate(VAR_0, VAR_2, ((void*)0)) >= 0;
}
