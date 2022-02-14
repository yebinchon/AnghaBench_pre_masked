
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_th_driver {int (* irq ) (TYPE_2__*) ;} ;
struct intel_th {int num_thdevs; TYPE_2__** thdev; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int driver; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct intel_th_driver* FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct intel_th *VAR_4 = VAR_3;
 irqreturn_t VAR_5 = VAR_1;
 struct intel_th_driver *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_thdevs; VAR_7++) {
  if (VAR_4->thdev[VAR_7]->type != VAR_0)
   continue;

  VAR_6 = FUNC_2(VAR_4->thdev[VAR_7]->dev.driver);
  if (VAR_6 && VAR_6->irq)
   VAR_5 |= VAR_6->irq(VAR_4->thdev[VAR_7]);
 }

 if (VAR_5 == VAR_1)
  FUNC_0("nobody cared for irq\n");

 return VAR_5;
}
