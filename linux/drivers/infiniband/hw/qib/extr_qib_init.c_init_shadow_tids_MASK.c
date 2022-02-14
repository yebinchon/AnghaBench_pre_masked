
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int cfgctxts; int rcvtidcnt; struct page** pageshadow; int * physshadow; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct page**) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct qib_devdata *VAR_0)
{
 struct page **VAR_1;
 dma_addr_t *VAR_2;

 VAR_1 = FUNC_2(FUNC_0(sizeof(struct page *),
       VAR_0->cfgctxts * VAR_0->rcvtidcnt));
 if (!VAR_1)
  goto bail;

 VAR_2 = FUNC_2(FUNC_0(sizeof(dma_addr_t),
       VAR_0->cfgctxts * VAR_0->rcvtidcnt));
 if (!VAR_2)
  goto bail_free;

 VAR_0->pageshadow = VAR_1;
 VAR_0->physshadow = VAR_2;
 return;

bail_free:
 FUNC_1(VAR_1);
bail:
 VAR_0->pageshadow = ((void*)0);
}
