
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_gpio {struct stmpe* stmpe; } ;
struct stmpe {int * regs; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct stmpe_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct stmpe*,int ,int ) ;
 int FUNC_3 (struct stmpe*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct stmpe_gpio *VAR_5 = FUNC_1(VAR_2);
 struct stmpe *VAR_6 = VAR_5->stmpe;
 int VAR_7 = VAR_4 ? VAR_1 : VAR_0;
 u8 VAR_8 = VAR_6->regs[VAR_7 + (VAR_3 / 8)];
 u8 VAR_9 = FUNC_0(VAR_3 % 8);





 if (VAR_6->regs[VAR_1] == VAR_6->regs[VAR_0])
  FUNC_3(VAR_6, VAR_8, VAR_9, VAR_4 ? VAR_9 : 0);
 else
  FUNC_2(VAR_6, VAR_8, VAR_9);
}
