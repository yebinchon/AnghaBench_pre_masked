
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct syscon_gpio_priv {unsigned int dreg_offset; int syscon; TYPE_1__* data; } ;
struct gpio_chip {int parent; } ;
struct TYPE_2__ {unsigned int dat_bit_offset; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 struct syscon_gpio_priv* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3,
         int VAR_4)
{
 struct syscon_gpio_priv *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6;
 u8 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = VAR_5->dreg_offset + VAR_5->data->dat_bit_offset + VAR_3;
 VAR_7 = VAR_6 % VAR_0;
 VAR_8 = (VAR_4 ? FUNC_0(VAR_7) : 0) | FUNC_0(VAR_7 + 16);
 VAR_9 = FUNC_3(VAR_5->syscon,
      (VAR_6 / VAR_0) * VAR_1,
      VAR_8);
 if (VAR_9 < 0)
  FUNC_1(VAR_2->parent, "gpio write failed ret(%d)\n", VAR_9);
}
