
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscon_gpio_priv {unsigned int dreg_offset; int syscon; TYPE_1__* data; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {unsigned int dat_bit_offset; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct syscon_gpio_priv* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct syscon_gpio_priv *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;

 VAR_6 = VAR_5->dreg_offset + VAR_5->data->dat_bit_offset + VAR_3;

 FUNC_2(VAR_5->syscon,
      (VAR_6 / VAR_0) * VAR_1,
      FUNC_0(VAR_6 % VAR_0),
      VAR_4 ? FUNC_0(VAR_6 % VAR_0) : 0);
}
