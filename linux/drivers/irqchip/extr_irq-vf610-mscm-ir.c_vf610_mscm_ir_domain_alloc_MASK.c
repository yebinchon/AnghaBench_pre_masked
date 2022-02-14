
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_2__* parent; int host_data; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_4__ {int fwnode; } ;
struct TYPE_3__ {scalar_t__ is_nvic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,scalar_t__,int *,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4, unsigned int VAR_5,
          unsigned int VAR_6, void *VAR_7)
{
 int VAR_8;
 irq_hw_number_t VAR_9;
 struct irq_fwspec *VAR_10 = VAR_7;
 struct irq_fwspec VAR_11;

 if (!FUNC_1(VAR_4->parent))
  return -VAR_0;

 if (VAR_10->param_count != 2)
  return -VAR_0;

 VAR_9 = VAR_10->param[0];
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  FUNC_2(VAR_4, VAR_5 + VAR_8, VAR_9 + VAR_8,
           &VAR_3,
           VAR_4->host_data);

 VAR_11.fwnode = VAR_4->parent->fwnode;

 if (VAR_2->is_nvic) {
  VAR_11.param_count = 1;
  VAR_11.param[0] = VAR_10->param[0];
 } else {
  VAR_11.param_count = 3;
  VAR_11.param[0] = VAR_1;
  VAR_11.param[1] = VAR_10->param[0];
  VAR_11.param[2] = VAR_10->param[1];
 }

 return FUNC_0(VAR_4, VAR_5, VAR_6,
         &VAR_11);
}
