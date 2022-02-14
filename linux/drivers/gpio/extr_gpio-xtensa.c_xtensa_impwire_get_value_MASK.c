
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 unsigned long VAR_2, VAR_3;
 u32 VAR_4;

 VAR_2 = FUNC_2(&VAR_3);
 __asm__ __volatile__("read_impwire %0" : "=a" (VAR_4));
 FUNC_1(VAR_2, VAR_3);

 return !!(VAR_4 & FUNC_0(VAR_1));
}
