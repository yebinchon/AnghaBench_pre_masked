
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct mvebu_sei {void* sei_domain; void* ap_domain; void* cp_domain; TYPE_3__* caps; TYPE_4__* dev; int base; int res; int mask_lock; int cp_msi_lock; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_10__ {TYPE_2__ cp_range; TYPE_1__ ap_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 struct mvebu_sei* FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (void*,int ,scalar_t__,int ,int *,struct mvebu_sei*) ;
 void* FUNC_7 (int ,scalar_t__,int *,struct mvebu_sei*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,int ) ;
 scalar_t__ FUNC_10 (struct device_node*,int ) ;
 int FUNC_11 (scalar_t__,int ,struct mvebu_sei*) ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct mvebu_sei*) ;
 TYPE_3__* FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (struct device_node*) ;
 int FUNC_16 (struct platform_device*,int ,int ) ;
 struct irq_domain* FUNC_17 (int ,int *,void*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev.of_node;
 struct irq_domain *VAR_15;
 struct mvebu_sei *VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_16 = FUNC_4(&VAR_13->dev, sizeof(*VAR_16), VAR_6);
 if (!VAR_16)
  return -VAR_5;

 VAR_16->dev = &VAR_13->dev;

 FUNC_12(&VAR_16->cp_msi_lock);
 FUNC_19(&VAR_16->mask_lock);

 VAR_16->res = FUNC_16(VAR_13, VAR_7, 0);
 VAR_16->base = FUNC_3(VAR_16->dev, VAR_16->res);
 if (FUNC_0(VAR_16->base)) {
  FUNC_2(VAR_16->dev, "Failed to remap SEI resource\n");
  return FUNC_1(VAR_16->base);
 }


 VAR_16->caps = FUNC_14(&VAR_13->dev);
 if (!VAR_16->caps) {
  FUNC_2(VAR_16->dev,
   "Could not retrieve controller capabilities\n");
  return -VAR_3;
 }





 VAR_17 = FUNC_10(VAR_14, 0);
 if (VAR_17 <= 0) {
  FUNC_2(VAR_16->dev, "Failed to retrieve top-level SPI IRQ\n");
  return -VAR_4;
 }


 VAR_16->sei_domain = FUNC_7(FUNC_15(VAR_14),
         (VAR_16->caps->ap_range.size +
          VAR_16->caps->cp_range.size),
         &VAR_10,
         VAR_16);
 if (!VAR_16->sei_domain) {
  FUNC_2(VAR_16->dev, "Failed to create SEI IRQ domain\n");
  VAR_18 = -VAR_5;
  goto dispose_irq;
 }

 FUNC_9(VAR_16->sei_domain, VAR_1);


 VAR_16->ap_domain = FUNC_6(VAR_16->sei_domain, 0,
           VAR_16->caps->ap_range.size,
           FUNC_15(VAR_14),
           &VAR_8,
           VAR_16);
 if (!VAR_16->ap_domain) {
  FUNC_2(VAR_16->dev, "Failed to create AP IRQ domain\n");
  VAR_18 = -VAR_5;
  goto remove_sei_domain;
 }

 FUNC_9(VAR_16->ap_domain, VAR_2);


 VAR_16->cp_domain = FUNC_6(VAR_16->sei_domain, 0,
           VAR_16->caps->cp_range.size,
           FUNC_15(VAR_14),
           &VAR_9,
           VAR_16);
 if (!VAR_16->cp_domain) {
  FUNC_18("Failed to create CPs IRQ domain\n");
  VAR_18 = -VAR_5;
  goto remove_ap_domain;
 }

 FUNC_9(VAR_16->cp_domain, VAR_0);

 VAR_15 = FUNC_17(FUNC_15(VAR_14),
           &VAR_12,
           VAR_16->cp_domain);
 if (!VAR_15) {
  FUNC_18("Failed to create CPs MSI domain\n");
  VAR_18 = -VAR_5;
  goto remove_cp_domain;
 }

 FUNC_13(VAR_16);

 FUNC_11(VAR_17,
      VAR_11,
      VAR_16);

 return 0;

remove_cp_domain:
 FUNC_8(VAR_16->cp_domain);
remove_ap_domain:
 FUNC_8(VAR_16->ap_domain);
remove_sei_domain:
 FUNC_8(VAR_16->sei_domain);
dispose_irq:
 FUNC_5(VAR_17);

 return VAR_18;
}
