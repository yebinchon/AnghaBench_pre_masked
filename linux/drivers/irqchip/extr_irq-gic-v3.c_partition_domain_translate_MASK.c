
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {size_t* param; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int * ppi_descs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;
 struct device_node* FUNC_1 (size_t) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_4,
          struct irq_fwspec *VAR_5,
          unsigned long *VAR_6,
          unsigned int *VAR_7)
{
 struct device_node *VAR_8;
 int VAR_9;

 if (!VAR_3.ppi_descs)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_5->param[3]);
 if (FUNC_0(!VAR_8))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_3.ppi_descs[VAR_5->param[1]],
         FUNC_2(VAR_8));
 if (VAR_9 < 0)
  return VAR_9;

 *VAR_6 = VAR_9;
 *VAR_7 = VAR_5->param[2] & VAR_2;

 return 0;
}
