
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vibra_info {int enabled; int base; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vibra_info *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  FUNC_0(VAR_2->regmap, VAR_2->base, VAR_0, 0);
  FUNC_0(VAR_2->regmap, VAR_2->base,
       VAR_1, 0);
  VAR_2->enabled = 1;
 } else {
  FUNC_0(VAR_2->regmap, VAR_2->base, VAR_0,
       VAR_0);
  FUNC_0(VAR_2->regmap, VAR_2->base,
       VAR_1, VAR_1);
  VAR_2->enabled = 0;
 }
}
