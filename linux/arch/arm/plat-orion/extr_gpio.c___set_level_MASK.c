
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct orion_gpio_chip {int dummy; } ;


 int FUNC_0 (struct orion_gpio_chip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct orion_gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_0));
 if (VAR_2)
  VAR_3 |= 1 << VAR_1;
 else
  VAR_3 &= ~(1 << VAR_1);
 FUNC_2(VAR_3, FUNC_0(VAR_0));
}
