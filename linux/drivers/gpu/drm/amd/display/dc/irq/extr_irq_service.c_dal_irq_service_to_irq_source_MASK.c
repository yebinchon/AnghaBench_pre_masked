
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct irq_service {TYPE_1__* funcs; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
struct TYPE_2__ {int (* to_dal_irq_source ) (struct irq_service*,int ,int ) ;} ;


 int FUNC_0 (struct irq_service*,int ,int ) ;

enum dc_irq_source FUNC_1(
  struct irq_service *VAR_0,
  uint32_t VAR_1,
  uint32_t VAR_2)
{
 return VAR_0->funcs->to_dal_irq_source(
  VAR_0,
  VAR_1,
  VAR_2);
}
