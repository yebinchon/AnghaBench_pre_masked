
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun9i_a80_cpus_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sun9i_a80_cpus_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_1,
          unsigned long VAR_2)
{
 struct sun9i_a80_cpus_clk *VAR_3 = FUNC_4(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5;


 VAR_5 = FUNC_3(VAR_3->reg);


 if (FUNC_1(VAR_5) == VAR_0)
  VAR_2 /= FUNC_2(VAR_5) + 1;


 VAR_4 = VAR_2 / (FUNC_0(VAR_5) + 1);

 return VAR_4;
}
