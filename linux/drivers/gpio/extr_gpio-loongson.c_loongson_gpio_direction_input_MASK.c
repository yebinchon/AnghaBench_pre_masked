
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 u32 VAR_4;

 FUNC_1(&VAR_1);
 VAR_4 = VAR_0;
 VAR_4 |= FUNC_0(VAR_3);
 VAR_0 = VAR_4;
 FUNC_2(&VAR_1);

 return 0;
}
