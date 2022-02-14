
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct lm95245_data {struct regmap* regmap; } ;
struct device {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct lm95245_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regmap*,int,int*) ;
 long FUNC_2 (int,int) ;
 long FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_20, u32 VAR_21, int VAR_22,
        long *VAR_23)
{
 struct lm95245_data *VAR_24 = FUNC_0(VAR_20);
 struct regmap *VAR_25 = VAR_24->regmap;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

 switch (VAR_21) {
 case 133:
  VAR_27 = VAR_22 ? VAR_13 :
     VAR_10;
  VAR_28 = VAR_22 ? VAR_11 :
     VAR_9;
  VAR_26 = FUNC_1(VAR_25, VAR_27, &VAR_29);
  if (VAR_26 < 0)
   return VAR_26;
  VAR_26 = FUNC_1(VAR_25, VAR_28, &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;






  if (!VAR_22 || (VAR_30 & 0x80) || VAR_30 < 0x7f) {
   *VAR_23 = FUNC_2(VAR_30, VAR_29);
   return 0;
  }
  VAR_26 = FUNC_1(VAR_25, VAR_14,
      &VAR_29);
  if (VAR_26 < 0)
   return VAR_26;
  VAR_26 = FUNC_1(VAR_25, VAR_12,
      &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = FUNC_3(VAR_30, VAR_29);
  return 0;
 case 132:
  VAR_26 = FUNC_1(VAR_25, VAR_7,
      &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = VAR_30 * 1000;
  return 0;
 case 137:
  VAR_28 = VAR_22 ? VAR_8 :
     VAR_4;
  VAR_26 = FUNC_1(VAR_25, VAR_28, &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = VAR_30 * 1000;
  return 0;
 case 130:
  VAR_26 = FUNC_1(VAR_25, VAR_7,
      &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  VAR_26 = FUNC_1(VAR_25, VAR_2,
      &VAR_29);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = (VAR_30 - VAR_29) * 1000;
  return 0;
 case 135:
  VAR_28 = VAR_22 ? VAR_8 :
     VAR_4;
  VAR_26 = FUNC_1(VAR_25, VAR_28, &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  VAR_26 = FUNC_1(VAR_25, VAR_2,
      &VAR_29);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = (VAR_30 - VAR_29) * 1000;
  return 0;
 case 128:
  VAR_26 = FUNC_1(VAR_25, VAR_3, &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = (VAR_30 & VAR_0) ? 1 : 2;
  return 0;
 case 129:
  VAR_26 = FUNC_1(VAR_25, VAR_6,
      &VAR_29);
  if (VAR_26 < 0)
   return VAR_26;
  VAR_26 = FUNC_1(VAR_25, VAR_5,
      &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = FUNC_2(VAR_30, VAR_29);
  return 0;
 case 131:
  VAR_26 = FUNC_1(VAR_25, VAR_15, &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = !!(VAR_30 & VAR_18);
  return 0;
 case 136:
  VAR_26 = FUNC_1(VAR_25, VAR_15, &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = !!(VAR_30 & (VAR_22 ? VAR_19 : VAR_17));
  return 0;
 case 134:
  VAR_26 = FUNC_1(VAR_25, VAR_15, &VAR_30);
  if (VAR_26 < 0)
   return VAR_26;
  *VAR_23 = !!(VAR_30 & VAR_16);
  return 0;
 default:
  return -VAR_1;
 }
}
