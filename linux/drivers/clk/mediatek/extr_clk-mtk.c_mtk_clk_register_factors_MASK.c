
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_fixed_factor {size_t id; int name; int div; int mult; int parent_name; } ;
struct clk_onecell_data {struct clk** clks; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;

void FUNC_5(const struct mtk_fixed_factor *VAR_1,
  int VAR_2, struct clk_onecell_data *VAR_3)
{
 int VAR_4;
 struct clk *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  const struct mtk_fixed_factor *VAR_6 = &VAR_1[VAR_4];

  if (VAR_3 && !FUNC_1(VAR_3->clks[VAR_6->id]))
   continue;

  VAR_5 = FUNC_3(((void*)0), VAR_6->name, VAR_6->parent_name,
    VAR_0, VAR_6->mult, VAR_6->div);

  if (FUNC_0(VAR_5)) {
   FUNC_4("Failed to register clk %s: %ld\n",
     VAR_6->name, FUNC_2(VAR_5));
   continue;
  }

  if (VAR_3)
   VAR_3->clks[VAR_6->id] = VAR_5;
 }
}
