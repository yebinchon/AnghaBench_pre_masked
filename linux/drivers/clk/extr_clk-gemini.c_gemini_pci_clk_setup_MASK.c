
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; scalar_t__ flags; int * ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_gemini_pci {struct clk_hw hw; struct regmap* map; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int VAR_2 ;
 int FUNC_2 (struct clk_gemini_pci*) ;
 struct clk_gemini_pci* FUNC_3 (int,int ) ;

__attribute__((used)) static struct clk_hw *FUNC_4(const char *VAR_3,
        const char *VAR_4,
        struct regmap *VAR_5)
{
 struct clk_gemini_pci *VAR_6;
 struct clk_init_data VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7.name = VAR_3;
 VAR_7.ops = &VAR_2;
 VAR_7.flags = 0;
 VAR_7.parent_names = &VAR_4;
 VAR_7.num_parents = 1;
 VAR_6->map = VAR_5;
 VAR_6->hw.init = &VAR_7;

 VAR_8 = FUNC_1(((void*)0), &VAR_6->hw);
 if (VAR_8) {
  FUNC_2(VAR_6);
  return FUNC_0(VAR_8);
 }

 return &VAR_6->hw;
}
