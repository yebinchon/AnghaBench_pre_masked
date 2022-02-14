
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns_i3c_xfer {int node; int comp; } ;
struct TYPE_2__ {int lock; struct cdns_i3c_xfer* cur; int list; } ;
struct cdns_i3c_master {TYPE_1__ xferqueue; } ;


 int FUNC_0 (struct cdns_i3c_master*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct cdns_i3c_master *VAR_0,
           struct cdns_i3c_xfer *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->comp);
 FUNC_3(&VAR_0->xferqueue.lock, VAR_2);
 if (VAR_0->xferqueue.cur) {
  FUNC_2(&VAR_1->node, &VAR_0->xferqueue.list);
 } else {
  VAR_0->xferqueue.cur = VAR_1;
  FUNC_0(VAR_0);
 }
 FUNC_4(&VAR_0->xferqueue.lock, VAR_2);
}
