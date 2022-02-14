
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_service_init_data {int dummy; } ;
struct irq_service {int * funcs; int info; } ;


 int FUNC_0 (struct irq_service*,struct irq_service_init_data*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(
 struct irq_service *VAR_2,
 struct irq_service_init_data *VAR_3)
{
 FUNC_0(VAR_2, VAR_3);

 VAR_2->info = VAR_1;
 VAR_2->funcs = &VAR_0;
}
