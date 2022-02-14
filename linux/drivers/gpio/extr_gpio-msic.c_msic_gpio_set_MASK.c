
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  return;

 FUNC_0(VAR_4, !!VAR_3 , VAR_0);
}
