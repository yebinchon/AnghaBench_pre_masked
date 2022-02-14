
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct pca953x_chip {int i2c_lock; TYPE_1__* regs; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int output; } ;


 int VAR_0 ;
 int FUNC_0 (struct pca953x_chip*) ;
 struct pca953x_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pca953x_chip*,int ,unsigned int*) ;
 int FUNC_5 (struct pca953x_chip*,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_1,
          unsigned long *VAR_2, unsigned long *VAR_3)
{
 struct pca953x_chip *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5, VAR_6;
 int VAR_7;
 u8 VAR_8[VAR_0];
 int VAR_9;

 FUNC_2(&VAR_4->i2c_lock);
 VAR_9 = FUNC_4(VAR_4, VAR_4->regs->output, VAR_8);
 if (VAR_9)
  goto exit;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  VAR_5 = VAR_2[VAR_7 / sizeof(*VAR_2)] >>
      ((VAR_7 % sizeof(*VAR_2)) * 8);
  if (VAR_5) {
   VAR_6 = VAR_3[VAR_7 / sizeof(*VAR_3)] >>
      ((VAR_7 % sizeof(*VAR_3)) * 8);
   VAR_6 &= VAR_5;
   VAR_8[VAR_7] = (VAR_8[VAR_7] & ~VAR_5) | VAR_6;
  }
 }

 FUNC_5(VAR_4, VAR_4->regs->output, VAR_8);
exit:
 FUNC_3(&VAR_4->i2c_lock);
}
