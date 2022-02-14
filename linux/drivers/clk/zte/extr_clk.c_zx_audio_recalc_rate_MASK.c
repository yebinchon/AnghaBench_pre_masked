
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_zx_audio {int reg_base; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ) ;
 struct clk_zx_audio* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct clk_zx_audio *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->reg_base);
 return FUNC_0(VAR_3, VAR_1);
}
