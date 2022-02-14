
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct regmap {int dummy; } ;
struct genpd_onecell_data {size_t num_domains; int ** domains; } ;
struct gdsc_desc {size_t num; struct gdsc** scs; struct device* dev; } ;
struct gdsc {int pd; scalar_t__ parent; struct reset_controller_dev* rcdev; struct regmap* regmap; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (struct device*,size_t,int,int ) ;
 struct genpd_onecell_data* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct gdsc*) ;
 int FUNC_3 (int ,struct genpd_onecell_data*) ;
 int FUNC_4 (scalar_t__,int *) ;

int FUNC_5(struct gdsc_desc *VAR_2,
    struct reset_controller_dev *VAR_3, struct regmap *VAR_4)
{
 int VAR_5, VAR_6;
 struct genpd_onecell_data *VAR_7;
 struct device *VAR_8 = VAR_2->dev;
 struct gdsc **VAR_9 = VAR_2->scs;
 size_t VAR_10 = VAR_2->num;

 VAR_7 = FUNC_1(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->domains = FUNC_0(VAR_8, VAR_10, sizeof(*VAR_7->domains),
         VAR_1);
 if (!VAR_7->domains)
  return -VAR_0;

 VAR_7->num_domains = VAR_10;
 for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
  if (!VAR_9[VAR_5])
   continue;
  VAR_9[VAR_5]->regmap = VAR_4;
  VAR_9[VAR_5]->rcdev = VAR_3;
  VAR_6 = FUNC_2(VAR_9[VAR_5]);
  if (VAR_6)
   return VAR_6;
  VAR_7->domains[VAR_5] = &VAR_9[VAR_5]->pd;
 }


 for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
  if (!VAR_9[VAR_5])
   continue;
  if (VAR_9[VAR_5]->parent)
   FUNC_4(VAR_9[VAR_5]->parent, &VAR_9[VAR_5]->pd);
 }

 return FUNC_3(VAR_8->of_node, VAR_7);
}
