
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct vm_domain {int vmd_inacthead; } ;
struct scan_state {int * marker; TYPE_1__* pq; } ;
struct TYPE_12__ {int q; } ;
struct TYPE_11__ {scalar_t__ queue; int aflags; } ;
struct TYPE_10__ {int pq_pl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 TYPE_7__ VAR_4 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 struct vm_domain* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(struct scan_state *VAR_5, vm_page_t VAR_6)
{
 struct vm_domain *VAR_7;

 if (VAR_6->queue != VAR_3 || (VAR_6->aflags & VAR_0) != 0)
  return (0);
 FUNC_3(VAR_6, VAR_0);
 if ((VAR_6->aflags & VAR_2) != 0) {
  VAR_7 = FUNC_4(VAR_6);
  FUNC_0(&VAR_7->vmd_inacthead, VAR_6, VAR_4.q);
  FUNC_2(VAR_6, VAR_1 | VAR_2);
 } else if ((VAR_6->aflags & VAR_1) != 0) {
  FUNC_1(&VAR_5->pq->pq_pl, VAR_6, VAR_4.q);
  FUNC_2(VAR_6, VAR_1 | VAR_2);
 } else
  FUNC_0(VAR_5->marker, VAR_6, VAR_4.q);
 return (1);
}
