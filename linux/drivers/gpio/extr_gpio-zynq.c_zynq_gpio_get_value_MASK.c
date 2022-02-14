
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct zynq_gpio {scalar_t__ base_addr; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct zynq_gpio*) ;
 struct zynq_gpio* FUNC_3 (struct gpio_chip*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int,unsigned int*,unsigned int*,struct zynq_gpio*) ;
 scalar_t__ FUNC_6 (struct zynq_gpio*) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2;
 unsigned int VAR_3, VAR_4;
 struct zynq_gpio *VAR_5 = FUNC_3(VAR_0);

 FUNC_5(VAR_1, &VAR_3, &VAR_4, VAR_5);

 if (FUNC_2(VAR_5)) {
  if (FUNC_6(VAR_5)) {
   if (VAR_3 <= 1) {
    VAR_2 = FUNC_4(VAR_5->base_addr +
     FUNC_1(VAR_3));
   } else {
    VAR_2 = FUNC_4(VAR_5->base_addr +
     FUNC_0(VAR_3));
   }
  } else {
   if (VAR_3 <= 2) {
    VAR_2 = FUNC_4(VAR_5->base_addr +
     FUNC_1(VAR_3));
   } else {
    VAR_2 = FUNC_4(VAR_5->base_addr +
     FUNC_0(VAR_3));
   }
  }
 } else {
  VAR_2 = FUNC_4(VAR_5->base_addr +
   FUNC_1(VAR_3));
 }
 return (VAR_2 >> VAR_4) & 1;
}
