
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_function_handler {int attention; } ;
struct rmi_function {int num_of_irqs; int dev; int * irq; scalar_t__ irq_pos; int irq_mask; TYPE_1__* rmi_dev; } ;
struct rmi_driver_data {int irqdomain; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct rmi_driver_data* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ,int ,int ,struct rmi_function*) ;
 int VAR_1 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,struct rmi_function*) ;
 int FUNC_7 (int ,int) ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct rmi_function *VAR_3,
       struct rmi_function_handler *VAR_4)
{
 struct rmi_driver_data *VAR_5 = FUNC_1(&VAR_3->rmi_dev->dev);
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_of_irqs; VAR_6++) {
  FUNC_8(VAR_3->irq_pos + VAR_6, VAR_3->irq_mask);

  VAR_3->irq[VAR_6] = FUNC_4(VAR_5->irqdomain,
      VAR_3->irq_pos + VAR_6);

  FUNC_6(VAR_3->irq[VAR_6], VAR_3);
  FUNC_5(VAR_3->irq[VAR_6], &VAR_2,
      VAR_1);
  FUNC_7(VAR_3->irq[VAR_6], 1);

  VAR_7 = FUNC_3(&VAR_3->dev, VAR_3->irq[VAR_6], ((void*)0),
     VAR_4->attention, VAR_0,
     FUNC_2(&VAR_3->dev), VAR_3);
  if (VAR_7) {
   FUNC_0(&VAR_3->dev, "Error %d registering IRQ\n", VAR_7);
   return VAR_7;
  }
 }

 return 0;
}
