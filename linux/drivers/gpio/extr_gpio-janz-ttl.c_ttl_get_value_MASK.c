
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttl_module {int porta_shadow; int portb_shadow; int portc_shadow; int lock; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (unsigned int) ;
 struct ttl_module* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct ttl_module *VAR_2 = FUNC_1(VAR_0->parent);
 u8 *VAR_3;
 int VAR_4;

 if (VAR_1 < 8) {
  VAR_3 = &VAR_2->porta_shadow;
 } else if (VAR_1 < 16) {
  VAR_3 = &VAR_2->portb_shadow;
  VAR_1 -= 8;
 } else {
  VAR_3 = &VAR_2->portc_shadow;
  VAR_1 -= 16;
 }

 FUNC_2(&VAR_2->lock);
 VAR_4 = *VAR_3 & FUNC_0(VAR_1);
 FUNC_3(&VAR_2->lock);
 return !!VAR_4;
}
