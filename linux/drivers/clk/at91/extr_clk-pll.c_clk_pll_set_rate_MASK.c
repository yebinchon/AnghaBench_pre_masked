
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct clk_pll {void* mul; void* div; void* range; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (struct clk_pll*,unsigned long,unsigned long,void**,void**,void**) ;
 struct clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct clk_pll *VAR_3 = FUNC_1(VAR_0);
 long VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2,
           &VAR_5, &VAR_6, &VAR_7);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->range = VAR_7;
 VAR_3->div = VAR_5;
 VAR_3->mul = VAR_6;

 return 0;
}
