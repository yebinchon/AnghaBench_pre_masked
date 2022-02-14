
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clk_peripheral {scalar_t__ id; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 struct clk_peripheral* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_4)
{
 struct clk_peripheral *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = VAR_0;
 unsigned int VAR_7;
 u32 VAR_8 = VAR_5->id;

 if (VAR_8 < VAR_3)
  return 1;
 if (VAR_8 > VAR_2)
  VAR_6 = VAR_1;
 FUNC_1(VAR_5->regmap, VAR_6, &VAR_7);

 return VAR_7 & FUNC_0(VAR_8) ? 1 : 0;
}
