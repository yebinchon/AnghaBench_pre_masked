
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_gpio {struct stmpe* stmpe; } ;
struct stmpe {int * regs; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 struct stmpe_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct stmpe*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
     unsigned VAR_2)
{
 struct stmpe_gpio *VAR_3 = FUNC_1(VAR_1);
 struct stmpe *VAR_4 = VAR_3->stmpe;
 u8 VAR_5 = VAR_4->regs[VAR_0 + (VAR_2 / 8)];
 u8 VAR_6 = FUNC_0(VAR_2 % 8);

 return FUNC_2(VAR_4, VAR_5, VAR_6, 0);
}
