
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int msi_domain; int of_node; struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct mvebu_icu_msi_data {int * subset_data; void* icu; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*) ;
 struct mvebu_icu_msi_data* FUNC_2 (struct device*,int,int ) ;
 struct device_node* FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ,int ) ;
 struct irq_domain* FUNC_6 (struct device*,int ,int ,int *,struct mvebu_icu_msi_data*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_10)
{
 struct mvebu_icu_msi_data *VAR_11;
 struct device_node *VAR_12;
 struct device *VAR_13 = &VAR_10->dev;
 struct irq_domain *VAR_14;

 VAR_11 = FUNC_2(VAR_13, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 if (FUNC_7(&VAR_6)) {
  VAR_11->icu = FUNC_1(VAR_13);
  VAR_11->subset_data = &VAR_8;
 } else {
  VAR_11->icu = FUNC_1(VAR_13->parent);
  VAR_11->subset_data = FUNC_4(VAR_13);
 }

 VAR_13->msi_domain = FUNC_5(VAR_13, VAR_13->of_node,
         VAR_0);
 if (!VAR_13->msi_domain)
  return -VAR_3;

 VAR_12 = FUNC_3(VAR_13->msi_domain);
 if (!VAR_12)
  return -VAR_1;

 VAR_14 = FUNC_6(VAR_13, VAR_5,
           VAR_9,
           &VAR_7,
           VAR_11);
 if (!VAR_14) {
  FUNC_0(VAR_13, "Failed to create ICU MSI domain\n");
  return -VAR_2;
 }

 return 0;
}
