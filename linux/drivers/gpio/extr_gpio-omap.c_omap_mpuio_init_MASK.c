
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_bank {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct gpio_bank*) ;

__attribute__((used)) static inline void FUNC_3(struct gpio_bank *VAR_2)
{
 FUNC_2(&VAR_0, VAR_2);

 if (FUNC_1(&VAR_1) == 0)
  (void) FUNC_0(&VAR_0);
}
