
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m10v_clk_div_fixed_data {char const* parent_name; size_t onecell_idx; int div; int mult; int name; } ;
struct clk_hw_onecell_data {struct clk_hw** hws; } ;
struct clk_hw {int dummy; } ;


 struct clk_hw* FUNC_0 (int *,int ,char const*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct m10v_clk_div_fixed_data *VAR_0,
          struct clk_hw_onecell_data *VAR_1,
          const char *VAR_2)
{
 struct clk_hw *VAR_3;
 const char *VAR_4 = VAR_0->parent_name ?
    VAR_0->parent_name : VAR_2;

 VAR_3 = FUNC_0(((void*)0), VAR_0->name, VAR_4, 0,
       VAR_0->mult, VAR_0->div);

 if (VAR_0->onecell_idx >= 0)
  VAR_1->hws[VAR_0->onecell_idx] = VAR_3;
}
