
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef size_t irq_hw_number_t ;






 size_t const VAR_0 ;
 unsigned int VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_3, struct device_node *VAR_4,
      const u32 *VAR_5, unsigned int VAR_6,
      irq_hw_number_t *VAR_7, unsigned int *VAR_8)

{







 static unsigned char VAR_9[4] = {
  131,
  130,
  128,
  129,
 };

 *VAR_7 = VAR_5[0];
 if (VAR_6 > 1) {
  VAR_2[VAR_5[0]] = VAR_5[1];
  *VAR_8 = VAR_9[VAR_5[1] &
       ~VAR_0];
 } else {
  *VAR_8 = VAR_1;
 }

 return 0;
}
