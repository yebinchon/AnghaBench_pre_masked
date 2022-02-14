
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct irq_domain {struct evic_chip_data* host_data; } ;
struct evic_chip_data {size_t* irq_types; } ;
struct device_node {int dummy; } ;
typedef size_t irq_hw_number_t ;


 int VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct irq_domain *VAR_3, struct device_node *VAR_4,
      const u32 *VAR_5, unsigned int VAR_6,
      irq_hw_number_t *VAR_7, unsigned int *VAR_8)
{
 struct evic_chip_data *VAR_9 = VAR_3->host_data;

 if (FUNC_0(VAR_6 < 2))
  return -VAR_0;

 if (FUNC_0(VAR_5[0] >= VAR_2))
  return -VAR_0;

 *VAR_7 = VAR_5[0];
 *VAR_8 = VAR_5[1] & VAR_1;

 VAR_9->irq_types[VAR_5[0]] = VAR_5[1] & VAR_1;

 return 0;
}
