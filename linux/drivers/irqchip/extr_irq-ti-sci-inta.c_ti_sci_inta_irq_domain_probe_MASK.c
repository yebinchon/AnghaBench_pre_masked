
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_inta_irq_domain {int vint_mutex; int vint_list; int * vint; int * base; int * global_event; int * sci; struct platform_device* pdev; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {int id; struct device dev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct device_node* FUNC_4 (struct device*) ;
 int * FUNC_5 (struct device*,struct resource*) ;
 struct ti_sci_inta_irq_domain* FUNC_6 (struct device*,int,int ) ;
 int * FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (int *,struct device*,int ,char*) ;
 struct irq_domain* FUNC_9 (struct device_node*,int ,int *,struct ti_sci_inta_irq_domain*) ;
 int FUNC_10 (struct irq_domain*) ;
 struct irq_domain* FUNC_11 (struct device_node*) ;
 int FUNC_12 (int *) ;
 struct device_node* FUNC_13 (struct device_node*) ;
 int FUNC_14 (struct device_node*) ;
 int FUNC_15 (int ,char*,int *) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (int *) ;
 int VAR_6 ;
 struct irq_domain* FUNC_18 (int ,int *,struct irq_domain*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_8)
{
 struct irq_domain *VAR_9, *VAR_10, *VAR_11;
 struct device_node *VAR_12, *VAR_13;
 struct ti_sci_inta_irq_domain *VAR_14;
 struct device *VAR_15 = &VAR_8->dev;
 struct resource *VAR_16;
 int VAR_17;

 VAR_13 = FUNC_4(VAR_15);
 VAR_12 = FUNC_13(VAR_13);
 if (!VAR_12) {
  FUNC_3(VAR_15, "Failed to get IRQ parent node\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_11(VAR_12);
 if (!VAR_9)
  return -VAR_3;

 VAR_14 = FUNC_6(VAR_15, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->pdev = VAR_8;
 VAR_14->sci = FUNC_7(VAR_15, "ti,sci");
 if (FUNC_1(VAR_14->sci)) {
  VAR_17 = FUNC_2(VAR_14->sci);
  if (VAR_17 != -VAR_3)
   FUNC_3(VAR_15, "ti,sci read fail %d\n", VAR_17);
  VAR_14->sci = ((void*)0);
  return VAR_17;
 }

 VAR_17 = FUNC_15(VAR_15->of_node, "ti,sci-dev-id", &VAR_8->id);
 if (VAR_17) {
  FUNC_3(VAR_15, "missing 'ti,sci-dev-id' property\n");
  return -VAR_0;
 }

 VAR_14->vint = FUNC_8(VAR_14->sci, VAR_15, VAR_8->id,
       "ti,sci-rm-range-vint");
 if (FUNC_1(VAR_14->vint)) {
  FUNC_3(VAR_15, "VINT resource allocation failed\n");
  return FUNC_2(VAR_14->vint);
 }

 VAR_14->global_event = FUNC_8(VAR_14->sci, VAR_15, VAR_8->id,
      "ti,sci-rm-range-global-event");
 if (FUNC_1(VAR_14->global_event)) {
  FUNC_3(VAR_15, "Global event resource allocation failed\n");
  return FUNC_2(VAR_14->global_event);
 }

 VAR_16 = FUNC_16(VAR_8, VAR_5, 0);
 VAR_14->base = FUNC_5(VAR_15, VAR_16);
 if (FUNC_1(VAR_14->base))
  return -VAR_1;

 VAR_10 = FUNC_9(FUNC_4(VAR_15),
           FUNC_17(VAR_14->vint),
           &VAR_6, VAR_14);
 if (!VAR_10) {
  FUNC_3(VAR_15, "Failed to allocate IRQ domain\n");
  return -VAR_2;
 }

 VAR_11 = FUNC_18(FUNC_14(VAR_13),
      &VAR_7,
      VAR_10);
 if (!VAR_11) {
  FUNC_10(VAR_10);
  FUNC_3(VAR_15, "Failed to allocate msi domain\n");
  return -VAR_2;
 }

 FUNC_0(&VAR_14->vint_list);
 FUNC_12(&VAR_14->vint_mutex);

 return 0;
}
