
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct da9052_gpio {int da9052; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,scalar_t__,int ,unsigned char) ;
 struct da9052_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_6,
     unsigned VAR_7, int VAR_8)
{
 struct da9052_gpio *VAR_9 = FUNC_2(VAR_6);
 unsigned char VAR_10;
 int VAR_11;


 VAR_10 = VAR_4 | VAR_5 << 2 |
    VAR_8 << 3;

 if (FUNC_0(VAR_7))
  VAR_11 = FUNC_1(VAR_9->da9052, (VAR_7 >> 1) +
     VAR_0,
     VAR_2,
     (VAR_10 <<
     VAR_3));
 else
  VAR_11 = FUNC_1(VAR_9->da9052, (VAR_7 >> 1) +
     VAR_0,
     VAR_1,
     VAR_10);

 return VAR_11;
}
