
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct adnp {int i2c_lock; } ;


 int FUNC_0 (struct adnp*,unsigned int,int) ;
 struct adnp* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct adnp *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(&VAR_3->i2c_lock);
 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_3(&VAR_3->i2c_lock);
}
