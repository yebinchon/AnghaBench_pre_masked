
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hb_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 struct hb_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_5,
      unsigned long VAR_6)
{
 struct hb_clk *VAR_7 = FUNC_1(VAR_5);
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_7->reg);
 if (VAR_11 & VAR_4)
  return VAR_6;

 VAR_8 = (VAR_11 & VAR_0) >> VAR_1;
 VAR_9 = (VAR_11 & VAR_2) >> VAR_3;
 VAR_10 = VAR_6 * (VAR_8 + 1);

 return VAR_10 / (1 << VAR_9);
}
