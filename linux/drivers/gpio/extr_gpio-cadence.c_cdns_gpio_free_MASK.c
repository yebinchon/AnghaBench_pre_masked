
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int bgpio_lock; } ;
struct cdns_gpio_chip {int bypass_orig; scalar_t__ regs; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 struct cdns_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct cdns_gpio_chip *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;

 FUNC_4(&VAR_1->bgpio_lock, VAR_4);

 FUNC_3(FUNC_2(VAR_3->regs + VAR_0) |
    (FUNC_0(VAR_2) & VAR_3->bypass_orig),
    VAR_3->regs + VAR_0);

 FUNC_5(&VAR_1->bgpio_lock, VAR_4);
}
