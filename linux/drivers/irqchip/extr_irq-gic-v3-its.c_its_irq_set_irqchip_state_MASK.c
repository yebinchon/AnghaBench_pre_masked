
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct its_device {int dummy; } ;
struct irq_data {int dummy; } ;
typedef enum irqchip_irq_state { ____Placeholder_irqchip_irq_state } irqchip_irq_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct its_device* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct its_device*,int ) ;
 int FUNC_3 (struct its_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_2,
         enum irqchip_irq_state VAR_3,
         bool VAR_4)
{
 struct its_device *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = FUNC_1(VAR_2);

 if (VAR_3 != VAR_1)
  return -VAR_0;

 if (VAR_4)
  FUNC_3(VAR_5, VAR_6);
 else
  FUNC_2(VAR_5, VAR_6);

 return 0;
}
