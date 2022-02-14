
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct adnp {unsigned int reg_shift; int i2c_lock; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct adnp*) ;
 int FUNC_2 (struct adnp*,unsigned int,int) ;
 int FUNC_3 (struct adnp*,scalar_t__,int*) ;
 int FUNC_4 (struct adnp*,scalar_t__,int) ;
 struct adnp* FUNC_5 (struct gpio_chip*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_1, unsigned VAR_2,
          int VAR_3)
{
 struct adnp *VAR_4 = FUNC_5(VAR_1);
 unsigned int VAR_5 = VAR_2 >> VAR_4->reg_shift;
 unsigned int VAR_6 = VAR_2 & 7;
 int VAR_7;
 u8 VAR_8;

 FUNC_6(&VAR_4->i2c_lock);

 VAR_7 = FUNC_3(VAR_4, FUNC_1(VAR_4) + VAR_5, &VAR_8);
 if (VAR_7 < 0)
  goto out;

 VAR_8 |= FUNC_0(VAR_6);

 VAR_7 = FUNC_4(VAR_4, FUNC_1(VAR_4) + VAR_5, VAR_8);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_3(VAR_4, FUNC_1(VAR_4) + VAR_5, &VAR_8);
 if (VAR_7 < 0)
  goto out;

 if (!(VAR_8 & FUNC_0(VAR_6))) {
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_4, VAR_2, VAR_3);
 VAR_7 = 0;

out:
 FUNC_7(&VAR_4->i2c_lock);
 return VAR_7;
}
