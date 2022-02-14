
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct twl6040 {int dummy; } ;
struct TYPE_6__ {struct device* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device {int of_node; } ;
struct TYPE_5__ {int base; int ngpio; int of_node; TYPE_2__* parent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct twl6040* FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (struct twl6040*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev.parent;
 struct twl6040 *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_1.base = -1;

 if (FUNC_3(VAR_4) < VAR_0)
  VAR_1.ngpio = 3;
 else
  VAR_1.ngpio = 1;

 VAR_1.parent = &VAR_2->dev;




 VAR_5 = FUNC_2(&VAR_2->dev, &VAR_1, ((void*)0));
 if (VAR_5 < 0) {
  FUNC_0(&VAR_2->dev, "could not register gpiochip, %d\n", VAR_5);
  VAR_1.ngpio = 0;
 }

 return VAR_5;
}
