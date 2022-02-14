
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct TYPE_5__ {int function_number; } ;
struct rmi_function {int num_of_irqs; int * irq; TYPE_2__ dev; TYPE_1__ fd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*,char*,int ) ;

void FUNC_5(struct rmi_function *VAR_1)
{
 int VAR_2;

 FUNC_4(VAR_0, &VAR_1->dev, "Unregistering F%02X.\n",
   VAR_1->fd.function_number);

 FUNC_0(&VAR_1->dev);
 FUNC_2(VAR_1->dev.of_node);
 FUNC_3(&VAR_1->dev);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_of_irqs; VAR_2++)
  FUNC_1(VAR_1->irq[VAR_2]);

}
