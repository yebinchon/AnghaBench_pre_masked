
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hfi1_msix_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_requested; int in_use_msix; int msix_lock; struct hfi1_msix_entry* msix_entries; } ;
struct hfi1_devdata {scalar_t__ num_sdma; scalar_t__ n_krcv_queues; scalar_t__ num_vnic_contexts; TYPE_1__ msix_info; int pcidev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int FUNC_2 (struct hfi1_devdata*,char*,scalar_t__) ;
 struct hfi1_msix_entry* FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct hfi1_devdata *VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 struct hfi1_msix_entry *VAR_8;
 VAR_6 = 1 + VAR_5->num_sdma + VAR_5->n_krcv_queues + VAR_5->num_vnic_contexts;

 if (VAR_6 >= VAR_0)
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_5->pcidev, VAR_6, VAR_6, VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5, "pci_alloc_irq_vectors() failed: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_8 = FUNC_3(VAR_6, sizeof(*VAR_5->msix_info.msix_entries),
     VAR_3);
 if (!VAR_8) {
  FUNC_5(VAR_5->pcidev);
  return -VAR_2;
 }

 VAR_5->msix_info.msix_entries = VAR_8;
 FUNC_6(&VAR_5->msix_info.msix_lock);
 FUNC_0(VAR_5->msix_info.in_use_msix, VAR_6);
 VAR_5->msix_info.max_requested = VAR_6;
 FUNC_2(VAR_5, "%u MSI-X interrupts allocated\n", VAR_6);

 return 0;
}
