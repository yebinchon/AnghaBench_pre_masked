
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int* col_map; } ;
struct its_device {TYPE_2__ event_map; TYPE_1__* its; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;
struct cpumask {int dummy; } ;
struct TYPE_3__ {scalar_t__ numa_node; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpumask* VAR_2 ;
 int FUNC_0 (struct cpumask*) ;
 int FUNC_1 (struct cpumask const*,struct cpumask*) ;
 int FUNC_2 (int) ;
 struct cpumask* FUNC_3 (scalar_t__) ;
 struct its_device* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*,int ) ;
 size_t FUNC_6 (struct irq_data*) ;
 int FUNC_7 (struct its_device*,int ,size_t) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct irq_domain *VAR_4,
       struct irq_data *VAR_5, bool VAR_6)
{
 struct its_device *VAR_7 = FUNC_4(VAR_5);
 u32 VAR_8 = FUNC_6(VAR_5);
 const struct cpumask *VAR_9 = VAR_2;
 int VAR_10;


 if (VAR_7->its->numa_node >= 0)
  VAR_9 = FUNC_3(VAR_7->its->numa_node);


 VAR_10 = FUNC_1(VAR_9, VAR_2);
 if (VAR_10 >= VAR_3) {
  if (VAR_7->its->flags & VAR_1)
   return -VAR_0;

  VAR_10 = FUNC_0(VAR_2);
 }

 VAR_7->event_map.col_map[VAR_8] = VAR_10;
 FUNC_5(VAR_5, FUNC_2(VAR_10));


 FUNC_7(VAR_7, VAR_5->hwirq, VAR_8);
 return 0;
}
