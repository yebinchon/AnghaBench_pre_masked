
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_rcar_priv {int lock; scalar_t__ has_outdtsel; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gpio_rcar_priv*,int ,unsigned int,int) ;
 struct gpio_rcar_priv* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_4,
             unsigned int VAR_5,
             bool VAR_6)
{
 struct gpio_rcar_priv *VAR_7 = FUNC_1(VAR_4);
 unsigned long VAR_8;






 FUNC_2(&VAR_7->lock, VAR_8);


 FUNC_0(VAR_7, VAR_3, VAR_5, 0);


 FUNC_0(VAR_7, VAR_1, VAR_5, 0);


 FUNC_0(VAR_7, VAR_0, VAR_5, VAR_6);


 if (VAR_7->has_outdtsel && VAR_6)
  FUNC_0(VAR_7, VAR_2, VAR_5, 0);

 FUNC_3(&VAR_7->lock, VAR_8);
}
