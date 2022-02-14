
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mtip_port {int dummy; } ;
struct driver_data {scalar_t__ product_type; int slot_groups; TYPE_3__* port; TYPE_2__* pdev; scalar_t__ mmio; int dd_flag; int isr_binding; scalar_t__ unal_qdepth; TYPE_1__* work; int numa_node; } ;
struct TYPE_11__ {int svc_wait; scalar_t__ mmio; scalar_t__* completed; scalar_t__* cmd_issue; scalar_t__* s_active; struct driver_data* dd; int * cmd_issue_lock; int cmd_slot_unal; } ;
struct TYPE_10__ {int irq; int dev; } ;
struct TYPE_9__ {TYPE_3__* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ,struct driver_data*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (struct driver_data*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 unsigned long VAR_21 ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_3__* FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int) ;
 unsigned long FUNC_13 (int) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (struct driver_data*) ;
 scalar_t__ FUNC_17 (struct driver_data*) ;
 int FUNC_18 (struct driver_data*) ;
 int FUNC_19 (struct driver_data*) ;
 scalar_t__ FUNC_20 (struct driver_data*) ;
 int FUNC_21 (TYPE_3__*) ;
 int VAR_22 ;
 int FUNC_22 (TYPE_3__*) ;
 scalar_t__* FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (int ,int ,int ,int ,struct driver_data*) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int ,int *) ;
 scalar_t__ FUNC_28 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_29 (scalar_t__) ;
 int FUNC_30 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_31(struct driver_data *VAR_23)
{
 int VAR_24;
 int VAR_25;
 unsigned long VAR_26, VAR_27;

 VAR_23->mmio = FUNC_23(VAR_23->pdev)[VAR_11];

 FUNC_16(VAR_23);
 if (VAR_23->product_type == VAR_15) {
  VAR_25 = -VAR_1;
  goto out1;
 }

 FUNC_6(VAR_23);

 VAR_23->port = FUNC_11(sizeof(struct mtip_port), VAR_4,
    VAR_23->numa_node);
 if (!VAR_23->port) {
  FUNC_2(&VAR_23->pdev->dev,
   "Memory allocation: port structure\n");
  return -VAR_3;
 }


 for (VAR_24 = 0; VAR_24 < VAR_13; VAR_24++)
  VAR_23->work[VAR_24].port = VAR_23->port;


 if (FUNC_17(VAR_23))
  VAR_23->unal_qdepth = VAR_14;
 else
  VAR_23->unal_qdepth = 0;

 FUNC_0(&VAR_23->port->cmd_slot_unal, VAR_23->unal_qdepth);


 for (VAR_24 = 0; VAR_24 < VAR_13; VAR_24++)
  FUNC_26(&VAR_23->port->cmd_issue_lock[VAR_24]);


 VAR_23->port->mmio = VAR_23->mmio + VAR_17;
 VAR_23->port->dd = VAR_23;


 VAR_25 = FUNC_18(VAR_23);
 if (VAR_25 < 0)
  goto out1;


 for (VAR_24 = 0; VAR_24 < VAR_23->slot_groups; VAR_24++) {
  VAR_23->port->s_active[VAR_24] =
   VAR_23->port->mmio + VAR_24*0x80 + VAR_18;
  VAR_23->port->cmd_issue[VAR_24] =
   VAR_23->port->mmio + VAR_24*0x80 + VAR_16;
  VAR_23->port->completed[VAR_24] =
   VAR_23->port->mmio + VAR_24*0x80 + VAR_20;
 }

 VAR_27 = VAR_21;
 VAR_26 = VAR_21 + FUNC_13(30000);
 while (((FUNC_24(VAR_23->port->mmio + VAR_19) & 0x0F) != 0x03) &&
   FUNC_28(VAR_21, VAR_26)) {
  FUNC_12(100);
 }
 if (FUNC_29(FUNC_14(VAR_23->pdev))) {
  VAR_27 = VAR_21 - VAR_27;
  FUNC_3(&VAR_23->pdev->dev,
   "Surprise removal detected at %u ms\n",
   FUNC_9(VAR_27));
  VAR_25 = -VAR_2;
  goto out2 ;
 }
 if (FUNC_29(FUNC_27(VAR_12, &VAR_23->dd_flag))) {
  VAR_27 = VAR_21 - VAR_27;
  FUNC_3(&VAR_23->pdev->dev,
   "Removal detected at %u ms\n",
   FUNC_9(VAR_27));
  VAR_25 = -VAR_0;
  goto out2;
 }


 if (!(FUNC_24(VAR_23->mmio + VAR_5) & VAR_6)) {
  if (FUNC_20(VAR_23) < 0) {
   FUNC_2(&VAR_23->pdev->dev,
    "Card did not reset within timeout\n");
   VAR_25 = -VAR_1;
   goto out2;
  }
 } else {

  FUNC_30(FUNC_24(VAR_23->mmio + VAR_9),
   VAR_23->mmio + VAR_9);
 }

 FUNC_21(VAR_23->port);
 FUNC_22(VAR_23->port);


 VAR_25 = FUNC_25(VAR_23->pdev->irq, VAR_22, VAR_10,
    FUNC_1(&VAR_23->pdev->dev), VAR_23);
 if (VAR_25) {
  FUNC_2(&VAR_23->pdev->dev,
   "Unable to allocate IRQ %d\n", VAR_23->pdev->irq);
  goto out2;
 }
 FUNC_8(VAR_23->pdev->irq, FUNC_5(VAR_23->isr_binding));


 FUNC_30(FUNC_24(VAR_23->mmio + VAR_7) | VAR_8,
     VAR_23->mmio + VAR_7);

 FUNC_7(&VAR_23->port->svc_wait);

 if (FUNC_27(VAR_12, &VAR_23->dd_flag)) {
  VAR_25 = -VAR_0;
  goto out3;
 }

 return VAR_25;

out3:

 FUNC_30(FUNC_24(VAR_23->mmio + VAR_7) & ~VAR_8,
   VAR_23->mmio + VAR_7);


 FUNC_8(VAR_23->pdev->irq, ((void*)0));
 FUNC_4(VAR_23->pdev->irq, VAR_23);

out2:
 FUNC_15(VAR_23->port);
 FUNC_19(VAR_23);

out1:

 FUNC_10(VAR_23->port);

 return VAR_25;
}
