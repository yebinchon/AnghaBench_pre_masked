
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl061 {int lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 unsigned char FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 struct pl061* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned char FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct pl061 *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 unsigned char VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_4(VAR_3->base + VAR_0);
 VAR_5 &= ~(FUNC_0(VAR_2));
 FUNC_5(VAR_5, VAR_3->base + VAR_0);
 FUNC_3(&VAR_3->lock, VAR_4);

 return 0;
}
