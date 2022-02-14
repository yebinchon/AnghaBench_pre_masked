
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pfn; } ;
struct TYPE_7__ {TYPE_1__* eq; } ;
struct mthca_dev {int mthca_flags; TYPE_4__ driver_uar; int kar; int driver_pd; TYPE_3__* pdev; TYPE_2__ eq_table; int doorbell_lock; } ;
typedef int phys_addr_t ;
struct TYPE_8__ {int irq; } ;
struct TYPE_6__ {int msi_x_vector; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*) ;
 int FUNC_6 (struct mthca_dev*) ;
 int FUNC_7 (struct mthca_dev*) ;
 int FUNC_8 (struct mthca_dev*) ;
 int FUNC_9 (struct mthca_dev*) ;
 int FUNC_10 (struct mthca_dev*) ;
 int FUNC_11 (struct mthca_dev*) ;
 int FUNC_12 (struct mthca_dev*) ;
 int FUNC_13 (struct mthca_dev*) ;
 int FUNC_14 (struct mthca_dev*,char*) ;
 int FUNC_15 (struct mthca_dev*,char*,...) ;
 int FUNC_16 (struct mthca_dev*) ;
 int FUNC_17 (struct mthca_dev*) ;
 int FUNC_18 (struct mthca_dev*) ;
 int FUNC_19 (struct mthca_dev*) ;
 int FUNC_20 (struct mthca_dev*) ;
 int FUNC_21 (struct mthca_dev*) ;
 int FUNC_22 (struct mthca_dev*) ;
 int FUNC_23 (struct mthca_dev*) ;
 int FUNC_24 (struct mthca_dev*) ;
 int FUNC_25 (struct mthca_dev*,int,int *) ;
 int FUNC_26 (struct mthca_dev*,int *) ;
 int FUNC_27 (struct mthca_dev*,TYPE_4__*) ;
 int FUNC_28 (struct mthca_dev*,TYPE_4__*) ;
 int FUNC_29 (struct mthca_dev*,char*,...) ;

__attribute__((used)) static int FUNC_30(struct mthca_dev *VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_5->doorbell_lock);

 VAR_6 = FUNC_24(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "user access region table, aborting.\n");
  return VAR_6;
 }

 VAR_6 = FUNC_27(VAR_5, &VAR_5->driver_uar);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to allocate driver access region, "
     "aborting.\n");
  goto err_uar_table_free;
 }

 VAR_5->kar = FUNC_1((phys_addr_t) VAR_5->driver_uar.pfn << VAR_3, VAR_4);
 if (!VAR_5->kar) {
  FUNC_15(VAR_5, "Couldn't map kernel access region, "
     "aborting.\n");
  VAR_6 = -VAR_0;
  goto err_uar_free;
 }

 VAR_6 = FUNC_21(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "protection domain table, aborting.\n");
  goto err_kar_unmap;
 }

 VAR_6 = FUNC_20(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "memory region table, aborting.\n");
  goto err_pd_table_free;
 }

 VAR_6 = FUNC_25(VAR_5, 1, &VAR_5->driver_pd);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to create driver PD, "
     "aborting.\n");
  goto err_mr_table_free;
 }

 VAR_6 = FUNC_18(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "event queue table, aborting.\n");
  goto err_pd_free;
 }

 VAR_6 = FUNC_12(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to switch to event-driven "
     "firmware commands, aborting.\n");
  goto err_eq_table_free;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  if (VAR_5->mthca_flags & VAR_2) {
   FUNC_29(VAR_5, "NOP command failed to generate interrupt "
       "(IRQ %d).\n",
       VAR_5->eq_table.eq[VAR_1].msi_x_vector);
   FUNC_29(VAR_5, "Trying again with MSI-X disabled.\n");
  } else {
   FUNC_15(VAR_5, "NOP command failed to generate interrupt "
      "(IRQ %d), aborting.\n",
      VAR_5->pdev->irq);
   FUNC_15(VAR_5, "BIOS or ACPI interrupt routing problem?\n");
  }

  goto err_cmd_poll;
 }

 FUNC_14(VAR_5, "NOP command IRQ test passed\n");

 VAR_6 = FUNC_17(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "completion queue table, aborting.\n");
  goto err_cmd_poll;
 }

 VAR_6 = FUNC_23(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "shared receive queue table, aborting.\n");
  goto err_cq_table_free;
 }

 VAR_6 = FUNC_22(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "queue pair table, aborting.\n");
  goto err_srq_table_free;
 }

 VAR_6 = FUNC_16(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "address vector table, aborting.\n");
  goto err_qp_table_free;
 }

 VAR_6 = FUNC_19(VAR_5);
 if (VAR_6) {
  FUNC_15(VAR_5, "Failed to initialize "
     "multicast group table, aborting.\n");
  goto err_av_table_free;
 }

 return 0;

err_av_table_free:
 FUNC_4(VAR_5);

err_qp_table_free:
 FUNC_9(VAR_5);

err_srq_table_free:
 FUNC_10(VAR_5);

err_cq_table_free:
 FUNC_5(VAR_5);

err_cmd_poll:
 FUNC_13(VAR_5);

err_eq_table_free:
 FUNC_6(VAR_5);

err_pd_free:
 FUNC_26(VAR_5, &VAR_5->driver_pd);

err_mr_table_free:
 FUNC_7(VAR_5);

err_pd_table_free:
 FUNC_8(VAR_5);

err_kar_unmap:
 FUNC_2(VAR_5->kar);

err_uar_free:
 FUNC_28(VAR_5, &VAR_5->driver_uar);

err_uar_table_free:
 FUNC_11(VAR_5);
 return VAR_6;
}
