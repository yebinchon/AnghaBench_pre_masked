
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct clk_ref {int idx; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct clk_ref* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 struct clk_ref *VAR_4 = FUNC_4(VAR_1);
 unsigned long VAR_5;
 u64 VAR_6 = VAR_3;
 u32 VAR_7;
 u8 VAR_8, VAR_9 = VAR_4->idx * 8;

 VAR_6 = VAR_6 * 18 + VAR_2 / 2;
 FUNC_0(VAR_6, VAR_2);
 VAR_8 = VAR_6;

 if (VAR_8 < 18)
  VAR_8 = 18;
 else if (VAR_8 > 35)
  VAR_8 = 35;

 FUNC_2(&VAR_0, VAR_5);

 VAR_7 = FUNC_1(VAR_4->reg);
 VAR_7 &= ~(0x3f << VAR_9);
 VAR_7 |= VAR_8 << VAR_9;
 FUNC_5(VAR_7, VAR_4->reg);

 FUNC_3(&VAR_0, VAR_5);

 return 0;
}
