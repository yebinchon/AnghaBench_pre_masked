
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct irq_domain* parent; } ;
struct device_node {int dummy; } ;
struct alpine_msix_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct irq_domain* FUNC_0 (int *,int *,struct alpine_msix_data*) ;
 int FUNC_1 (struct irq_domain*) ;
 struct irq_domain* FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 struct irq_domain* FUNC_5 (int ,int *,struct irq_domain*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct alpine_msix_data *VAR_5,
        struct device_node *VAR_6)
{
 struct irq_domain *VAR_7, *VAR_8, *VAR_9;
 struct device_node *VAR_10;

 VAR_10 = FUNC_3(VAR_6);
 if (!VAR_10) {
  FUNC_6("Failed to find the GIC node\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_10);
 if (!VAR_9) {
  FUNC_6("Failed to find the GIC domain\n");
  return -VAR_2;
 }

 VAR_7 = FUNC_0(((void*)0),
         &VAR_4,
         VAR_5);
 if (!VAR_7) {
  FUNC_6("Failed to create the MSIX middle domain\n");
  return -VAR_1;
 }

 VAR_7->parent = VAR_9;

 VAR_8 = FUNC_5(FUNC_4(VAR_6),
            &VAR_3,
            VAR_7);
 if (!VAR_8) {
  FUNC_6("Failed to create MSI domain\n");
  FUNC_1(VAR_7);
  return -VAR_1;
 }

 return 0;
}
