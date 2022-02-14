
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct irq_data {size_t hwirq; } ;
struct bcm6345_l1_chip {TYPE_1__** cpus; } ;
struct TYPE_2__ {size_t* enable_cache; scalar_t__ map_base; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t,scalar_t__) ;
 unsigned int FUNC_2 (struct bcm6345_l1_chip*,struct irq_data*) ;
 struct bcm6345_l1_chip* FUNC_3 (struct irq_data*) ;
 scalar_t__ FUNC_4 (struct bcm6345_l1_chip*,size_t) ;

__attribute__((used)) static inline void FUNC_5(struct irq_data *VAR_1)
{
 struct bcm6345_l1_chip *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3 = VAR_1->hwirq / VAR_0;
 u32 VAR_4 = FUNC_0(VAR_1->hwirq % VAR_0);
 unsigned int VAR_5 = FUNC_2(VAR_2, VAR_1);

 VAR_2->cpus[VAR_5]->enable_cache[VAR_3] |= VAR_4;
 FUNC_1(VAR_2->cpus[VAR_5]->enable_cache[VAR_3],
  VAR_2->cpus[VAR_5]->map_base + FUNC_4(VAR_2, VAR_3));
}
