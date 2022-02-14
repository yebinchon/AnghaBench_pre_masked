
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int power_on; int power_off; int name; } ;
struct scpi_pm_domain {int domain; struct generic_pm_domain genpd; int name; struct scpi_ops* ops; } ;
struct scpi_ops {int device_get_power_state; int device_set_power_state; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct genpd_onecell_data {int num_domains; struct generic_pm_domain** domains; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*,int,int,int ) ;
 struct genpd_onecell_data* FUNC_2 (struct device*,int,int ) ;
 struct scpi_ops* FUNC_3 () ;
 int FUNC_4 (struct device_node*,struct genpd_onecell_data*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (struct generic_pm_domain*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,struct device_node*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 struct scpi_pm_domain *VAR_10;
 struct genpd_onecell_data *VAR_11;
 struct generic_pm_domain **VAR_12;
 struct scpi_ops *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_3();
 if (!VAR_13)
  return -VAR_3;

 if (!VAR_9) {
  FUNC_0(VAR_8, "device tree node not found\n");
  return -VAR_1;
 }

 if (!VAR_13->device_set_power_state ||
     !VAR_13->device_get_power_state) {
  FUNC_0(VAR_8, "power domains not supported in the firmware\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_5(VAR_9, "num-domains", &VAR_15);
 if (VAR_14) {
  FUNC_0(VAR_8, "number of domains not found\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_1(VAR_8, VAR_15, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_2(VAR_8, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_1(VAR_8, VAR_15, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++, VAR_10++) {
  VAR_12[VAR_16] = &VAR_10->genpd;

  VAR_10->domain = VAR_16;
  VAR_10->ops = VAR_13;
  FUNC_7(VAR_10->name, "%pOFn.%d", VAR_9, VAR_16);
  VAR_10->genpd.name = VAR_10->name;
  VAR_10->genpd.power_off = VAR_5;
  VAR_10->genpd.power_on = VAR_6;







  FUNC_6(&VAR_10->genpd, ((void*)0), 1);
 }

 VAR_11->domains = VAR_12;
 VAR_11->num_domains = VAR_15;

 FUNC_4(VAR_9, VAR_11);

 return 0;
}
