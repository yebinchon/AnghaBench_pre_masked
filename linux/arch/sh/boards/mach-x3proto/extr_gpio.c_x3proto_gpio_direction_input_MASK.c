
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_2(&VAR_1, VAR_4);
 VAR_5 = FUNC_0(VAR_0);
 VAR_5 |= (1 << VAR_3);
 FUNC_1(VAR_5, VAR_0);
 FUNC_3(&VAR_1, VAR_4);

 return 0;
}
