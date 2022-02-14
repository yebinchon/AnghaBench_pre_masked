
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kona_clk {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct kona_clk*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct kona_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct kona_clk *VAR_1;

 if (!VAR_0)
  return;

 FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1);
}
