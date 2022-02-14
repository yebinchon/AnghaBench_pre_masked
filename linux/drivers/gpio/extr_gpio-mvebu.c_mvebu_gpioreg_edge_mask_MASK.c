
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mvebu_gpio_chip {int soc_variant; unsigned int offset; struct regmap* percpu_regs; struct regmap* regs; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_0 ;




 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(struct mvebu_gpio_chip *VAR_1,
   struct regmap **VAR_2, unsigned int *VAR_3)
{
 int VAR_4;

 switch (VAR_1->soc_variant) {
 case 128:
 case 131:
  *VAR_2 = VAR_1->regs;
  *VAR_3 = VAR_0 + VAR_1->offset;
  break;
 case 129:
  VAR_4 = FUNC_3();
  *VAR_2 = VAR_1->regs;
  *VAR_3 = FUNC_2(VAR_4);
  break;
 case 130:
  VAR_4 = FUNC_3();
  *VAR_2 = VAR_1->percpu_regs;
  *VAR_3 = FUNC_1(VAR_4);
  break;
 default:
  FUNC_0();
 }
}
