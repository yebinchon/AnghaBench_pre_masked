
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_service_init_data {scalar_t__ ctx; } ;
struct irq_service {scalar_t__ ctx; } ;


 int FUNC_0 () ;

void FUNC_1(
 struct irq_service *VAR_0,
 struct irq_service_init_data *VAR_1)
{
 if (!VAR_1 || !VAR_1->ctx) {
  FUNC_0();
  return;
 }

 VAR_0->ctx = VAR_1->ctx;
}
