
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct irq_data {size_t hwirq; } ;
struct bcm7038_l1_chip {TYPE_1__** cpus; } ;
struct TYPE_2__ {size_t* mask_cache; scalar_t__ map_base; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 struct bcm7038_l1_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (size_t,scalar_t__) ;
 scalar_t__ FUNC_3 (struct bcm7038_l1_chip*,size_t) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct bcm7038_l1_chip *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = VAR_1->hwirq / VAR_0;
 u32 VAR_5 = FUNC_0(VAR_1->hwirq % VAR_0);

 VAR_3->cpus[VAR_2]->mask_cache[VAR_4] |= VAR_5;
 FUNC_2(VAR_5, VAR_3->cpus[VAR_2]->map_base +
   FUNC_3(VAR_3, VAR_4));
}
