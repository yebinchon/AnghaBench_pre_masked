
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_hw {int dummy; } ;
struct clk_divider {int flags; int width; } ;


 long FUNC_0 (int,int) ;
 int FUNC_1 (struct clk_hw*,unsigned long,unsigned long*,int ,int ) ;
 struct clk_divider* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long *VAR_2)
{
 struct clk_divider *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2,
           VAR_3->width,
           VAR_3->flags);

 return FUNC_0(((u64)*VAR_2 * 2), VAR_4 * 2 + 3);
}
