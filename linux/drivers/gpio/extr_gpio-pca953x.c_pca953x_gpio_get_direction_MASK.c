
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pca953x_chip {int i2c_lock; int regmap; TYPE_1__* regs; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int direction; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct pca953x_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pca953x_chip*,int ,unsigned int,int,int) ;
 int FUNC_5 (int ,int,int*) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct pca953x_chip *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4 = FUNC_4(VAR_3, VAR_3->regs->direction, VAR_2,
     1, 0);
 u8 VAR_5 = FUNC_0(VAR_2 % VAR_0);
 u32 VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3->i2c_lock);
 VAR_7 = FUNC_5(VAR_3->regmap, VAR_4, &VAR_6);
 FUNC_3(&VAR_3->i2c_lock);
 if (VAR_7 < 0)
  return VAR_7;

 return !!(VAR_6 & VAR_5);
}
