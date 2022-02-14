
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_gpio_chip {int dummy; } ;
struct irq_domain {struct sa1100_gpio_chip* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct sa1100_gpio_chip*) ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_2,
  unsigned int VAR_3, irq_hw_number_t VAR_4)
{
 struct sa1100_gpio_chip *VAR_5 = VAR_2->host_data;

 FUNC_1(VAR_3, VAR_5);
 FUNC_0(VAR_3, &VAR_1, VAR_0);
 FUNC_2(VAR_3);

 return 0;
}
