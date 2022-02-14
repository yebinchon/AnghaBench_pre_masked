
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct pmic8xxx_pwrkey {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pmic8xxx_pwrkey *VAR_2, bool VAR_3)
{
 struct regmap *VAR_4 = VAR_2->regmap;
 u8 VAR_5 = VAR_1;
 u8 VAR_6 = 0;


 if (VAR_3)
  VAR_6 = VAR_5;
 return FUNC_0(VAR_4, VAR_0, VAR_5, VAR_6);
}
