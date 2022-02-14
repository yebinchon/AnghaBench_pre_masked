
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 u8 VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_0(VAR_5, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return !!(VAR_3 & VAR_0);
}
