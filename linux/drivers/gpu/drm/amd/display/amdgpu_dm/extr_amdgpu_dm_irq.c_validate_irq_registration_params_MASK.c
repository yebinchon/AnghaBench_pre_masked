
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_interrupt_params {scalar_t__ int_context; scalar_t__ irq_source; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_2(struct dc_interrupt_params *VAR_1,
     void (*VAR_2)(void *))
{
 if (((void*)0) == VAR_1 || ((void*)0) == VAR_2) {
  FUNC_1("DM_IRQ: invalid input!\n");
  return 0;
 }

 if (VAR_1->int_context >= VAR_0) {
  FUNC_1("DM_IRQ: invalid context: %d!\n",
    VAR_1->int_context);
  return 0;
 }

 if (!FUNC_0(VAR_1->irq_source)) {
  FUNC_1("DM_IRQ: invalid irq_source: %d!\n",
    VAR_1->irq_source);
  return 0;
 }

 return 1;
}
