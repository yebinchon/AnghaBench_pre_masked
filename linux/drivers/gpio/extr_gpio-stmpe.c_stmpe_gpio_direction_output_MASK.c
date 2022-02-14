
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
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_3 (struct stmpe*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1,
      unsigned VAR_2, int VAR_3)
{
 struct stmpe_gpio *VAR_4 = FUNC_1(VAR_1);
 struct stmpe *VAR_5 = VAR_4->stmpe;
 u8 VAR_6 = VAR_5->regs[VAR_0 + (VAR_2 / 8)];
 u8 VAR_7 = FUNC_0(VAR_2 % 8);

 FUNC_2(VAR_1, VAR_2, VAR_3);

 return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_7);
}
