
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct gpio_bank {int lock; int (* set_dataout ) (struct gpio_bank*,unsigned int,int) ;} ;


 struct gpio_bank* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_bank*,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct gpio_bank*,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct gpio_bank *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_3->set_dataout(VAR_3, VAR_1, VAR_2);
 FUNC_1(VAR_3, VAR_1, 0);
 FUNC_3(&VAR_3->lock, VAR_4);
 return 0;
}
