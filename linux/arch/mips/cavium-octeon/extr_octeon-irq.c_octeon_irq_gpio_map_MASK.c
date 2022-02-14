
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_irq_gpio_domain_data {int base_hwirq; } ;
struct irq_domain {struct octeon_irq_gpio_domain_data* host_data; } ;
typedef int irq_hw_number_t ;


 unsigned int FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__** VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_4,
          unsigned int VAR_5, irq_hw_number_t VAR_6)
{
 struct octeon_irq_gpio_domain_data *VAR_7 = VAR_4->host_data;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = (VAR_6 + VAR_7->base_hwirq) >> 6;
 VAR_9 = (VAR_6 + VAR_7->base_hwirq) & 63;
 if (VAR_8 >= FUNC_0(VAR_2) ||
  VAR_2[VAR_8][VAR_9] != 0)
  return -VAR_0;






 VAR_10 = FUNC_1(VAR_5, VAR_8, VAR_9, VAR_6,
           VAR_3, VAR_1);
 return VAR_10;
}
