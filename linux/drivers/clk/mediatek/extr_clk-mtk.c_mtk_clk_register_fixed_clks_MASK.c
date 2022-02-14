
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_fixed_clk {size_t id; int name; int rate; int parent; } ;
struct clk_onecell_data {struct clk** clks; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;

void FUNC_5(const struct mtk_fixed_clk *VAR_0,
  int VAR_1, struct clk_onecell_data *VAR_2)
{
 int VAR_3;
 struct clk *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  const struct mtk_fixed_clk *VAR_5 = &VAR_0[VAR_3];

  if (VAR_2 && !FUNC_1(VAR_2->clks[VAR_5->id]))
   continue;

  VAR_4 = FUNC_3(((void*)0), VAR_5->name, VAR_5->parent, 0,
           VAR_5->rate);

  if (FUNC_0(VAR_4)) {
   FUNC_4("Failed to register clk %s: %ld\n",
     VAR_5->name, FUNC_2(VAR_4));
   continue;
  }

  if (VAR_2)
   VAR_2->clks[VAR_5->id] = VAR_4;
 }
}
