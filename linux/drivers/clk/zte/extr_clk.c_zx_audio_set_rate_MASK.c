
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_zx_audio {int reg_base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 struct clk_zx_audio* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 struct clk_zx_audio *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_4, VAR_3->reg_base);

 return 0;
}
