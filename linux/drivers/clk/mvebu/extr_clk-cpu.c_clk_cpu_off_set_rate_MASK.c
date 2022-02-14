
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpu_clk {int cpu; scalar_t__ reg_base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct cpu_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_3, unsigned long VAR_4,
    unsigned long VAR_5)

{
 struct cpu_clk *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7, VAR_8;
 u32 VAR_9;

 VAR_8 = VAR_5 / VAR_4;
 VAR_7 = (FUNC_0(VAR_6->reg_base + VAR_2)
  & (~(VAR_1 << (VAR_6->cpu * 8))))
  | (VAR_8 << (VAR_6->cpu * 8));
 FUNC_3(VAR_7, VAR_6->reg_base + VAR_2);

 VAR_9 = 1 << (20 + VAR_6->cpu);

 VAR_7 = FUNC_0(VAR_6->reg_base + VAR_0)
     | VAR_9;
 FUNC_3(VAR_7, VAR_6->reg_base + VAR_0);


 VAR_7 = FUNC_0(VAR_6->reg_base + VAR_0)
     | 1 << 24;
 FUNC_3(VAR_7, VAR_6->reg_base + VAR_0);


 FUNC_2(1000);
 VAR_7 &= ~(VAR_9 | 1 << 24);
 FUNC_3(VAR_7, VAR_6->reg_base + VAR_0);
 FUNC_2(1000);

 return 0;
}
