
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_msix_entry {int dummy; } ;
struct TYPE_2__ {int max_requested; struct hfi1_msix_entry* msix_entries; } ;
struct hfi1_devdata {int pcidev; TYPE_1__ msix_info; } ;


 int FUNC_0 (struct hfi1_msix_entry*) ;
 int FUNC_1 (struct hfi1_devdata*,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct hfi1_devdata *VAR_0)
{
 int VAR_1;
 struct hfi1_msix_entry *VAR_2 = VAR_0->msix_info.msix_entries;


 for (VAR_1 = 0; VAR_1 < VAR_0->msix_info.max_requested; VAR_1++, VAR_2++)
  FUNC_1(VAR_0, VAR_1);


 FUNC_0(VAR_0->msix_info.msix_entries);
 VAR_0->msix_info.msix_entries = ((void*)0);
 VAR_0->msix_info.max_requested = 0;

 FUNC_2(VAR_0->pcidev);
}
