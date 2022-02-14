
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_clk_data {size_t idx; scalar_t__ name; } ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct clk_hw_onecell_data {int num; struct regmap** hws; } ;
typedef struct regmap clk_hw ;


 int VAR_0 ;
 int VAR_1 ;
 struct regmap* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct device*,char*,scalar_t__,size_t) ;
 int FUNC_6 (struct device*,char*,int) ;
 struct clk_hw_onecell_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int,size_t) ;
 int FUNC_9 (int ,int ,struct clk_hw_onecell_data*) ;
 int VAR_3 ;
 struct uniphier_clk_data* FUNC_10 (struct device*) ;
 struct device_node* FUNC_11 (int ) ;
 int FUNC_12 (struct device_node*) ;
 struct regmap* FUNC_13 (struct device_node*) ;
 struct regmap* FUNC_14 (struct device*,struct regmap*,struct uniphier_clk_data const*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct clk_hw_onecell_data *VAR_6;
 const struct uniphier_clk_data *VAR_7, *VAR_8;
 struct regmap *VAR_9;
 struct device_node *VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_10(VAR_5);
 if (FUNC_4(!VAR_8))
  return -VAR_0;

 VAR_10 = FUNC_11(VAR_5->of_node);
 VAR_9 = FUNC_13(VAR_10);
 FUNC_12(VAR_10);
 if (FUNC_1(VAR_9)) {
  FUNC_6(VAR_5, "failed to get regmap (error %ld)\n",
   FUNC_2(VAR_9));
  return FUNC_2(VAR_9);
 }

 for (VAR_7 = VAR_8; VAR_7->name; VAR_7++)
  VAR_11 = FUNC_8(VAR_11, VAR_7->idx + 1);

 VAR_6 = FUNC_7(VAR_5,
   sizeof(*VAR_6) + VAR_11 * sizeof(struct clk_hw *),
   VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->num = VAR_11;


 while (--VAR_11 >= 0)
  VAR_6->hws[VAR_11] = FUNC_0(-VAR_0);

 for (VAR_7 = VAR_8; VAR_7->name; VAR_7++) {
  struct clk_hw *VAR_12;

  FUNC_5(VAR_5, "register %s (index=%d)\n", VAR_7->name, VAR_7->idx);
  VAR_12 = FUNC_14(VAR_5, VAR_9, VAR_7);
  if (FUNC_3(FUNC_1(VAR_12), "failed to register %s", VAR_7->name))
   continue;

  if (VAR_7->idx >= 0)
   VAR_6->hws[VAR_7->idx] = VAR_12;
 }

 return FUNC_9(VAR_5->of_node, VAR_3,
          VAR_6);
}
