
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_fwspec {int param_count; int* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_4__ {int int_max; scalar_t__* irq_map; int (* write ) (int,scalar_t__) ;int lock; } ;
struct TYPE_3__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_5, unsigned VAR_6,
       irq_hw_number_t VAR_7)
{
 struct irq_fwspec VAR_8;
 int VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_5->parent))
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 for (VAR_9 = VAR_4->int_max - 1; VAR_9 >= 0; VAR_9--) {
  if (VAR_4->irq_map[VAR_9] == VAR_2) {
   VAR_4->irq_map[VAR_9] = VAR_7;
   break;
  }
 }
 FUNC_3(&VAR_4->lock);

 if (VAR_9 < 0)
  return -VAR_1;

 VAR_8.fwnode = VAR_5->parent->fwnode;
 VAR_8.param_count = 3;
 VAR_8.param[0] = 0;
 VAR_8.param[1] = VAR_9;
 VAR_8.param[2] = VAR_3;

 VAR_10 = FUNC_0(VAR_5, VAR_6, 1, &VAR_8);
 if (VAR_10)
  VAR_4->irq_map[VAR_9] = VAR_2;
 else
  VAR_4->write(VAR_9, VAR_7);

 return VAR_10;
}
