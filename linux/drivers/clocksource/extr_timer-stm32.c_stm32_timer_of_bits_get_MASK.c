
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {struct stm32_timer_private* private_data; } ;
struct stm32_timer_private {int bits; } ;



__attribute__((used)) static int FUNC_0(struct timer_of *VAR_0)
{
 struct stm32_timer_private *VAR_1 = VAR_0->private_data;

 return VAR_1->bits;
}
