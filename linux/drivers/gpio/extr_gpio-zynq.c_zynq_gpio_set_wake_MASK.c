
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_gpio {int irq; } ;
struct irq_data {int dummy; } ;


 struct zynq_gpio* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct zynq_gpio *VAR_2 =
  FUNC_0(FUNC_1(VAR_0));

 FUNC_2(VAR_2->irq, VAR_1);

 return 0;
}
