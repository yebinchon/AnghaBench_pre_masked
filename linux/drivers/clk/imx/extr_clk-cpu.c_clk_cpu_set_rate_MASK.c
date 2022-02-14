
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_cpu {int div; int pll; int mux; int step; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 struct clk_cpu* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct clk_cpu *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3->mux, VAR_3->step);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3->pll, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3->mux, VAR_3->pll);
  return VAR_4;
 }

 FUNC_0(VAR_3->mux, VAR_3->pll);


 FUNC_1(VAR_3->div, VAR_1);

 return 0;
}
