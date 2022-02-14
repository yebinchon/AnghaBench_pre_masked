
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct irq_data {size_t hwirq; } ;
struct cpumask {int dummy; } ;
struct bcm7038_l1_chip {size_t* affinity; int lock; TYPE_1__** cpus; } ;
typedef size_t irq_hw_number_t ;
struct TYPE_2__ {size_t* mask_cache; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (struct irq_data*,size_t) ;
 int FUNC_2 (struct irq_data*,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_3 (struct cpumask const*,int ) ;
 int FUNC_4 (unsigned int) ;
 struct bcm7038_l1_chip* FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct irq_data *VAR_2,
       const struct cpumask *VAR_3,
       bool VAR_4)
{
 struct bcm7038_l1_chip *VAR_5 = FUNC_5(VAR_2);
 unsigned long VAR_6;
 irq_hw_number_t VAR_7 = VAR_2->hwirq;
 u32 VAR_8 = VAR_7 / VAR_0;
 u32 VAR_9 = FUNC_0(VAR_7 % VAR_0);
 unsigned int VAR_10 = FUNC_3(VAR_3, VAR_1);
 bool VAR_11;

 FUNC_7(&VAR_5->lock, VAR_6);

 VAR_11 = !!(VAR_5->cpus[VAR_5->affinity[VAR_7]]->mask_cache[VAR_8] &
     VAR_9);
 FUNC_1(VAR_2, VAR_5->affinity[VAR_7]);
 VAR_5->affinity[VAR_7] = VAR_10;
 if (!VAR_11)
  FUNC_2(VAR_2, VAR_10);

 FUNC_8(&VAR_5->lock, VAR_6);
 FUNC_6(VAR_2, FUNC_4(VAR_10));

 return 0;
}
