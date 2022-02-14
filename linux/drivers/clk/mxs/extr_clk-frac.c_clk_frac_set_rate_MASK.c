
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_frac {int width; int shift; int busy; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct clk_frac* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_2, unsigned long VAR_3,
        unsigned long VAR_4)
{
 struct clk_frac *VAR_5 = FUNC_5(VAR_2);
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;
 u64 VAR_9;

 if (VAR_3 > VAR_4)
  return -VAR_0;

 VAR_9 = VAR_3;
 VAR_9 <<= VAR_5->width;
 FUNC_0(VAR_9, VAR_4);
 VAR_7 = VAR_9;

 if (!VAR_7)
  return -VAR_0;

 FUNC_3(&VAR_1, VAR_6);

 VAR_8 = FUNC_2(VAR_5->reg);
 VAR_8 &= ~(((1 << VAR_5->width) - 1) << VAR_5->shift);
 VAR_8 |= VAR_7 << VAR_5->shift;
 FUNC_6(VAR_8, VAR_5->reg);

 FUNC_4(&VAR_1, VAR_6);

 return FUNC_1(VAR_5->reg, VAR_5->busy);
}
