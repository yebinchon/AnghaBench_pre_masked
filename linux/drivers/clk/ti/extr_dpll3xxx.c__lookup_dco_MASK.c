
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef unsigned long u16 ;
struct clk_hw_omap {int hw; } ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct clk_hw_omap *VAR_0, u8 *VAR_1, u16 VAR_2, u8 VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_5 = FUNC_1(FUNC_0(&VAR_0->hw));
 VAR_4 = (VAR_5 / VAR_3) * VAR_2;

 if (VAR_4 < 1000000000)
  *VAR_1 = 2;
 else
  *VAR_1 = 4;
}
