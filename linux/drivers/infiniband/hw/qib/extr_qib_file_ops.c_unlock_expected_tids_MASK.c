
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int rcvtidcnt; int pcidev; struct page** pageshadow; int tidinvalid; int * physshadow; } ;
struct qib_ctxtdata {int ctxt; struct qib_devdata* dd; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct page**,int) ;

__attribute__((used)) static void FUNC_2(struct qib_ctxtdata *VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_2->dd;
 int VAR_4 = VAR_2->ctxt * VAR_3->rcvtidcnt;
 int VAR_5, VAR_6 = 0, VAR_7 = VAR_4 + VAR_3->rcvtidcnt;

 for (VAR_5 = VAR_4; VAR_5 < VAR_7; VAR_5++) {
  struct page *VAR_8 = VAR_3->pageshadow[VAR_5];
  dma_addr_t VAR_9;

  if (!VAR_8)
   continue;

  VAR_9 = VAR_3->physshadow[VAR_5];
  VAR_3->physshadow[VAR_5] = VAR_3->tidinvalid;
  VAR_3->pageshadow[VAR_5] = ((void*)0);
  FUNC_0(VAR_3->pcidev, VAR_9, VAR_0,
          VAR_1);
  FUNC_1(&VAR_8, 1);
  VAR_6++;
 }
}
