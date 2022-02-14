
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct fapll_synth {int div; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;
 struct fapll_synth* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
        unsigned long VAR_2)
{
 struct fapll_synth *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4, VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 VAR_6 = FUNC_0(VAR_3->div) & VAR_0;
 VAR_5 = VAR_4 * VAR_6;

 return VAR_5;
}
