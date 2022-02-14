
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct generic_pm_domain {int power_on; int power_off; int name; } ;
struct scmi_pm_domain {int domain; struct generic_pm_domain genpd; int name; struct scmi_handle const* handle; } ;
struct scmi_handle {TYPE_1__* power_ops; } ;
struct device {struct device_node* of_node; } ;
struct scmi_device {struct scmi_handle* handle; struct device dev; } ;
struct genpd_onecell_data {int num_domains; struct generic_pm_domain** domains; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int (* num_domains_get ) (struct scmi_handle const*) ;scalar_t__ (* state_get ) (struct scmi_handle const*,int,scalar_t__*) ;int (* name_get ) (struct scmi_handle const*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int) ;
 void* FUNC_2 (struct device*,int,int,int ) ;
 struct genpd_onecell_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device_node*,struct genpd_onecell_data*) ;
 int FUNC_5 (struct generic_pm_domain*,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct scmi_handle const*) ;
 int FUNC_7 (struct scmi_handle const*,int) ;
 scalar_t__ FUNC_8 (struct scmi_handle const*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct scmi_device *VAR_6)
{
 int VAR_7, VAR_8;
 struct device *VAR_9 = &VAR_6->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct scmi_pm_domain *VAR_11;
 struct genpd_onecell_data *VAR_12;
 struct generic_pm_domain **VAR_13;
 const struct scmi_handle *VAR_14 = VAR_6->handle;

 if (!VAR_14 || !VAR_14->power_ops)
  return -VAR_0;

 VAR_7 = VAR_14->power_ops->num_domains_get(VAR_14);
 if (VAR_7 < 0) {
  FUNC_0(VAR_9, "number of domains not found\n");
  return VAR_7;
 }

 VAR_11 = FUNC_2(VAR_9, VAR_7, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_3(VAR_9, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_9, VAR_7, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_11++) {
  u32 VAR_15;

  VAR_13[VAR_8] = &VAR_11->genpd;

  VAR_11->domain = VAR_8;
  VAR_11->handle = VAR_14;
  VAR_11->name = VAR_14->power_ops->name_get(VAR_14, VAR_8);
  VAR_11->genpd.name = VAR_11->name;
  VAR_11->genpd.power_off = VAR_4;
  VAR_11->genpd.power_on = VAR_5;

  if (VAR_14->power_ops->state_get(VAR_14, VAR_8, &VAR_15)) {
   FUNC_1(VAR_9, "failed to get state for domain %d\n", VAR_8);
   continue;
  }

  FUNC_5(&VAR_11->genpd, ((void*)0),
         VAR_15 == VAR_3);
 }

 VAR_12->domains = VAR_13;
 VAR_12->num_domains = VAR_7;

 FUNC_4(VAR_10, VAR_12);

 return 0;
}
