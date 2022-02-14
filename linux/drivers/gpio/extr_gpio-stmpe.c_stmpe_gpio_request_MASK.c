
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe_gpio {int norequest_mask; struct stmpe* stmpe; } ;
struct stmpe {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct stmpe_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct stmpe*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct stmpe_gpio *VAR_4 = FUNC_1(VAR_2);
 struct stmpe *VAR_5 = VAR_4->stmpe;

 if (VAR_4->norequest_mask & FUNC_0(VAR_3))
  return -VAR_0;

 return FUNC_2(VAR_5, FUNC_0(VAR_3), VAR_1);
}
