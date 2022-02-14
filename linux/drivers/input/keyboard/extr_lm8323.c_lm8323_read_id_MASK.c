
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm8323_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lm8323_chip*,int ,int *,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lm8323_chip *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3, 2);
 if (FUNC_1(VAR_4 != 2))
  return -VAR_0;

 return 0;
}
