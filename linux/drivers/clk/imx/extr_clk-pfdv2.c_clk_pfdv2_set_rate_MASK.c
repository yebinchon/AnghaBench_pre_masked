
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct clk_pfdv2 {int frac_off; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct clk_pfdv2* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2, unsigned long VAR_3,
         unsigned long VAR_4)
{
 struct clk_pfdv2 *VAR_5 = FUNC_4(VAR_2);
 unsigned long VAR_6;
 u64 VAR_7 = VAR_4;
 u32 VAR_8;
 u8 VAR_9;

 VAR_7 = VAR_7 * 18 + VAR_3 / 2;
 FUNC_0(VAR_7, VAR_3);
 VAR_9 = VAR_7;
 if (VAR_9 < 12)
  VAR_9 = 12;
 else if (VAR_9 > 35)
  VAR_9 = 35;

 FUNC_2(&VAR_1, VAR_6);
 VAR_8 = FUNC_1(VAR_5->reg);
 VAR_8 &= ~(VAR_0 << VAR_5->frac_off);
 VAR_8 |= VAR_9 << VAR_5->frac_off;
 FUNC_5(VAR_8, VAR_5->reg);
 FUNC_3(&VAR_1, VAR_6);

 return 0;
}
