
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct vm_pagequeue {int pq_pl; } ;
struct scan_state {int maxscan; scalar_t__ scanned; TYPE_1__* marker; struct vm_pagequeue* pq; int bq; } ;
struct TYPE_10__ {int q; } ;
struct TYPE_9__ {int aflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct vm_pagequeue*) ;
 int FUNC_6 (struct vm_pagequeue*) ;

__attribute__((used)) static void
FUNC_7(struct scan_state *VAR_2, struct vm_pagequeue *VAR_3,
    vm_page_t VAR_4, vm_page_t VAR_5, int VAR_6)
{

 FUNC_5(VAR_3);
 FUNC_0((VAR_4->aflags & VAR_0) == 0,
     ("marker %p already enqueued", VAR_4));

 if (VAR_5 == ((void*)0))
  FUNC_2(&VAR_3->pq_pl, VAR_4, VAR_1.q);
 else
  FUNC_1(&VAR_3->pq_pl, VAR_5, VAR_4, VAR_1.q);
 FUNC_4(VAR_4, VAR_0);

 FUNC_3(&VAR_2->bq);
 VAR_2->pq = VAR_3;
 VAR_2->marker = VAR_4;
 VAR_2->maxscan = VAR_6;
 VAR_2->scanned = 0;
 FUNC_6(VAR_3);
}
