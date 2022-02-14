
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_sama5d4_h32mx {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct clk_sama5d4_h32mx* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3, unsigned long VAR_4,
        unsigned long VAR_5)
{
 struct clk_sama5d4_h32mx *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7 = 0;

 if (VAR_5 != VAR_4 && (VAR_5 / 2) != VAR_4)
  return -VAR_2;

 if ((VAR_5 / 2) == VAR_4)
  VAR_7 = VAR_0;

 FUNC_0(VAR_6->regmap, VAR_1,
      VAR_0, VAR_7);

 return 0;
}
