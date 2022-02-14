
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct generic_pm_domain {int name; } ;
struct imx_sc_pm_domain {struct generic_pm_domain pd; } ;
struct imx_sc_pd_soc {int num_ranges; struct imx_sc_pd_range* pd_ranges; } ;
struct imx_sc_pd_range {int num; } ;
struct genpd_onecell_data {int xlate; scalar_t__ num_domains; struct generic_pm_domain** domains; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct imx_sc_pm_domain*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 struct generic_pm_domain** FUNC_2 (struct device*,scalar_t__,int,int ) ;
 struct genpd_onecell_data* FUNC_3 (struct device*,int,int ) ;
 struct imx_sc_pm_domain* FUNC_4 (struct device*,int,struct imx_sc_pd_range const*) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct genpd_onecell_data*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
        const struct imx_sc_pd_soc *VAR_4)
{
 const struct imx_sc_pd_range *VAR_5 = VAR_4->pd_ranges;
 struct generic_pm_domain **VAR_6;
 struct genpd_onecell_data *VAR_7;
 struct imx_sc_pm_domain *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_4->num_ranges; VAR_10++)
  VAR_9 += VAR_5[VAR_10].num;

 VAR_6 = FUNC_2(VAR_3, VAR_9, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4->num_ranges; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_5[VAR_10].num; VAR_11++) {
   VAR_8 = FUNC_4(VAR_3, VAR_11, &VAR_5[VAR_10]);
   if (FUNC_0(VAR_8))
    continue;

   VAR_6[VAR_9++] = &VAR_8->pd;
   FUNC_1(VAR_3, "added power domain %s\n", VAR_8->pd.name);
  }
 }

 VAR_7->domains = VAR_6;
 VAR_7->num_domains = VAR_9;
 VAR_7->xlate = VAR_2;

 FUNC_5(VAR_3->of_node, VAR_7);

 return 0;
}
