
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct driver_data {int remove_list; TYPE_2__* work; scalar_t__ isr_workq; int dd_flag; int queue; TYPE_1__* pdev; int irq_workers_active; int bdev; int sr; int online_list; } ;
struct TYPE_4__ {int cpu_binding; } ;
struct TYPE_3__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 unsigned long VAR_4 ;
 int FUNC_7 (struct driver_data*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 unsigned long FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct driver_data*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 struct driver_data* FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int *) ;
 int FUNC_17 (struct pci_dev*,int) ;
 int VAR_5 ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_23(struct pci_dev *VAR_6)
{
 struct driver_data *VAR_7 = FUNC_15(VAR_6);
 unsigned long VAR_8, VAR_9;

 FUNC_18(VAR_1, &VAR_7->dd_flag);

 FUNC_19(&VAR_3, VAR_8);
 FUNC_9(&VAR_7->online_list);
 FUNC_8(&VAR_7->remove_list, &VAR_5);
 FUNC_20(&VAR_3, VAR_8);

 FUNC_13(VAR_6);
 FUNC_21(VAR_7->pdev->irq);


 VAR_9 = VAR_4 + FUNC_10(4000);
 do {
  FUNC_11(20);
 } while (FUNC_0(&VAR_7->irq_workers_active) != 0 &&
  FUNC_22(VAR_4, VAR_9));

 if (!VAR_7->sr)
  FUNC_6(VAR_7->bdev);

 if (FUNC_0(&VAR_7->irq_workers_active) != 0) {
  FUNC_3(&VAR_7->pdev->dev,
   "Completion workers still active!\n");
 }

 FUNC_1(VAR_7->queue);
 FUNC_18(VAR_2, &VAR_7->dd_flag);


 FUNC_12(VAR_7);

 if (VAR_7->isr_workq) {
  FUNC_5(VAR_7->isr_workq);
  FUNC_2(VAR_7->isr_workq);
  FUNC_4(VAR_7->work[0].cpu_binding);
  FUNC_4(VAR_7->work[1].cpu_binding);
  FUNC_4(VAR_7->work[2].cpu_binding);
 }

 FUNC_14(VAR_6);

 FUNC_19(&VAR_3, VAR_8);
 FUNC_9(&VAR_7->remove_list);
 FUNC_20(&VAR_3, VAR_8);

 FUNC_7(VAR_7);

 FUNC_17(VAR_6, 1 << VAR_0);
 FUNC_16(VAR_6, ((void*)0));
}
