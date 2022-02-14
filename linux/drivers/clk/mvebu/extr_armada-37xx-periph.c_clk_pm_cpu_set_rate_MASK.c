
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct clk_pm_cpu {struct regmap* nb_pm_base; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct regmap*) ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned long,struct regmap*) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int*) ;
 int FUNC_4 (struct regmap*,unsigned int,unsigned int,unsigned int) ;
 struct clk_pm_cpu* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_6, unsigned long VAR_7,
          unsigned long VAR_8)
{
 struct clk_pm_cpu *VAR_9 = FUNC_5(VAR_6);
 struct regmap *VAR_10 = VAR_9->nb_pm_base;
 unsigned int VAR_11 = VAR_8 / VAR_7;
 unsigned int VAR_12;


 if (!FUNC_0(VAR_10))
  return -VAR_4;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  unsigned int VAR_13, VAR_14, VAR_15,
   VAR_16 = VAR_3;

  FUNC_1(VAR_12, &VAR_13, &VAR_16);

  FUNC_3(VAR_10, VAR_13, &VAR_15);
  VAR_15 >>= VAR_16;
  VAR_15 &= VAR_2;

  if (VAR_15 == VAR_11) {





   VAR_13 = VAR_0;
   VAR_14 = VAR_1;

   FUNC_2(VAR_7, VAR_10);

   FUNC_4(VAR_10, VAR_13, VAR_14, VAR_12);

   return VAR_7;
  }
 }


 return -VAR_4;
}
