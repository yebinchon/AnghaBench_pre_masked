
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {struct stm32_timer_private* private_data; } ;
struct stm32_timer_private {int bits; } ;



__attribute__((used)) static void FUNC_0(struct timer_of *VAR_0, int VAR_1)
{
 struct stm32_timer_private *VAR_2 = VAR_0->private_data;

 VAR_2->bits = VAR_1;
}
