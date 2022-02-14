
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hfi1_msix_entry {int irq; } ;
struct TYPE_4__ {struct hfi1_msix_entry* msix_entries; } ;
struct TYPE_3__ {int num_ctxt; struct hfi1_ctxtdata** ctxt; } ;
struct hfi1_devdata {TYPE_2__ msix_info; TYPE_1__ vnic; } ;
struct hfi1_ctxtdata {size_t msix_intr; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct hfi1_devdata *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->vnic.num_ctxt; VAR_1++) {
  struct hfi1_ctxtdata *VAR_2 = VAR_0->vnic.ctxt[VAR_1];
  struct hfi1_msix_entry *VAR_3;

  VAR_3 = &VAR_0->msix_info.msix_entries[VAR_2->msix_intr];

  FUNC_0(VAR_3->irq);
 }
}
