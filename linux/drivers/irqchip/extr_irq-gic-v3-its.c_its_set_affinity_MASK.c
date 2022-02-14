
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {unsigned int* col_map; } ;
struct its_device {TYPE_2__ event_map; TYPE_1__* its; } ;
struct its_collection {int dummy; } ;
struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ numa_node; struct its_collection* collections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpumask* VAR_3 ;
 unsigned int FUNC_0 (struct cpumask const*,struct cpumask const*) ;
 int FUNC_1 (struct cpumask const*,struct cpumask const*) ;
 int FUNC_2 (unsigned int) ;
 struct cpumask* FUNC_3 (scalar_t__) ;
 struct its_device* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*,int ) ;
 scalar_t__ FUNC_6 (struct irq_data*) ;
 size_t FUNC_7 (struct irq_data*) ;
 int FUNC_8 (struct its_device*,struct its_collection*,size_t) ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct irq_data *VAR_5, const struct cpumask *VAR_6,
       bool VAR_7)
{
 unsigned int VAR_8;
 const struct cpumask *VAR_9 = VAR_3;
 struct its_device *VAR_10 = FUNC_4(VAR_5);
 struct its_collection *VAR_11;
 u32 VAR_12 = FUNC_7(VAR_5);


 if (FUNC_6(VAR_5))
  return -VAR_0;


 if (VAR_10->its->flags & VAR_2) {
  if (VAR_10->its->numa_node >= 0) {
   VAR_9 = FUNC_3(VAR_10->its->numa_node);
   if (!FUNC_1(VAR_6, VAR_9))
    return -VAR_0;
  }
 }

 VAR_8 = FUNC_0(VAR_6, VAR_9);

 if (VAR_8 >= VAR_4)
  return -VAR_0;


 if (VAR_8 != VAR_10->event_map.col_map[VAR_12]) {
  VAR_11 = &VAR_10->its->collections[VAR_8];
  FUNC_8(VAR_10, VAR_11, VAR_12);
  VAR_10->event_map.col_map[VAR_12] = VAR_8;
  FUNC_5(VAR_5, FUNC_2(VAR_8));
 }

 return VAR_1;
}
