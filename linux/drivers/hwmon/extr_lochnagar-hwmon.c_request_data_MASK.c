
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_6, int VAR_7, u32 *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_1,
      VAR_5 |
      VAR_7 << VAR_0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_1, VAR_9,
     VAR_9 & VAR_4,
     1000, 10000);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_2, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 *VAR_8 = VAR_9 << 16;

 VAR_10 = FUNC_0(VAR_6, VAR_3, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 *VAR_8 |= VAR_9;

 return FUNC_2(VAR_6, VAR_1, 0);
}
