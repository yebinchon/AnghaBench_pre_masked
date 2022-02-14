
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1,
         int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 u32 VAR_5 = FUNC_0(VAR_1);
 u32 VAR_6 = VAR_2 ? FUNC_0(VAR_1) : 0;

 VAR_3 = FUNC_2(&VAR_4);
 __asm__ __volatile__("wrmsk_expstate %0, %1"
        :: "a" (VAR_6), "a" (VAR_5));
 FUNC_1(VAR_3, VAR_4);
}
