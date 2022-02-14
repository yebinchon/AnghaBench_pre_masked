
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_gpio {scalar_t__ base_addr; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct zynq_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (unsigned int,unsigned int*,unsigned int*,struct zynq_gpio*) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_2, unsigned int VAR_3,
    int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 struct zynq_gpio *VAR_8 = FUNC_2(VAR_2);

 FUNC_4(VAR_3, &VAR_6, &VAR_7, VAR_8);

 if (VAR_7 >= VAR_0) {

  VAR_7 -= VAR_0;
  VAR_5 = FUNC_1(VAR_6);
 } else {
  VAR_5 = FUNC_0(VAR_6);
 }





 VAR_4 = !!VAR_4;
 VAR_4 = ~(1 << (VAR_7 + VAR_0)) &
  ((VAR_4 << VAR_7) | VAR_1);

 FUNC_3(VAR_4, VAR_8->base_addr + VAR_5);
}
