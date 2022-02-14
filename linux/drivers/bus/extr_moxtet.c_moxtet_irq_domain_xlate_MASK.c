
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int exists; } ;
struct moxtet {TYPE_1__ irq; } ;
struct irq_domain {struct moxtet* host_data; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_3,
       struct device_node *VAR_4,
       const u32 *VAR_5, unsigned int VAR_6,
       unsigned long *VAR_7,
       unsigned int *VAR_8)
{
 struct moxtet *VAR_9 = VAR_3->host_data;
 int VAR_10;

 if (FUNC_1(VAR_6 < 1))
  return -VAR_0;

 VAR_10 = VAR_5[0];

 if (VAR_10 >= VAR_2 || !(VAR_9->irq.exists & FUNC_0(VAR_10)))
  return -VAR_0;

 *VAR_7 = VAR_10;
 *VAR_8 = VAR_1;
 return 0;
}
