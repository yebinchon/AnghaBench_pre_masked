
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_bank {int irq_usage; int mod_usage; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct gpio_bank*,unsigned int) ;
 int FUNC_3 (struct gpio_bank*,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct gpio_bank *VAR_0, unsigned VAR_1)
{
 if (!FUNC_1(VAR_0->mod_usage, VAR_1)) {
  FUNC_2(VAR_0, VAR_1);
  FUNC_3(VAR_0, VAR_1, 1);
 }
 VAR_0->irq_usage |= FUNC_0(VAR_1);
}
