
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mmp_clk_mix {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct mmp_clk_mix*,unsigned int) ;
 int FUNC_1 (struct mmp_clk_mix*,int ) ;
 int FUNC_2 (struct mmp_clk_mix*,int ,int ,int,int) ;
 struct mmp_clk_mix* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0,
      unsigned long VAR_1,
      unsigned long VAR_2,
      u8 VAR_3)
{
 struct mmp_clk_mix *VAR_4 = FUNC_3(VAR_0);
 unsigned int VAR_5;
 u32 VAR_6, VAR_7;

 VAR_5 = VAR_2 / VAR_1;
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 VAR_7 = FUNC_1(VAR_4, VAR_3);

 return FUNC_2(VAR_4, VAR_7, VAR_6, 1, 1);
}
