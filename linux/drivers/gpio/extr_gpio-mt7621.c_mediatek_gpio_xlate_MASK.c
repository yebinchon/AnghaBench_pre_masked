
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {int* args; } ;
struct mtk_gc {int bank; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_gc* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int
FUNC_1(struct gpio_chip *VAR_2,
      const struct of_phandle_args *VAR_3, u32 *VAR_4)
{
 int VAR_5 = VAR_3->args[0];
 struct mtk_gc *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->bank != VAR_5 / VAR_1)
  return -VAR_0;

 if (VAR_4)
  *VAR_4 = VAR_3->args[1];

 return VAR_5 % VAR_1;
}
