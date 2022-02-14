
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct scoop_dev* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct scoop_dev *VAR_3 = FUNC_0(VAR_1);


 return !!(FUNC_1(VAR_3->base + VAR_0) & (1 << (VAR_2 + 1)));
}
