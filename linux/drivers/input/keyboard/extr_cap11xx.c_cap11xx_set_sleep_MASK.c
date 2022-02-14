
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cap11xx_priv {int regmap; scalar_t__ num_leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cap11xx_priv *VAR_3, bool VAR_4)
{



 if (FUNC_0(VAR_2) && VAR_3->num_leds)
  return 0;

 return FUNC_1(VAR_3->regmap, VAR_0,
      VAR_1,
      VAR_4 ? VAR_1 : 0);
}
