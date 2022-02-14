
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0,
     unsigned VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2 ? 0 : VAR_3,
  VAR_2 ? VAR_3 : 0);
}
