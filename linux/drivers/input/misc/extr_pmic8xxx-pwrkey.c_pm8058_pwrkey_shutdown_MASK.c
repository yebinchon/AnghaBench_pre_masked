
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct pmic8xxx_pwrkey {struct regmap* regmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct regmap*,int ,int ,int) ;
 int FUNC_2 (struct regmap*,int ,int ,int ,int) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct pmic8xxx_pwrkey *VAR_12, bool VAR_13)
{
 int VAR_14;
 struct regmap *VAR_15 = VAR_12->regmap;
 u8 VAR_16, VAR_17;


 if (!VAR_13) {

  FUNC_2(VAR_15,
   VAR_2, VAR_3,
   VAR_10, FUNC_0(7));
  FUNC_2(VAR_15,
   VAR_4, VAR_5,
   VAR_10, FUNC_0(6));
  FUNC_2(VAR_15,
   VAR_6, VAR_7,
   VAR_9, FUNC_0(7) | FUNC_0(4));

  FUNC_1(VAR_15,
   VAR_0, VAR_9,
   FUNC_0(1));
 }





 VAR_14 = FUNC_3(VAR_15, VAR_1, 0xbf, 0x93);
 if (VAR_14)
  return VAR_14;


 VAR_16 = VAR_11;
 VAR_17 = 0;
 if (VAR_13)
  VAR_17 = VAR_16;
 return FUNC_3(VAR_15, VAR_8, VAR_16, VAR_17);
}
