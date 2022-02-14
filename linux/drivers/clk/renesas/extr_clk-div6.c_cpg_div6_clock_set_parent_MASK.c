
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct div6_clock {int src_shift; size_t* parents; int reg; int src_width; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (struct clk_hw*) ;
 size_t FUNC_2 (int ) ;
 struct div6_clock* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct div6_clock *VAR_3 = FUNC_3(VAR_1);
 u8 VAR_4;
 u32 VAR_5;

 if (VAR_2 >= FUNC_1(VAR_1))
  return -VAR_0;

 VAR_5 = ~((FUNC_0(VAR_3->src_width) - 1) << VAR_3->src_shift);
 VAR_4 = VAR_3->parents[VAR_2];

 FUNC_4((FUNC_2(VAR_3->reg) & VAR_5) | (VAR_4 << VAR_3->src_shift),
        VAR_3->reg);

 return 0;
}
