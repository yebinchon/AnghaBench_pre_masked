
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_gpio {int lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned long VAR_0 ;
 struct xgene_gpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct xgene_gpio *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4, VAR_5;
 u32 VAR_6, VAR_7;

 VAR_5 = VAR_0 + FUNC_1(VAR_2);
 VAR_7 = FUNC_2(VAR_2);

 FUNC_6(&VAR_3->lock, VAR_4);

 VAR_6 = FUNC_4(VAR_3->base + VAR_5);
 VAR_6 |= FUNC_0(VAR_7);
 FUNC_5(VAR_6, VAR_3->base + VAR_5);

 FUNC_7(&VAR_3->lock, VAR_4);

 return 0;
}
