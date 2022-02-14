
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rmi_function {int dev; TYPE_1__* rmi_dev; } ;
struct rmi_driver {int (* clear_irq_bits ) (TYPE_1__*,int ) ;int (* set_irq_bits ) (TYPE_1__*,int ) ;} ;
struct rmi_2d_sensor {int report_abs; } ;
struct f12_data {int rel_mask; int abs_mask; struct rmi_2d_sensor sensor; } ;
struct TYPE_4__ {struct rmi_driver* driver; } ;


 struct f12_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct rmi_function*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct rmi_function *VAR_0)
{
 struct rmi_driver *VAR_1 = VAR_0->rmi_dev->driver;
 struct f12_data *VAR_2 = FUNC_0(&VAR_0->dev);
 struct rmi_2d_sensor *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->sensor;

 if (!VAR_3->report_abs)
  VAR_1->clear_irq_bits(VAR_0->rmi_dev, VAR_2->abs_mask);
 else
  VAR_1->set_irq_bits(VAR_0->rmi_dev, VAR_2->abs_mask);

 VAR_1->clear_irq_bits(VAR_0->rmi_dev, VAR_2->rel_mask);

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4)
  FUNC_1(&VAR_0->dev,
   "Failed to write F12 control registers: %d\n", VAR_4);

 return 0;
}
