
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gpio_chip*,unsigned int,int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3,
      unsigned long VAR_4)
{
 u32 VAR_5;

 if (FUNC_2(VAR_4) != VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4);
 FUNC_0(VAR_2, VAR_3, VAR_5 ? 1 : 0);

 return 0;
}
