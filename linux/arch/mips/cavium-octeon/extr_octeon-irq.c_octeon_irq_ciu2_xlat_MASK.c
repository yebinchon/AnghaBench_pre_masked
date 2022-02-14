
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_0,
    struct device_node *VAR_1,
    const u32 *VAR_2,
    unsigned int VAR_3,
    unsigned long *VAR_4,
    unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = VAR_2[0];
 VAR_7 = VAR_2[1];

 *VAR_4 = (VAR_6 << 6) | VAR_7;
 *VAR_5 = 0;

 return 0;
}
