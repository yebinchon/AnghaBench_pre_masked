
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gpio_chip {int (* write_reg ) (scalar_t__,scalar_t__) ;} ;
struct mtk_gc {int bank; struct gpio_chip chip; } ;
struct mtk {scalar_t__ base; } ;


 int VAR_0 ;
 struct mtk* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct mtk_gc *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct gpio_chip *VAR_4 = &VAR_1->chip;
 struct mtk *VAR_5 = FUNC_0(VAR_4);

 VAR_2 = (VAR_1->bank * VAR_0) + VAR_2;
 VAR_4->write_reg(VAR_5->base + VAR_2, VAR_3);
}
