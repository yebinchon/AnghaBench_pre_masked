
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qib_devdata {int pcidev; TYPE_2__* cspec; } ;
struct TYPE_4__ {unsigned long long main_int_mask; int num_msix_entries; TYPE_1__* msix_entries; } ;
struct TYPE_3__ {struct qib_devdata* arg; int mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,struct qib_devdata*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct qib_devdata*,int ) ;
 int FUNC_6 (struct qib_devdata*,int ,scalar_t__) ;
 int FUNC_7 (struct qib_devdata*,int) ;

__attribute__((used)) static void FUNC_8(struct qib_devdata *VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 VAR_1->cspec->main_int_mask = ~0ULL;

 for (VAR_3 = 0; VAR_3 < VAR_1->cspec->num_msix_entries; VAR_3++) {

  if (VAR_1->cspec->msix_entries[VAR_3].arg) {



   FUNC_1(FUNC_4(VAR_1->pcidev, VAR_3),
           ((void*)0));
   FUNC_0(VAR_1->cspec->msix_entries[VAR_3].mask);
   FUNC_2(VAR_1->pcidev, VAR_3,
         VAR_1->cspec->msix_entries[VAR_3].arg);
  }
 }


 if (!VAR_1->cspec->num_msix_entries)
  FUNC_2(VAR_1->pcidev, 0, VAR_1);
 else
  VAR_1->cspec->num_msix_entries = 0;

 FUNC_3(VAR_1->pcidev);


 VAR_2 = FUNC_5(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_6(VAR_1, VAR_0, VAR_2);
}
