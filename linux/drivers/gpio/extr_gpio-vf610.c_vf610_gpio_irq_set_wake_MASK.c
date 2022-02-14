
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vf610_gpio_port {int irq; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vf610_gpio_port* FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_0, u32 VAR_1)
{
 struct vf610_gpio_port *VAR_2 =
  FUNC_2(FUNC_3(VAR_0));

 if (VAR_1)
  FUNC_1(VAR_2->irq);
 else
  FUNC_0(VAR_2->irq);

 return 0;
}
