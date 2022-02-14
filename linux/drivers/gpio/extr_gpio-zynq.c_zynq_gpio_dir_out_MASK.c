
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_gpio {scalar_t__ base_addr; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 struct zynq_gpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (unsigned int,unsigned int*,unsigned int*,struct zynq_gpio*) ;
 int FUNC_7 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_0, unsigned int VAR_1,
        int VAR_2)
{
 u32 VAR_3;
 unsigned int VAR_4, VAR_5;
 struct zynq_gpio *VAR_6 = FUNC_3(VAR_0);

 FUNC_6(VAR_1, &VAR_4, &VAR_5, VAR_6);


 VAR_3 = FUNC_4(VAR_6->base_addr + FUNC_1(VAR_4));
 VAR_3 |= FUNC_0(VAR_5);
 FUNC_5(VAR_3, VAR_6->base_addr + FUNC_1(VAR_4));


 VAR_3 = FUNC_4(VAR_6->base_addr + FUNC_2(VAR_4));
 VAR_3 |= FUNC_0(VAR_5);
 FUNC_5(VAR_3, VAR_6->base_addr + FUNC_2(VAR_4));


 FUNC_7(VAR_0, VAR_1, VAR_2);
 return 0;
}
