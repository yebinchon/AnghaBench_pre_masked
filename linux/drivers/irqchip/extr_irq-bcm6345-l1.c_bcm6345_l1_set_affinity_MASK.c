
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct irq_data {size_t hwirq; } ;
struct cpumask {int dummy; } ;
struct bcm6345_l1_chip {int lock; TYPE_1__** cpus; int cpumask; } ;
struct TYPE_2__ {size_t* enable_cache; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (struct bcm6345_l1_chip*,struct irq_data*) ;
 int VAR_3 ;
 int FUNC_4 (struct cpumask*,int *,struct cpumask const*) ;
 unsigned int FUNC_5 (struct cpumask*,int ) ;
 int FUNC_6 (int ,struct cpumask const*) ;
 struct cpumask* FUNC_7 (unsigned int) ;
 int FUNC_8 (struct irq_data*) ;
 struct bcm6345_l1_chip* FUNC_9 (struct irq_data*) ;
 int FUNC_10 (struct irq_data*,struct cpumask*) ;
 unsigned int VAR_4 ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct irq_data *VAR_5,
       const struct cpumask *VAR_6,
       bool VAR_7)
{
 struct bcm6345_l1_chip *VAR_8 = FUNC_9(VAR_5);
 u32 VAR_9 = VAR_5->hwirq / VAR_1;
 u32 VAR_10 = FUNC_0(VAR_5->hwirq % VAR_1);
 unsigned int VAR_11 = FUNC_3(VAR_8, VAR_5);
 unsigned int VAR_12;
 struct cpumask VAR_13;
 unsigned long VAR_14;
 bool VAR_15;

 if (!FUNC_4(&VAR_13, &VAR_8->cpumask, VAR_6))
  return -VAR_0;

 VAR_12 = FUNC_5(&VAR_13, VAR_3);
 if (VAR_12 >= VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_12);

 FUNC_11(&VAR_8->lock, VAR_14);
 if (VAR_11 != VAR_12) {
  VAR_15 = VAR_8->cpus[VAR_11]->enable_cache[VAR_9] & VAR_10;
  if (VAR_15)
   FUNC_1(VAR_5);
  FUNC_6(FUNC_8(VAR_5), VAR_6);
  if (VAR_15)
   FUNC_2(VAR_5);
 } else {
  FUNC_6(FUNC_8(VAR_5), VAR_6);
 }
 FUNC_12(&VAR_8->lock, VAR_14);

 FUNC_10(VAR_5, FUNC_7(VAR_12));

 return VAR_2;
}
