
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
typedef enum lochnagar_measure_mode { ____Placeholder_lochnagar_measure_mode } lochnagar_measure_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_8, int VAR_9,
     enum lochnagar_measure_mode VAR_10, int VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;

 VAR_9 = 1 << (VAR_9 + VAR_6);

 VAR_13 = FUNC_2(VAR_8, VAR_1,
      VAR_5 | VAR_9 | VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_8, VAR_2, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_8, VAR_3,
      VAR_0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_8, VAR_3, VAR_12,
     VAR_12 & VAR_4,
     1000, 10000);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_8, VAR_3,
      VAR_7);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_0((VAR_11 * 3) / 2);

 VAR_13 = FUNC_1(VAR_8, VAR_3, VAR_12,
     VAR_12 & VAR_4,
     5000, 200000);
 if (VAR_13 < 0)
  return VAR_13;

 return FUNC_2(VAR_8, VAR_3, 0);
}
