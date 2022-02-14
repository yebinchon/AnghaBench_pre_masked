
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs5535_gpio_chip {int base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct cs5535_gpio_chip *VAR_2, u32 VAR_3,
  unsigned int VAR_4)
{
 unsigned long VAR_5 = VAR_2->base + 0x80 + VAR_4;
 if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
  if (VAR_3 & 0xffff)
   VAR_3 |= (FUNC_0(VAR_5) & 0xffff);
  else
   VAR_3 |= (FUNC_0(VAR_5) ^ (VAR_3 >> 16));
 }
 FUNC_1(VAR_3, VAR_5);
}
