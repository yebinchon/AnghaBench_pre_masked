
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_pagequeue {int pq_pdpages; int pq_pl; } ;
struct scan_state {scalar_t__ scanned; TYPE_1__* marker; struct vm_pagequeue* pq; } ;
struct TYPE_5__ {int q; } ;
struct TYPE_4__ {int aflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct vm_pagequeue*) ;

__attribute__((used)) static void
FUNC_4(struct scan_state *VAR_2)
{
 struct vm_pagequeue *VAR_3;

 VAR_3 = VAR_2->pq;
 FUNC_3(VAR_3);
 FUNC_0((VAR_2->marker->aflags & VAR_0) != 0,
     ("marker %p not enqueued", VAR_2->marker));

 FUNC_1(&VAR_3->pq_pl, VAR_2->marker, VAR_1.q);
 FUNC_2(VAR_2->marker, VAR_0);
 VAR_3->pq_pdpages += VAR_2->scanned;
}
