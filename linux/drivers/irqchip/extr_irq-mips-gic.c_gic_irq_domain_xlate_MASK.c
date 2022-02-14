
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (unsigned int const) ;
 unsigned int const VAR_2 ;
 int FUNC_1 (unsigned int const) ;
 unsigned int const VAR_3 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_4, struct device_node *VAR_5,
    const u32 *VAR_6, unsigned int VAR_7,
    irq_hw_number_t *VAR_8,
    unsigned int *VAR_9)
{
 if (VAR_7 != 3)
  return -VAR_0;

 if (VAR_6[0] == VAR_2)
  *VAR_8 = FUNC_1(VAR_6[1]);
 else if (VAR_6[0] == VAR_1)
  *VAR_8 = FUNC_0(VAR_6[1]);
 else
  return -VAR_0;
 *VAR_9 = VAR_6[2] & VAR_3;

 return 0;
}
