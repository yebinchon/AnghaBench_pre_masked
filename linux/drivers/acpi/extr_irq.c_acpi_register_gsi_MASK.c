
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_fwspec {int param_count; int * param; scalar_t__ fwnode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct irq_fwspec*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct device *VAR_2, u32 VAR_3, int VAR_4,
        int VAR_5)
{
 struct irq_fwspec VAR_6;

 if (FUNC_0(!VAR_1)) {
  FUNC_3("GSI: No registered irqchip, giving up\n");
  return -VAR_0;
 }

 VAR_6.fwnode = VAR_1;
 VAR_6.param[0] = VAR_3;
 VAR_6.param[1] = FUNC_1(VAR_4, VAR_5);
 VAR_6.param_count = 2;

 return FUNC_2(&VAR_6);
}
