
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lp55xx_chip {int dummy; } ;


 int FUNC_0 (struct lp55xx_chip*,scalar_t__,scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(struct lp55xx_chip *VAR_0,
     u8 VAR_1, const u8 *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_2 || VAR_3 <= 0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_0, VAR_1 + VAR_4, *(VAR_2 + VAR_4));

 FUNC_0(VAR_0, VAR_1 + VAR_4, 0);
 FUNC_0(VAR_0, VAR_1 + VAR_4 + 1, 0);
}
