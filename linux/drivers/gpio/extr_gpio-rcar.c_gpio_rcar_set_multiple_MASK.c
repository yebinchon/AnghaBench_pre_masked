
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct gpio_rcar_priv {int lock; } ;
struct gpio_chip {unsigned long* valid_mask; scalar_t__ ngpio; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct gpio_rcar_priv*,int ) ;
 int FUNC_2 (struct gpio_rcar_priv*,int ,unsigned long) ;
 struct gpio_rcar_priv* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_1, unsigned long *VAR_2,
       unsigned long *VAR_3)
{
 struct gpio_rcar_priv *VAR_4 = FUNC_3(VAR_1);
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 VAR_7 = VAR_2[0] & FUNC_0(VAR_1->ngpio - 1, 0);
 if (VAR_1->valid_mask)
  VAR_7 &= VAR_1->valid_mask[0];

 if (!VAR_7)
  return;

 FUNC_4(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_6 &= ~VAR_7;
 VAR_6 |= (VAR_7 & VAR_3[0]);
 FUNC_2(VAR_4, VAR_0, VAR_6);
 FUNC_5(&VAR_4->lock, VAR_5);
}
