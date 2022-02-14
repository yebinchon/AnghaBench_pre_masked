
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct regmap {int dummy; } ;
struct clk_pm_cpu {struct regmap* nb_pm_base; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (int,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int,unsigned int) ;
 struct clk_pm_cpu* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_4, u8 VAR_5)
{
 struct clk_pm_cpu *VAR_6 = FUNC_4(VAR_4);
 struct regmap *VAR_7 = VAR_6->nb_pm_base;
 int VAR_8;





 if (FUNC_0(VAR_7) || FUNC_1(VAR_7))
  return -VAR_2;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  unsigned int VAR_9, VAR_10, VAR_11,
   VAR_12 = VAR_1;

  FUNC_2(VAR_8, &VAR_9, &VAR_12);

  VAR_11 = VAR_5 << VAR_12;
  VAR_10 = VAR_0 << VAR_12;
  FUNC_3(VAR_7, VAR_9, VAR_10, VAR_11);
 }
 return 0;
}
