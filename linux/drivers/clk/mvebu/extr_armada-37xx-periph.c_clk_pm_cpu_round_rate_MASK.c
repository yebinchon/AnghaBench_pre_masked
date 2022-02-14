
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct clk_pm_cpu {struct regmap* nb_pm_base; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 long VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct regmap*) ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int*) ;
 struct clk_pm_cpu* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_4, unsigned long VAR_5,
      unsigned long *VAR_6)
{
 struct clk_pm_cpu *VAR_7 = FUNC_3(VAR_4);
 struct regmap *VAR_8 = VAR_7->nb_pm_base;
 unsigned int VAR_9 = *VAR_6 / VAR_5;
 unsigned int VAR_10;

 if (!FUNC_0(VAR_8))
  return -VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  unsigned int VAR_11, VAR_12, VAR_13 = VAR_1;

  FUNC_1(VAR_10, &VAR_11, &VAR_13);

  FUNC_2(VAR_8, VAR_11, &VAR_12);

  VAR_12 >>= VAR_13;
  VAR_12 &= VAR_0;
  if (VAR_12 == VAR_9)





   return *VAR_6 / VAR_9;
 }


 return -VAR_2;
}
