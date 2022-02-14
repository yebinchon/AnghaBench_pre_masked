
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_i2s_mux {int bus_id; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct clk_i2s_mux* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct clk_i2s_mux *VAR_3 = FUNC_2(VAR_1);

 return FUNC_1(VAR_3->regmap, VAR_0,
      FUNC_0(VAR_3->bus_id), VAR_2 << VAR_3->bus_id);
}
