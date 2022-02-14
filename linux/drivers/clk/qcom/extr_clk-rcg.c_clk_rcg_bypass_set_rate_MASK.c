
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rcg {int freq_tbl; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_rcg*,int ) ;
 struct clk_rcg* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 struct clk_rcg *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_3->freq_tbl);
}
