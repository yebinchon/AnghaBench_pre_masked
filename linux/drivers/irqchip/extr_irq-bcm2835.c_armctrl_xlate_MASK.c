
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long FUNC_0 (scalar_t__ const,scalar_t__ const) ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_5, struct device_node *VAR_6,
 const u32 *VAR_7, unsigned int VAR_8,
 unsigned long *VAR_9, unsigned int *VAR_10)
{
 if (FUNC_1(VAR_8 != 2))
  return -VAR_0;

 if (FUNC_1(VAR_7[0] >= VAR_3))
  return -VAR_0;

 if (FUNC_1(VAR_7[1] >= VAR_1))
  return -VAR_0;

 if (FUNC_1(VAR_7[0] == 0 && VAR_7[1] >= VAR_4))
  return -VAR_0;

 *VAR_9 = FUNC_0(VAR_7[0], VAR_7[1]);
 *VAR_10 = VAR_2;
 return 0;
}
