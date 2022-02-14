
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_service_init_data {int dummy; } ;
struct irq_service {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_service*,struct irq_service_init_data*) ;
 struct irq_service* FUNC_1 (int,int ) ;

struct irq_service *FUNC_2(
 struct irq_service_init_data *VAR_1)
{
 struct irq_service *VAR_2 = FUNC_1(sizeof(*VAR_2),
        VAR_0);

 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, VAR_1);
 return VAR_2;
}
