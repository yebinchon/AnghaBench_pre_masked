
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mtk_mux {size_t id; struct device_node* name; } ;
struct device_node {int dummy; } ;
struct clk_onecell_data {struct regmap** clks; } ;
typedef struct regmap clk ;
typedef int spinlock_t ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 struct regmap* FUNC_3 (struct mtk_mux const*,struct regmap*,int *) ;
 int FUNC_4 (char*,struct device_node*,int) ;
 struct regmap* FUNC_5 (struct device_node*) ;

int FUNC_6(const struct mtk_mux *VAR_0,
      int VAR_1, struct device_node *VAR_2,
      spinlock_t *VAR_3,
      struct clk_onecell_data *VAR_4)
{
 struct regmap *VAR_5;
 struct clk *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_4("Cannot find regmap for %pOF: %ld\n", VAR_2,
         FUNC_2(VAR_5));
  return FUNC_2(VAR_5);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  const struct mtk_mux *VAR_8 = &VAR_0[VAR_7];

  if (FUNC_1(VAR_4->clks[VAR_8->id])) {
   VAR_6 = FUNC_3(VAR_8, VAR_5, VAR_3);

   if (FUNC_0(VAR_6)) {
    FUNC_4("Failed to register clk %s: %ld\n",
           VAR_8->name, FUNC_2(VAR_6));
    continue;
   }

   VAR_4->clks[VAR_8->id] = VAR_6;
  }
 }

 return 0;
}
