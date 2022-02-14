
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct cpu_clk {int cpu; scalar_t__ reg_base; scalar_t__ pmu_dfs; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (scalar_t__) ;
 struct cpu_clk* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_9, unsigned long VAR_10,
          unsigned long VAR_11)
{
 u32 VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15;
 struct cpu_clk *VAR_16 = FUNC_3(VAR_9);





 if (!VAR_16->pmu_dfs)
  return -VAR_0;

 VAR_15 = FUNC_0(VAR_9);

 VAR_12 = FUNC_2(VAR_16->reg_base + VAR_4);
 VAR_13 = (VAR_12 >> VAR_3) &
  VAR_8;


 if (VAR_10 == 2 * VAR_15)
  VAR_14 = VAR_13 / 2;

 else
  VAR_14 = VAR_13;

 if (VAR_14 == 0)
  VAR_14 = 1;

 VAR_12 = FUNC_2(VAR_16->pmu_dfs);
 VAR_12 &= ~(VAR_1 << VAR_2);
 VAR_12 |= (VAR_14 << VAR_2);
 FUNC_4(VAR_12, VAR_16->pmu_dfs);

 VAR_12 = FUNC_2(VAR_16->reg_base + VAR_5);
 VAR_12 |= (VAR_6 <<
  VAR_7);
 FUNC_4(VAR_12, VAR_16->reg_base + VAR_5);

 return FUNC_1(VAR_16->cpu);
}
