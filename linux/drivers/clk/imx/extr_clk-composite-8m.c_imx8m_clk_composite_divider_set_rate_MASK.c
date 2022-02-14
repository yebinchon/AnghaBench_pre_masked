
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_divider {int shift; int lock; int reg; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned long,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 struct clk_divider* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_3,
     unsigned long VAR_4,
     unsigned long VAR_5)
{
 struct clk_divider *VAR_6 = FUNC_5(VAR_3);
 unsigned long VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_1(VAR_4, VAR_5,
      &VAR_8, &VAR_9);
 if (VAR_10)
  return -VAR_0;

 FUNC_3(VAR_6->lock, VAR_7);

 VAR_11 = FUNC_2(VAR_6->reg);
 VAR_11 &= ~((FUNC_0(VAR_6->width) << VAR_6->shift) |
   (FUNC_0(VAR_2) << VAR_1));

 VAR_11 |= (u32)(VAR_8 - 1) << VAR_6->shift;
 VAR_11 |= (u32)(VAR_9 - 1) << VAR_1;
 FUNC_6(VAR_11, VAR_6->reg);

 FUNC_4(VAR_6->lock, VAR_7);

 return VAR_10;
}
