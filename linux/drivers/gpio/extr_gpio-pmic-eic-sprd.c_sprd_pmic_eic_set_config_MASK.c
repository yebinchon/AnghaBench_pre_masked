
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 == VAR_1)
  return FUNC_2(VAR_2, VAR_3, VAR_6);

 return -VAR_0;
}
