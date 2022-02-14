
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int intcnt; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct wcove_gpio *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3, VAR_1);

 if (VAR_4 < 0)
  return;

 FUNC_0(VAR_2->regmap, VAR_4, VAR_0, VAR_2->intcnt);
}
