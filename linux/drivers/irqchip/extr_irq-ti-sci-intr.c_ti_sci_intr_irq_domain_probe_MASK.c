
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_intr_irq_domain {int * dst_irq; int dst_id; int * sci; int type; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*) ;
 struct ti_sci_intr_irq_domain* FUNC_4 (struct device*,int,int ) ;
 int * FUNC_5 (struct device*,char*) ;
 int * FUNC_6 (int *,struct device*,int ,char*) ;
 struct irq_domain* FUNC_7 (struct irq_domain*,int ,int ,int ,int *,struct ti_sci_intr_irq_domain*) ;
 struct irq_domain* FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct irq_domain *VAR_7, *VAR_8;
 struct ti_sci_intr_irq_domain *VAR_9;
 struct device_node *VAR_10;
 struct device *VAR_11 = &VAR_6->dev;
 int VAR_12;

 VAR_10 = FUNC_9(FUNC_3(VAR_11));
 if (!VAR_10) {
  FUNC_2(VAR_11, "Failed to get IRQ parent node\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_8(VAR_10);
 if (!VAR_7) {
  FUNC_2(VAR_11, "Failed to find IRQ parent domain\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_4(VAR_11, sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_2;

 VAR_12 = FUNC_10(FUNC_3(VAR_11), "ti,intr-trigger-type",
       &VAR_9->type);
 if (VAR_12) {
  FUNC_2(VAR_11, "missing ti,intr-trigger-type property\n");
  return -VAR_0;
 }

 VAR_9->sci = FUNC_5(VAR_11, "ti,sci");
 if (FUNC_0(VAR_9->sci)) {
  VAR_12 = FUNC_1(VAR_9->sci);
  if (VAR_12 != -VAR_3)
   FUNC_2(VAR_11, "ti,sci read fail %d\n", VAR_12);
  VAR_9->sci = ((void*)0);
  return VAR_12;
 }

 VAR_12 = FUNC_10(FUNC_3(VAR_11), "ti,sci-dst-id",
       &VAR_9->dst_id);
 if (VAR_12) {
  FUNC_2(VAR_11, "missing 'ti,sci-dst-id' property\n");
  return -VAR_0;
 }

 VAR_9->dst_irq = FUNC_6(VAR_9->sci, VAR_11,
          VAR_9->dst_id,
          "ti,sci-rm-range-girq");
 if (FUNC_0(VAR_9->dst_irq)) {
  FUNC_2(VAR_11, "Destination irq resource allocation failed\n");
  return FUNC_1(VAR_9->dst_irq);
 }

 VAR_8 = FUNC_7(VAR_7, 0, 0, FUNC_3(VAR_11),
       &VAR_5, VAR_9);
 if (!VAR_8) {
  FUNC_2(VAR_11, "Failed to allocate IRQ domain\n");
  return -VAR_2;
 }

 return 0;
}
