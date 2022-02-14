
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_2, struct device_node *VAR_3,
      const u32 *VAR_4, unsigned int VAR_5,
      irq_hw_number_t *VAR_6, unsigned int *VAR_7)

{
 *VAR_6 = VAR_4[0];





 if (VAR_5 > 1) {
  if (VAR_4[1] & 1)
   *VAR_7 = VAR_1;
  else
   *VAR_7 = VAR_0;
 } else
  *VAR_7 = VAR_1;

 return 0;
}
