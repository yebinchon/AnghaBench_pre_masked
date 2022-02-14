
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ irq_handler_idx ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static bool FUNC_2(enum dc_irq_source VAR_1,
            irq_handler_idx VAR_2)
{
 if (VAR_0 == VAR_2) {
  FUNC_1("DM_IRQ: invalid handler_idx==NULL!\n");
  return 0;
 }

 if (!FUNC_0(VAR_1)) {
  FUNC_1("DM_IRQ: invalid irq_source:%d!\n", VAR_1);
  return 0;
 }

 return 1;
}
