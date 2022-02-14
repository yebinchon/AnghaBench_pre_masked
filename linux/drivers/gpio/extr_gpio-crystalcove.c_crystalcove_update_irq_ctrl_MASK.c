
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crystalcove_gpio {int intcnt_value; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct crystalcove_gpio *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3, VAR_1);

 FUNC_0(VAR_2->regmap, VAR_4, VAR_0, VAR_2->intcnt_value);
}
