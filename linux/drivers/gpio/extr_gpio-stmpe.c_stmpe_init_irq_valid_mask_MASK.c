
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmpe_gpio {int norequest_mask; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long*) ;
 struct stmpe_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0,
          unsigned long *VAR_1,
          unsigned int VAR_2)
{
 struct stmpe_gpio *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if (!VAR_3->norequest_mask)
  return;


 for (VAR_4 = 0; VAR_4 < sizeof(u32); VAR_4++) {
  if (VAR_3->norequest_mask & FUNC_0(VAR_4))
   FUNC_1(VAR_4, VAR_1);
 }
}
