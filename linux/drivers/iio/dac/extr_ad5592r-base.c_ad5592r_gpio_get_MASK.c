
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct ad5592r_state {int gpio_out; int gpio_val; int gpio_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* gpio_read ) (struct ad5592r_state*,int*) ;} ;


 int FUNC_0 (unsigned int) ;
 struct ad5592r_state* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ad5592r_state*,int*) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct ad5592r_state *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;
 u8 VAR_4;

 FUNC_2(&VAR_2->gpio_lock);

 if (VAR_2->gpio_out & FUNC_0(VAR_1))
  VAR_4 = VAR_2->gpio_val;
 else
  VAR_3 = VAR_2->ops->gpio_read(VAR_2, &VAR_4);

 FUNC_3(&VAR_2->gpio_lock);

 if (VAR_3 < 0)
  return VAR_3;

 return !!(VAR_4 & FUNC_0(VAR_1));
}
