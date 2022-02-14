
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cmd_done; scalar_t__ in_bl_mode; } ;
struct f34_data {TYPE_1__ v7; TYPE_3__* fn; } ;
struct TYPE_8__ {TYPE_2__* driver; } ;
struct TYPE_7__ {int irq_mask; TYPE_4__* rmi_dev; } ;
struct TYPE_6__ {int (* set_irq_bits ) (TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct f34_data*) ;
 int FUNC_2 (struct f34_data*,int ) ;
 int FUNC_3 (struct f34_data*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct f34_data *VAR_2)
{
 int VAR_3;

 VAR_2->fn->rmi_dev->driver->set_irq_bits(VAR_2->fn->rmi_dev, VAR_2->fn->irq_mask);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->v7.in_bl_mode)
  return 0;

 FUNC_0(&VAR_2->v7.cmd_done);

 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
