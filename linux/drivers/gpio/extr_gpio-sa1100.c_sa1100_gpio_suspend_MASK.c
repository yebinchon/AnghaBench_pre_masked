
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_gpio_chip {int irqwake; int irqrising; int irqfalling; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct sa1100_gpio_chip VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct sa1100_gpio_chip *VAR_4 = &VAR_3;




 FUNC_1(VAR_4->irqwake & VAR_4->irqrising, VAR_4->membase + VAR_2);
 FUNC_1(VAR_4->irqwake & VAR_4->irqfalling, VAR_4->membase + VAR_1);




 FUNC_1(FUNC_0(VAR_4->membase + VAR_0),
         VAR_4->membase + VAR_0);

 return 0;
}
