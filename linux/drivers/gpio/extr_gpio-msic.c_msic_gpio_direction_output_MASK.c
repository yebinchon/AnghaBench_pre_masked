
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,int,unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3,
   unsigned VAR_4, int VAR_5)
{
 int VAR_6;
 unsigned VAR_7;

 VAR_5 = (!!VAR_5) | VAR_1;
 VAR_7 = VAR_0 | VAR_2;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_6, VAR_5, VAR_7);
}
