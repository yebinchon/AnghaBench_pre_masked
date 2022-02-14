
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xra1403 {int regmap; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 struct xra1403* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 int VAR_4;
 struct xra1403 *VAR_5 = FUNC_2(VAR_1);

 VAR_4 = FUNC_3(VAR_5->regmap, FUNC_4(VAR_0, VAR_2),
   FUNC_0(VAR_2 % 8), VAR_3 ? FUNC_0(VAR_2 % 8) : 0);
 if (VAR_4)
  FUNC_1(VAR_1->parent, "Failed to set pin: %d, ret: %d\n",
    VAR_2, VAR_4);
}
