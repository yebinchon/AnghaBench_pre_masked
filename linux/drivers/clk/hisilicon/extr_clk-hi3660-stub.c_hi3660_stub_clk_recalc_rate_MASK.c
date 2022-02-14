
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hi3660_stub_clk {int rate; int id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct hi3660_stub_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
       unsigned long VAR_3)
{
 struct hi3660_stub_clk *VAR_4 = FUNC_1(VAR_2);





 VAR_4->rate = FUNC_0(VAR_1 + (VAR_4->id << 2)) * VAR_0;
 return VAR_4->rate;
}
