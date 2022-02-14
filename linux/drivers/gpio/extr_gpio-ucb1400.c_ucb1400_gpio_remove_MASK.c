
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ngpio; } ;
struct ucb1400_gpio {int (* gpio_teardown ) (int *,int ) ;TYPE_1__ gc; } ;
struct platform_device {int dev; } ;


 struct ucb1400_gpio* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 int VAR_1 = 0;
 struct ucb1400_gpio *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 && VAR_2->gpio_teardown) {
  VAR_1 = VAR_2->gpio_teardown(&VAR_0->dev, VAR_2->gc.ngpio);
  if (VAR_1)
   return VAR_1;
 }

 return VAR_1;
}
