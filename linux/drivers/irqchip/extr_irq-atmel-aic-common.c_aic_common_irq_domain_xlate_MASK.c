
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef unsigned int irq_hw_number_t ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct irq_domain *VAR_4,
    struct device_node *VAR_5,
    const u32 *VAR_6,
    unsigned int VAR_7,
    irq_hw_number_t *VAR_8,
    unsigned int *VAR_9)
{
 if (FUNC_0(VAR_7 < 3))
  return -VAR_2;

 if (FUNC_0((VAR_6[2] < VAR_1) ||
      (VAR_6[2] > VAR_0)))
  return -VAR_2;

 *VAR_8 = VAR_6[0];
 *VAR_9 = VAR_6[1] & VAR_3;

 return 0;
}
