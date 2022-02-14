
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_3,
       struct device_node *VAR_4,
       const u32 *VAR_5,
       unsigned int VAR_6,
       unsigned long *VAR_7,
       unsigned int *VAR_8)
{
 unsigned int VAR_9 = 0;

 if (VAR_6 == 2)
  VAR_9 = VAR_5[1];

 switch (VAR_9) {
 case 0:
 case 4:
  *VAR_8 = VAR_2;
  break;
 case 1:
  *VAR_8 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 *VAR_7 = VAR_5[0];

 return 0;
}
