
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct hfi1_msix_entry {int * arg; } ;
struct TYPE_2__ {size_t max_requested; int msix_lock; int in_use_msix; struct hfi1_msix_entry* msix_entries; } ;
struct hfi1_devdata {TYPE_1__ msix_info; int pcidev; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct hfi1_devdata*,struct hfi1_msix_entry*) ;
 int FUNC_2 (int ,size_t,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct hfi1_devdata *VAR_0, u8 VAR_1)
{
 struct hfi1_msix_entry *VAR_2;

 if (VAR_1 >= VAR_0->msix_info.max_requested)
  return;

 VAR_2 = &VAR_0->msix_info.msix_entries[VAR_1];

 if (!VAR_2->arg)
  return;

 FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_0->pcidev, VAR_1, VAR_2->arg);

 VAR_2->arg = ((void*)0);

 FUNC_3(&VAR_0->msix_info.msix_lock);
 FUNC_0(VAR_1, VAR_0->msix_info.in_use_msix);
 FUNC_4(&VAR_0->msix_info.msix_lock);
}
