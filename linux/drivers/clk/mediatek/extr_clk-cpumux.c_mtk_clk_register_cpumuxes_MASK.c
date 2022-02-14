
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mtk_composite {size_t id; struct device_node* name; } ;
struct device_node {int dummy; } ;
struct clk_onecell_data {struct regmap** clks; } ;
typedef struct regmap clk ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct mtk_composite const*,struct regmap*) ;
 int FUNC_3 (char*,struct device_node*,int) ;
 struct regmap* FUNC_4 (struct device_node*) ;

int FUNC_5(struct device_node *VAR_0,
         const struct mtk_composite *VAR_1, int VAR_2,
         struct clk_onecell_data *VAR_3)
{
 int VAR_4;
 struct clk *VAR_5;
 struct regmap *VAR_6;

 VAR_6 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_3("Cannot find regmap for %pOF: %ld\n", VAR_0,
         FUNC_1(VAR_6));
  return FUNC_1(VAR_6);
 }

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  const struct mtk_composite *VAR_7 = &VAR_1[VAR_4];

  VAR_5 = FUNC_2(VAR_7, VAR_6);
  if (FUNC_0(VAR_5)) {
   FUNC_3("Failed to register clk %s: %ld\n",
          VAR_7->name, FUNC_1(VAR_5));
   continue;
  }

  VAR_3->clks[VAR_7->id] = VAR_5;
 }

 return 0;
}
