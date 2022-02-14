
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_devdata {int num_pports; int cfgctxts; int rcvtidcnt; int ctxtcnt; int uctxt_lock; struct qib_ctxtdata** rcd; struct page** physshadow; struct page** pageshadow; TYPE_2__* pcidev; int * pioavailregs_dma; int pioavailregs_phys; TYPE_1__* pport; } ;
struct qib_ctxtdata {int dummy; } ;
struct page {int dummy; } ;
typedef struct page* dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int cc_shadow_lock; struct qib_ctxtdata** congestion_entries_shadow; struct qib_ctxtdata** ccti_entries_shadow; struct qib_ctxtdata** ccti_entries; struct qib_ctxtdata** congestion_entries; int * statusp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,void*,int ) ;
 int FUNC_1 (struct qib_ctxtdata**) ;
 int FUNC_2 (TYPE_2__*,struct page*,int ,int ) ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int FUNC_5 (struct page**,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct page**) ;

__attribute__((used)) static void FUNC_11(struct qib_devdata *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct qib_ctxtdata **VAR_6;
 unsigned long VAR_7;


 for (VAR_5 = 0; VAR_5 < VAR_3->num_pports; ++VAR_5) {
  if (VAR_3->pport[VAR_5].statusp)
   *VAR_3->pport[VAR_5].statusp &= ~VAR_2;

  FUNC_6(&VAR_3->pport[VAR_5].cc_shadow_lock);

  FUNC_1(VAR_3->pport[VAR_5].congestion_entries);
  VAR_3->pport[VAR_5].congestion_entries = ((void*)0);
  FUNC_1(VAR_3->pport[VAR_5].ccti_entries);
  VAR_3->pport[VAR_5].ccti_entries = ((void*)0);
  FUNC_1(VAR_3->pport[VAR_5].ccti_entries_shadow);
  VAR_3->pport[VAR_5].ccti_entries_shadow = ((void*)0);
  FUNC_1(VAR_3->pport[VAR_5].congestion_entries_shadow);
  VAR_3->pport[VAR_5].congestion_entries_shadow = ((void*)0);

  FUNC_8(&VAR_3->pport[VAR_5].cc_shadow_lock);
 }

 FUNC_3(VAR_3);

 if (VAR_3->pioavailregs_dma) {
  FUNC_0(&VAR_3->pcidev->dev, VAR_0,
      (void *) VAR_3->pioavailregs_dma,
      VAR_3->pioavailregs_phys);
  VAR_3->pioavailregs_dma = ((void*)0);
 }

 if (VAR_3->pageshadow) {
  struct page **VAR_8 = VAR_3->pageshadow;
  dma_addr_t *VAR_9 = VAR_3->physshadow;
  int VAR_10;

  for (VAR_4 = 0; VAR_4 < VAR_3->cfgctxts; VAR_4++) {
   int VAR_11 = VAR_4 * VAR_3->rcvtidcnt;
   int VAR_12 = VAR_11 + VAR_3->rcvtidcnt;

   for (VAR_10 = VAR_11; VAR_10 < VAR_12; VAR_10++) {
    if (!VAR_8[VAR_10])
     continue;
    FUNC_2(VAR_3->pcidev, VAR_9[VAR_10],
            VAR_0, VAR_1);
    FUNC_5(&VAR_8[VAR_10], 1);
    VAR_8[VAR_10] = ((void*)0);
   }
  }

  VAR_3->pageshadow = ((void*)0);
  FUNC_10(VAR_8);
  VAR_3->physshadow = ((void*)0);
  FUNC_10(VAR_9);
 }
 FUNC_7(&VAR_3->uctxt_lock, VAR_7);
 VAR_6 = VAR_3->rcd;
 VAR_3->rcd = ((void*)0);
 FUNC_9(&VAR_3->uctxt_lock, VAR_7);
 for (VAR_4 = 0; VAR_6 && VAR_4 < VAR_3->ctxtcnt; VAR_4++) {
  struct qib_ctxtdata *VAR_13 = VAR_6[VAR_4];

  VAR_6[VAR_4] = ((void*)0);
  FUNC_4(VAR_3, VAR_13);
 }
 FUNC_1(VAR_6);
}
