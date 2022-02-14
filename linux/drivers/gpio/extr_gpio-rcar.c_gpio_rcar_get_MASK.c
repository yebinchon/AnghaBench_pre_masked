
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4);



 if (FUNC_1(FUNC_2(VAR_3), VAR_1) & VAR_5)
  return !!(FUNC_1(FUNC_2(VAR_3), VAR_2) & VAR_5);
 else
  return !!(FUNC_1(FUNC_2(VAR_3), VAR_0) & VAR_5);
}
