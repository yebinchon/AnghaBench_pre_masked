
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lp55xx_chip {int cl; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

int FUNC_1(struct lp55xx_chip *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 s32 VAR_3;

 VAR_3 = FUNC_0(VAR_0->cl, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = VAR_3;
 return 0;
}
