
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct octeon_irq_ciu_domain_data {unsigned int num_sum; } ;
struct irq_domain {struct octeon_irq_ciu_domain_data* host_data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_1,
          struct device_node *VAR_2,
          const u32 *VAR_3,
          unsigned int VAR_4,
          unsigned long *VAR_5,
          unsigned int *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 struct octeon_irq_ciu_domain_data *VAR_9 = VAR_1->host_data;

 VAR_7 = VAR_3[0];
 VAR_8 = VAR_3[1];

 if (VAR_7 >= VAR_9->num_sum || VAR_8 > 63)
  return -VAR_0;

 *VAR_5 = (VAR_7 << 6) | VAR_8;
 *VAR_6 = 0;

 return 0;
}
