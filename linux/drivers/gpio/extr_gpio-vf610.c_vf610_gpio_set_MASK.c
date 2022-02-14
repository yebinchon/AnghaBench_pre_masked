
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_gpio_port {scalar_t__ gpio_base; } ;
struct gpio_chip {int dummy; } ;


 unsigned long FUNC_0 (unsigned int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct vf610_gpio_port* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct vf610_gpio_port *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6 = FUNC_0(VAR_3);
 unsigned long VAR_7 = VAR_4 ? VAR_1 : VAR_0;

 FUNC_2(VAR_6, VAR_5->gpio_base + VAR_7);
}
