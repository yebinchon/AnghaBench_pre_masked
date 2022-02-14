
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int query_base_addr; } ;
struct rmi_function {TYPE_1__ fd; TYPE_2__* rmi_dev; int dev; } ;
struct rmi_driver {int (* set_irq_bits ) (TYPE_2__*,int ) ;int (* clear_irq_bits ) (TYPE_2__*,int ) ;} ;
struct rmi_2d_sensor {int report_rel; int report_abs; } ;
struct f11_data {int dev_controls; int sens_query; int rel_mask; int abs_mask; struct rmi_2d_sensor sensor; } ;
struct TYPE_7__ {struct rmi_driver* driver; } ;


 struct f11_data* FUNC_0 (int *) ;
 int FUNC_1 (struct rmi_function*,int *,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(struct rmi_function *VAR_0)
{
 struct f11_data *VAR_1 = FUNC_0(&VAR_0->dev);
 struct rmi_driver *VAR_2 = VAR_0->rmi_dev->driver;
 struct rmi_2d_sensor *VAR_3 = &VAR_1->sensor;
 int VAR_4;

 if (!VAR_3->report_abs)
  VAR_2->clear_irq_bits(VAR_0->rmi_dev, VAR_1->abs_mask);
 else
  VAR_2->set_irq_bits(VAR_0->rmi_dev, VAR_1->abs_mask);

 if (!VAR_3->report_rel)
  VAR_2->clear_irq_bits(VAR_0->rmi_dev, VAR_1->rel_mask);
 else
  VAR_2->set_irq_bits(VAR_0->rmi_dev, VAR_1->rel_mask);

 VAR_4 = FUNC_1(VAR_0, &VAR_1->sens_query,
      &VAR_1->dev_controls, VAR_0->fd.query_base_addr);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
