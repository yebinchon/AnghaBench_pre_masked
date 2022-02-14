
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;


 struct device_node* FUNC_0 (struct irq_domain*) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_1, struct device_node *VAR_2,
  const u32 *VAR_3, u32 VAR_4, irq_hw_number_t *VAR_5,
  u32 *VAR_6)
{
 u32 VAR_7, VAR_8;

 if (VAR_2 != FUNC_0(VAR_1))
  return -VAR_0;

 if (VAR_4 < 2)
  return -VAR_0;

 VAR_7 = *VAR_3;
 *VAR_5 = VAR_7;

 VAR_3++;
 VAR_8 = *VAR_3;

 switch (VAR_8) {
 case 128:
 case 129:
  *VAR_6 = VAR_8;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
