
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscon_gpio_priv {unsigned int dreg_offset; int syscon; TYPE_1__* data; } ;
struct gpio_chip {int parent; } ;
struct TYPE_2__ {unsigned int dat_bit_offset; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 struct syscon_gpio_priv* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4, int VAR_5)
{
 struct syscon_gpio_priv *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->dreg_offset + VAR_6->data->dat_bit_offset + VAR_4;

 if (!VAR_5)
  return;

 VAR_8 = FUNC_3(
   VAR_6->syscon,
   (VAR_7 / VAR_1) * VAR_2,
   FUNC_0(VAR_7 % VAR_1) | VAR_0,
   FUNC_0(VAR_7 % VAR_1) | VAR_0);
 if (VAR_8 < 0)
  FUNC_1(VAR_3->parent, "gpio write failed ret(%d)\n", VAR_8);
}
