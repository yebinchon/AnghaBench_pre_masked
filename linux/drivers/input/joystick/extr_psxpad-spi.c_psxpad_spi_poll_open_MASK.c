
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psxpad {TYPE_1__* spi; } ;
struct input_polled_dev {struct psxpad* private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct input_polled_dev *VAR_0)
{
 struct psxpad *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->spi->dev);
}
